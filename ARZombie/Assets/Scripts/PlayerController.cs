using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

    public static class AnimationState
    {
        public static string IDLE { get { return "Idle"; } }
        public static string RUN { get { return "Run"; } }
        public static string BACK { get { return "Back"; } }
        public static string SHOOT { get { return "Shoot"; } }
        public static string DEPTH { get { return "Depth"; } }
    }

    // public
    public float m_Speed = 12f;
    public float m_turnSpeed = 180f;
    public float transitionDuration = 0.1f;
    public Transform bulletBornPos;
    public float moveSpeed = 8f;
    public float shootSpeed = 0.1f;
    public Joystick joystick;
    [Header("Detection Trigger")]
    public Collider detectionTrigger;
    public float triggerSize = 2.5f;

    // private
    private Animator m_animator;
    private float m_movementInputValue;
    private float m_turnInputValue;
    private GameObject closeTarget = null;
    private float shootTimeCount = 0f;
    private bool shooting = false;

    private List<GameObject> aroundMeList = new List<GameObject>();

    // Use this for initialization
    void Start ()
    {
        m_animator = GetComponent<Animator>();
        InitDetectionTrigger();
    }
	
	void Update ()
    {
        MoveingAndRotation();

        //RotateObjectBaseOnTarget();

        // Shoot
        if (shooting)
            Shoot();

    }

    private void OnTriggerEnter(Collider other)
    {
        //Debug.Log(other.name);
        if (!aroundMeList.Contains(other.gameObject) && other.tag != "Obstacle")
        {
            //Debug.Log(other.name + " " + other.tag);
            aroundMeList.Add(other.gameObject);
        }
    }

    private void OnTriggerExit(Collider other)
    {
        int index = aroundMeList.FindIndex(x => x == other.gameObject);
        //Debug.Log(aroundMeList.Count + " " + index);
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

    private void RotateObjectBaseOnTarget()
    {
        //Debug.Log(aroundMeList.Count);
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
            dis = Vector3.Distance(transform.position, aroundMeList[i].transform.position);
            if (dis < minDis)
            {
                minDis = dis;
                target = aroundMeList[i];
            }
        }
    
        return target;
    }

    private void MoveingAndRotation()
    {
        Vector3 moveVector = (Vector3.right * joystick.Vertical + Vector3.back * joystick.Horizontal);
        Vector3 rotateVector = Vector3.zero;
        //Debug.Log("Horizontal: " + joystick.Horizontal + " Vertical: " + joystick.Vertical);

        ChangeAnimation(joystick.Vertical, joystick.Horizontal);

        if (moveVector != Vector3.zero)
        {
            //rotateVector = Vector3.Lerp(transform.rotation.eulerAngles, moveVector, 0.1f);
            //transform.rotation = Quaternion.LookRotation(rotateVector);
            transform.rotation = Quaternion.LookRotation(moveVector);
            transform.Translate(moveVector * moveSpeed * Time.deltaTime, Space.World);
        }
    }

    private void ChangeAnimation(float movementValue, float turnValue)
    {
        float total = Mathf.InverseLerp(0, 1, Mathf.Abs(movementValue) + Mathf.Abs(turnValue));

        if (total == 0)
            m_animator.speed = 1f;
        else
            m_animator.speed = total;

        //Debug.Log("total: " + total + "  speed: " + m_animator.speed);
        //Debug.Log(Mathf.Abs(movementValue) + "  " + Mathf.Abs(turnValue) + "  " + total);

        if (Mathf.Abs(movementValue) > 0.05f || Mathf.Abs(turnValue) > 0.05f)
        {
            if (!m_animator.GetCurrentAnimatorStateInfo(0).IsName(AnimationState.RUN) && !m_animator.IsInTransition(0))
            {
                m_animator.CrossFadeInFixedTime(AnimationState.RUN, transitionDuration);
            }
        }
        else
        {
            if (!m_animator.GetCurrentAnimatorStateInfo(0).IsName(AnimationState.IDLE) && !m_animator.IsInTransition(0))
            {
                m_animator.CrossFadeInFixedTime(AnimationState.IDLE, transitionDuration);
            }
        }
    }

    /*private void ShootingDetect()
    {
        if (Input.GetMouseButtonDown(0) || Input.GetKeyDown("space"))
        {
            Shoot();
        }
    }*/

    /// <summary>
    /// public function
    /// </summary>
    public void ShootSwitcher(bool status)
    {
        shooting = status;
    }

    public void Shoot()
    {
        //Debug.Log("Shoot");

        shootTimeCount += Time.deltaTime;

        if (shootTimeCount >= shootSpeed)
        {
            m_animator.CrossFadeInFixedTime(AnimationState.SHOOT, transitionDuration);
            BulletSpawner.Instance.Spawn(bulletBornPos.position, transform.rotation);

            shootTimeCount = 0f;
        }
    }
}
