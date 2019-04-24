using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateIdle :  SceneLinkedSMB<ZombieBehaviour> {

    //public float minGroutTime = 3f;
    //public float maxGroutTime = 5f;

    //private float randomGroudTime = 0f;
    //private float groutTimeCount = 0f;

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);

        Debug.Log("Enter Idle");
        m_MonoBehaviour.ResetIndleInteger();
        //randomGroudTime = Random.Range(minGroutTime, maxGroutTime);
    }

    public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStateNoTransitionUpdate(animator, stateInfo, layerIndex);

        //groutTimeCount += Time.deltaTime;

        //if (groutTimeCount >= randomGroudTime)
        //{
        //    m_MonoBehaviour.Grout();
        //    groutTimeCount = 0f;
        //}

        //if (m_MonoBehaviour.Detect() != null)
        //{
        //    if (m_MonoBehaviour.Target != null)
        //        m_MonoBehaviour.GotoTarget();
        //}
    }

    public override void OnSLStatePreExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePreExit(animator, stateInfo, layerIndex);
        Debug.Log("Exit Idle");
    }
}
