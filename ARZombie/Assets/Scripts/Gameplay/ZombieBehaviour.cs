using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Animator))]
public class ZombieBehaviour : MonoBehaviour {

    private Animator animator;
    //private GameObject
    // Use this for initialization

    public GameObject Target
    {
        get;
        set;
    }
    void Start ()
    {
        animator = GetComponent<Animator>();

        SceneLinkedSMB<ZombieBehaviour>.Initialise(animator, this);

        Target = GameObject.FindGameObjectWithTag("Player");
        Debug.Log("ZombieBehaviour Start");
    }

	// Update is called once per frame
	void Update ()
    {
		
	}

    public void FindTarget()
    {

    }
}
