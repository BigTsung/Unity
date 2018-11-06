﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

    public static class AnimationState
    {
        public static string IDLE { get { return "Idle"; } }
        public static string RUN { get { return "Run"; } }
        public static string WALK { get { return "Walk"; } }
        public static string BACK { get { return "Back"; } }
        public static string SHOOT { get { return "Shoot"; } }
        public static string DEAD { get { return "Dead"; } }
        public static string DAMAGE { get { return "Damage"; } }
    }

    private struct ObjectInfo
    {
        public GameObject target;
        public int id;
    }

    public float m_Speed = 12f;
    public float m_turnSpeed = 180f;
    public float rotateSpeed = 10f;
    public float rotateAngleFix = -35f;
    public float transitionDuration = 0.1f;
    public Transform bulletBornPos;
    public float moveSpeed = 8f;
    //[Range()]
    public float shootSpeed = 0.1f;
    //public float cdTime = 3f;
    public float cdSpeed = 0.2f;
    public Joystick moveJoystick;
    public Joystick rotateJoystick;
    public GameObject shootingLine;
    [Header("Detection Trigger")]
    public Collider detectionTrigger;
    public float triggerSize = 2.5f;
    [Header("Debug")]
    public LineRenderer lineRenderer;
    public bool drawLine = false;

    // private
    private Animator m_animator;
    private float m_movementInputValue;
    private float m_turnInputValue;
    private Character character;
    private GameObject closeTarget = null;
    private float shootTimeCount = 0f;
    private bool shooting = false;
    private bool autoAttack = false;
    private float overheatValue = 0f;

    private List<ObjectInfo> aroundMeList = new List<ObjectInfo>();
    
    private void Awake()
    {
        PlayerManager.Instance.AddToPlayerList(this.transform);

        character = GetComponent<Character>();
        m_animator = GetComponent<Animator>();
    }

    void Start ()
    {
        InitDetectionTrigger();

        UIManager.Instance.InitHealthBar(character.HP);
    }

    private void OnEnable()
    {
        if (character != null)
            character.onDamage += onDamage;

        if (character != null)
            character.onDead += OnDead;
    }

    private void OnDestroy()
    {
        if (character != null)
            character.onDamage -= onDamage;

        if (character != null)
            character.onDead += OnDead;
    }

    void Update ()
    {
        if (IsDead())
        {
            SetAnimation(AnimationState.DEAD);
            return;
        }
           
        MoveingAndRotation();

        if(autoAttack)
            RotateToTarget();

        // Shoot
        if (shooting)
        {
            Shoot();
            shootingLine.SetActive(true);

            overheatValue += Time.deltaTime * cdSpeed;
            if (overheatValue >= 1)
                overheatValue = 1;
        }
        else
        {
            shootingLine.SetActive(false);

            overheatValue -= Time.deltaTime * cdSpeed;
            if (overheatValue <= 0)
                overheatValue = 0;
        }

       UIManager.Instance.RefreshOverheadBar(overheatValue);
       Debug.Log("overheatValue: " + overheatValue);
    }

    public void SetAutoAttackState()
    {
        autoAttack = !autoAttack;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag != "Enemy")
            return;

        if (!aroundMeList.Exists(x => x.id == other.gameObject.GetInstanceID()))
        {
            ObjectInfo objectInfo = new ObjectInfo();
            objectInfo.target = other.gameObject;
            objectInfo.id = other.gameObject.GetInstanceID();
            aroundMeList.Add(objectInfo);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        int index = aroundMeList.FindIndex(x => x.id == other.gameObject.GetInstanceID());

        if(index >= 0)
            aroundMeList.RemoveAt(index);
    }

    /// <summary>
    /// private function
    /// </summary>
    /// 
    private void InitDetectionTrigger()
    {
        if (detectionTrigger != null)
        {
            (detectionTrigger as SphereCollider).radius = triggerSize;
        }
    }

    private void RotateToTarget()
    {
        if (aroundMeList.Count > 0)
        {
            closeTarget = GetMostClosedTarget();
            if(closeTarget != null)
            {
                transform.LookAt(new Vector3(closeTarget.transform.position.x, transform.position.y, closeTarget.transform.position.z));
            }
        }
    }

    private GameObject GetMostClosedTarget()
    {
        GameObject target = null;
        float minDis = float.MaxValue;
        float dis = 0f;

        for (int i = 0; i < aroundMeList.Count; i++)
        {
            dis = Vector3.Distance(transform.position, aroundMeList[i].target.transform.position);
            if (dis < minDis && aroundMeList[i].target.activeInHierarchy)
            {
                minDis = dis;
                target = aroundMeList[i].target;
            }
        }

        return target;
    }

    private void MoveingAndRotation()
    {
        Vector3 moveVector = (Vector3.right * moveJoystick.Vertical + Vector3.back * moveJoystick.Horizontal);
        Vector3 rotateVector = (Vector3.right * rotateJoystick.Vertical + Vector3.back * rotateJoystick.Horizontal);

        Vector3 moveDirection = new Vector3(moveJoystick.Vertical, 0, moveJoystick.Horizontal);
        Vector3 rotateDirection = new Vector3(rotateJoystick.Vertical, 0, rotateJoystick.Horizontal);

        float angle = Vector3.Angle(moveDirection, rotateDirection);

        // Move and Rotate
        if (moveVector != Vector3.zero)
        {
            if (rotateVector != Vector3.zero) //  drag move and rotate joystick
            {
                //transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.Euler(resultRotate), Time.deltaTime * rotateSpeed);

                if (angle <= 90f)
                {
                    transform.Translate(rotateVector * moveSpeed / 2f * Time.deltaTime, Space.World);
                }
                else
                {
                    transform.Translate(moveVector * moveSpeed / 2f * Time.deltaTime, Space.World);
                }

                Vector3 resultRotate = Quaternion.LookRotation(rotateVector).eulerAngles;
                resultRotate.y += rotateAngleFix + 15f;
                transform.rotation = Quaternion.Euler(resultRotate);
            }
            else // only drag move joystick
            {
                transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(moveVector), Time.deltaTime * rotateSpeed);
                transform.Translate(moveVector * moveSpeed * Time.deltaTime, Space.World);
            }
        }
        else
        {
            if (rotateVector != Vector3.zero)// only drag rotate joystick
            {
                Vector3 resultRotate = Quaternion.LookRotation(rotateVector).eulerAngles;
                resultRotate.y += rotateAngleFix;
                transform.rotation = Quaternion.Euler(resultRotate);
            }
        }
        // Speed
        float total = Mathf.InverseLerp(0, 1, Mathf.Abs(moveJoystick.Vertical) + Mathf.Abs(moveJoystick.Horizontal));

        if ((Mathf.Abs(rotateJoystick.Vertical) > 0 || Mathf.Abs(rotateJoystick.Horizontal) > 0) && angle > 90f)
            m_animator.speed = 1.2f;
        else if (total == 0)
            m_animator.speed = 1f;
        else
            m_animator.speed = total;

        if (Mathf.Abs(moveJoystick.Vertical) > 0f || Mathf.Abs(moveJoystick.Horizontal) > 0f)
            ChangeAnimation(angle, true, Mathf.Abs(rotateJoystick.Vertical) > 0f || Mathf.Abs(rotateJoystick.Horizontal) > 0f);
        else
            ChangeAnimation(angle, false);

        //if(drawLine)
        //    DrawLine();
    }

    //private void DrawLine()
    //{
    //    if (lineRenderer != null)
    //    {
    //        lineRenderer.SetWidth(0.1f, 0.01f);
    //        lineRenderer.SetVertexCount(2);
    //        lineRenderer.SetPosition(0, bulletBornPos.position);
    //        lineRenderer.SetPosition(1, bulletBornPos.forward * 10f);
    //    }
    //}

    private void ChangeAnimation(float angle, bool moving, bool firing = false)
    {
        // Animation
        if (moving)
        {
            if (firing)
            {
                if (angle <= 90f)
                    SetAnimation(AnimationState.WALK);
                else
                    SetAnimation(AnimationState.BACK);
            }
            else
            {
                if (angle <= 90f)
                    SetAnimation(AnimationState.RUN);
                else
                    SetAnimation(AnimationState.BACK);
            }
        }
        else
        {
            SetAnimation(AnimationState.IDLE);
        }
    }

    private void SetAnimation(string aniName)
    {
        if (!m_animator.GetCurrentAnimatorStateInfo(0).IsName(aniName) && !m_animator.IsInTransition(0))
        {
           Debug.LogWarning("Animaiton name: " + aniName);
            m_animator.SetTrigger(aniName);
        }
    }

    /// <summary>
    /// public function
    /// </summary>
    public void ShootSwitcher(bool status)
    {
        //Debug.Log("Click status: " + status);
        shooting = status;
    }

    private void Shoot()
    {
        shootTimeCount += Time.deltaTime;

        if (shootTimeCount >= shootSpeed)
        {
            SoundManager.Instance.PlayShootOneShot();
            m_animator.CrossFadeInFixedTime(AnimationState.SHOOT, transitionDuration);
            BulletSpawner.Instance.Spawn(bulletBornPos.position, bulletBornPos.rotation, this.gameObject);

            shootTimeCount = 0f;
        }
    }

    private bool IsDead()
    {
        if (character != null)
            return character.Dead;

        return false;
    }

    private void onDamage(int hp)
    {
        if (IsDead())
            return;

        //Debug.Log("onDamage");

        SetAnimation(AnimationState.DAMAGE);
        UIManager.Instance.RefreshHealthBar(hp);
    }

    private void OnDead()
    {
        //Debug.Log("OnDead");
        UIManager.Instance.RefreshHealthBar(0);
        SetAnimation(AnimationState.DEAD);
    }
}
