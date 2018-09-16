using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyController : MonoBehaviour
{
    //public Transform destination;
    private NavMeshAgent agent;
    private GameObject target;
    private Animator animator;
    private Collider collider;

    public NavMeshAgent Agent
    {
        get { return agent; }
    }

    public Animator Ani
    {
        get { return animator; }
    }

    public Collider ColliderCom
    {
        get { return collider; }
    }

    void Awake()
    {
        if (agent == null)
            agent = GetComponent<NavMeshAgent>();
        if (animator == null)
            animator = GetComponent<Animator>();
        if (collider == null)
            collider = GetComponent<Collider>();
    }

    // Use this for initialization
    void Start ()
    {
        target = GameObject.FindGameObjectWithTag("Player") ;
	}
	
	// Update is called once per frame
	void Update ()
    {
        if (agent != null)
            agent.SetDestination(target.transform.position);
    }
}
