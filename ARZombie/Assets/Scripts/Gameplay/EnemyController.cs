using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyController : MonoBehaviour
{
    //public Transform destination;
    public bool lookAtTarget = false;

    private NavMeshAgent agent;
    private GameObject target;
    private Animator animator;
    private Collider collider;
    private Character character;
    private EnemyHurtBehaviour enemyHurtBehaviour;


    //public NavMeshAgent Agent
    //{
    //    get { return agent; }
    //}

    //public Animator Ani
    //{
    //    get { return animator; }
    //}

    //public Collider ColliderCom
    //{
    //    get { return collider; }
    //}

    void Awake()
    {
        if (agent == null)
            agent = GetComponent<NavMeshAgent>();
        if (animator == null)
            animator = GetComponent<Animator>();
        if (collider == null)
            collider = GetComponent<Collider>();
        if (character == null)
            character = GetComponent<Character>();

        if (enemyHurtBehaviour == null && animator != null)
            enemyHurtBehaviour = animator.GetBehaviour<EnemyHurtBehaviour>();
    }

    // Use this for initialization
    void Start ()
    {
        target = GameObject.FindGameObjectWithTag("Player") ;

        PlayAnimation("Walk");
    }

    void OnEnable()
    {
        character.onDead += OnDead;
        character.onDamage += OnHurt;

        enemyHurtBehaviour.OnStateEntered += OnHurtStateEntered;
        enemyHurtBehaviour.OnStateExited += OnHurtStateExited;
    }

    private void OnDestroy()
    {
        character.onDead -= OnDead;
        character.onDamage -= OnHurt;

        enemyHurtBehaviour.OnStateEntered -= OnHurtStateEntered;
        enemyHurtBehaviour.OnStateExited -= OnHurtStateExited;
    }

    void Update ()
    {
        if (agent != null)
            agent.SetDestination(target.transform.position);

        if (lookAtTarget)
            transform.LookAt(new Vector3(target.transform.position.x, transform.position.y, target.transform.position.z));

        //Debug.Log("remainingDistance: " + agent.remainingDistance);

    }

    private void OnDead()
    {
        //Debug.Log("Dead");
        if (!animator.GetCurrentAnimatorStateInfo(0).IsName("Dead"))
        {
            PlayAnimation("Dead");
            SoundManager.Instance.PlayZombieDeathOneShot();
            agent.isStopped = true;
            lookAtTarget = false;
            collider.enabled = false;
            Invoke("Disappear", 3f);
        }
    }

    private void OnHurt(int hurtVal)
    {
        //Debug.Log("Hurt value: " + hurtVal);
        //Debug.Log(character.Dead);

        if (!character.Dead)
        {
            PlayAnimation("Hurt");
           
            //StartCoroutine(WaitForAnimation("Hurt"));
        }
    }

    private void Disappear()
    {
        gameObject.SetActive(false);
    }

    private void PlayAnimation(string triggerName)
    {
        //Debug.Log("Animation Name: " + triggerName);
        animator.SetTrigger(triggerName);
    }

    private bool ArrivedDestination()
    {
        bool isArrived = false;

        if (agent.remainingDistance <= agent.stoppingDistance)
        {
            if (!agent.hasPath || agent.velocity.sqrMagnitude == 0f)
            {
                // arrived
                isArrived = true;
            }
            else
            {
                isArrived = false;
            }
        }
        else
        {
            isArrived = false;
        }

        return isArrived;
    }

    // ////////////////////////////////////
    // Callback Function
    // ////////////////////////////////////

    private void OnHurtStateEntered(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        //Debug.Log("animation Enter");
        agent.isStopped = true;
    }

    private void OnHurtStateExited(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        //Debug.Log("animation Exit");
        agent.isStopped = false;

        if (ArrivedDestination() == false)
            PlayAnimation("Walk");
    }

}
