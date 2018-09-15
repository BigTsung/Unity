﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyController : MonoBehaviour
{

    //public Transform destination;
    private NavMeshAgent agent;
    private GameObject target;
    private Animator animator;

    public NavMeshAgent Agent
    {
        get { return agent; }
    }

    public Animator Ani
    {
        get { return animator; }
    }

    void Awake()
    {
        if (agent == null)
            agent = GetComponent<NavMeshAgent>();
        if (animator == null)
            animator = GetComponent<Animator>();
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
