using System.Collections;
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
    //public Transform bulletBornPos;
    public float moveSpeed = 8f;

    //public float shootSpeed = 0.1f;
    //public float cdTime = 3f;
    public float cdSpeed = 0.2f;
    public Joystick moveJoystick;
    public Joystick rotateJoystick;
    //public GameObject shootingLine;
    [Header("Detection Trigger")]
    public Collider detectionTrigger;
    public float triggerSize = 2.5f;
    [Header("Sound")]
    public AudioClip shootClip;
    [Header("Debug")]
    public LineRenderer lineRenderer;
    public bool drawLine = false;

    // private
    private Animator animator;
    private WeaponManager weaponManager;
    private float movementInputValue;
    private float turnInputValue;
    private Character character;
    private GameObject closeTarget = null;
    private float shootTimeCount = 0f;
    private bool shooting = false;
    private bool autoAttack = false;
    private float overheatValue = 0f;
    private bool isOverHeat = false;

    private List<ObjectInfo> aroundMeList = new List<ObjectInfo>();
    
    private void Awake()
    {
        PlayerManager.Instance.AddToPlayerList(this.transform);

        character = GetComponent<Character>();
        animator = GetComponent<Animator>();

        weaponManager = GetComponent<WeaponManager>();
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
        //if (shooting && !isOverHeat)
        if (shooting)
        {
            Shoot();
            //shootingLine.SetActive(true);

            overheatValue += Time.deltaTime * cdSpeed;
            if (overheatValue >= 1)
            {
                overheatValue = 1;
                isOverHeat = true;
            }
        }
        else
        {
            //shootingLine.SetActive(false);

            overheatValue -= Time.deltaTime * cdSpeed;
            if (overheatValue <= 0)
            {
                overheatValue = 0;
                isOverHeat = false;
            }
        }

       UIManager.Instance.RefreshOverheadBar(overheatValue);
       //Debug.Log("overheatValue: " + overheatValue);
    }

    public void SetAutoAttackState()
    {
        autoAttack = !autoAttack;
    }

    //private void OnTriggerEnter(Collider other)
    //{
    //    if (other.gameObject.tag != "Enemy")
    //        return;

    //    if (!aroundMeList.Exists(x => x.id == other.gameObject.GetInstanceID()))
    //    {
    //        ObjectInfo objectInfo = new ObjectInfo();
    //        objectInfo.target = other.gameObject;
    //        objectInfo.id = other.gameObject.GetInstanceID();
    //        aroundMeList.Add(objectInfo);
    //    }
    //}

    //private void OnTriggerExit(Collider other)
    //{
    //    int index = aroundMeList.FindIndex(x => x.id == other.gameObject.GetInstanceID());

    //    if(index >= 0)
    //        aroundMeList.RemoveAt(index);
    //}

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

    private float horizontal = 0f;
    private float vertical = 0f;

    private void MoveingAndRotation()
    {
#if UNITY_EDITOR
        if (Input.GetKey(KeyCode.A))
            horizontal = Mathf.Lerp(horizontal, -1f, Time.deltaTime * 5f);
        else if (Input.GetKey(KeyCode.D))
            horizontal = Mathf.Lerp(horizontal, 1f, Time.deltaTime * 5f);
        else
            horizontal = Mathf.Lerp(horizontal, 0f, Time.deltaTime * 5f);

        if (Input.GetKey(KeyCode.W))
            vertical = Mathf.Lerp(vertical, 1f, Time.deltaTime * 5f);
        else if (Input.GetKey(KeyCode.S))
            vertical = Mathf.Lerp(vertical, -1f, Time.deltaTime * 5f);
        else
            vertical = Mathf.Lerp(vertical, 0f, Time.deltaTime * 5f);
#else
        horizontal = moveJoystick.Horizontal;
        vertical = moveJoystick.Vertical;
#endif

        Vector3 moveVector = (Vector3.right * vertical + Vector3.back * horizontal);
        Vector3 rotateVector = (Vector3.right * rotateJoystick.Vertical + Vector3.back * rotateJoystick.Horizontal);

        Vector3 moveDirection = new Vector3(vertical, 0, horizontal);
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
        float total = Mathf.InverseLerp(0, 1, Mathf.Abs(vertical) + Mathf.Abs(horizontal));

        if ((Mathf.Abs(rotateJoystick.Vertical) > 0 || Mathf.Abs(rotateJoystick.Horizontal) > 0) && angle > 90f)
            animator.speed = 1.2f;
        else if (total == 0)
            animator.speed = 1f;
        else
            animator.speed = total;

        if (vertical > 0f || Mathf.Abs(horizontal) > 0f)
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
        if (!animator.GetCurrentAnimatorStateInfo(0).IsName(aniName) && !animator.IsInTransition(0))
        {
            //Debug.LogWarning("Animaiton name: " + aniName);
            animator.SetTrigger(aniName);
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

        if (shootTimeCount >= weaponManager.GetCurrentGun().fireSpeed)
        {
            AudioPlayer.Instance.PlayOneShot(shootClip);
            //SoundManager.Instance.PlayShootOneShot();
            animator.CrossFadeInFixedTime(AnimationState.SHOOT, transitionDuration);
            BulletSpawner.Instance.Spawn(weaponManager.GetCurrentBulletBownTrans().position, weaponManager.GetCurrentBulletBownTrans().rotation, this.gameObject);

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
        UIManager.Instance.SetGameStatus(GameStatusUIManager.STATUS.GAMEOVER);
    }
}
