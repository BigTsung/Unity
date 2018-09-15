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

    // private
    private BulletSpawner bulletSpawner;

    private Animator m_animator;
    private float m_movementInputValue;
    private float m_turnInputValue;
    private Rigidbody m_rigidbody;
    private Quaternion targetRotation;


    // Use this for initialization
    void Start ()
    {
        targetRotation = transform.rotation;

        bulletSpawner = GetComponent<BulletSpawner>();

        m_rigidbody = GetComponent<Rigidbody>();
        m_animator = GetComponent<Animator>();
    }
	
	void Update ()
    {
        m_movementInputValue = Input.GetAxis("Vertical");
        m_turnInputValue = Input.GetAxis("Horizontal");

        //Debug.Log(m_movementInputValue + " " + m_turnInputValue);

        // Move
        MovingDetect();

        // Shoot
        ShootingDetect();

    }

    private void MovingDetect()
    {
        if (m_animator.GetCurrentAnimatorStateInfo(0).IsName(AnimationState.SHOOT))
            return;

        if(m_movementInputValue > 0.15f || Mathf.Abs(m_turnInputValue) > 0.25f)
        {
            if (!m_animator.GetCurrentAnimatorStateInfo(0).IsName(AnimationState.RUN) && !m_animator.IsInTransition(0))
            {
                m_animator.CrossFadeInFixedTime(AnimationState.RUN, transitionDuration);
            }
        }
        else if (m_movementInputValue < -0.15f)
        {
            if (!m_animator.GetCurrentAnimatorStateInfo(0).IsName(AnimationState.BACK) && !m_animator.IsInTransition(0))
            {
                m_animator.CrossFadeInFixedTime(AnimationState.BACK, transitionDuration);
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
        if (Input.GetMouseButtonDown(0))
        {
            m_animator.CrossFadeInFixedTime(AnimationState.SHOOT, transitionDuration);  
            bulletSpawner.Spawn(bulletBornPos.position, transform.rotation);
        }
    }

    private void FixedUpdate()
    {
        Move();
        Turn();
    }

    private void Move()
    {
        m_rigidbody.velocity = transform.forward * m_movementInputValue * m_Speed;
    }

    private void Turn()
    {
        if (m_movementInputValue < 0)
            m_turnInputValue = 0 - m_turnInputValue;

        targetRotation *= Quaternion.AngleAxis(m_turnInputValue * m_turnSpeed * Time.deltaTime, Vector3.up) ;
        transform.rotation = targetRotation;
    }
}
