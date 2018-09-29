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
    }

    // Use this for initialization
    void Start ()
    {
        target = GameObject.FindGameObjectWithTag("Player") ;

        character.onDead += OnDead;
        character.onHurt += OnHurt;

        PlayAnimation("Walk");
    }

    private void OnDestroy()
    {
        character.onDead -= OnDead;
        character.onHurt -= OnHurt;
    }

    // Update is called once per frame
    void Update ()
    {
        if (agent != null)
            agent.SetDestination(target.transform.position);



        if(lookAtTarget)
            transform.LookAt(new Vector3(target.transform.position.x, transform.position.y, target.transform.position.z));
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
            PlayAnimation("Hurt");
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
}
