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
    //public GameObject bulletPrefab;
    public Transform bulletBornPos;

    public float moveSpeed = 8f;
    public Joystick joystick;

    // private
   // private BulletSpawner bulletSpawner;

    private Animator m_animator;
    private float m_movementInputValue;
    private float m_turnInputValue;
    //private Rigidbody m_rigidbody;
    //private Quaternion targetRotation;


    // Use this for initialization
    void Start ()
    {
        //targetRotation = transform.rotation;
        //bulletSpawner = GetComponent<BulletSpawner>();

        //m_rigidbody = GetComponent<Rigidbody>();
        m_animator = GetComponent<Animator>();
    }
	
	void Update ()
    {
        MoveingAndRotation();

        // Shoot
        ShootingDetect();
    }

    /// <summary>
    /// private function
    /// </summary>
    private void MoveingAndRotation()
    {
        Vector3 moveVector = (Vector3.right * joystick.Horizontal + Vector3.forward * joystick.Vertical);

        //Debug.Log("Horizontal: " + joystick.Horizontal + " Vertical: " + joystick.Vertical);

        ChangeAnimation(joystick.Vertical, joystick.Horizontal);

        if (moveVector != Vector3.zero)
        {
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

    private void ShootingDetect()
    {
        if (Input.GetMouseButtonDown(0) || Input.GetKeyDown("space"))
        {
            Shoot();
        }
    }

    /// <summary>
    /// public function
    /// </summary>

    public void Shoot()
    {
        m_animator.CrossFadeInFixedTime(AnimationState.SHOOT, transitionDuration);
        BulletSpawner.Instance.Spawn(bulletBornPos.position, transform.rotation);
    }
}
