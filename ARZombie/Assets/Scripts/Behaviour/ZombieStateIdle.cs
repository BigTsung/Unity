using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateIdle :  SceneLinkedSMB<ZombieBehaviour> {

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);
    }

    public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStateNoTransitionUpdate(animator, stateInfo, layerIndex);

        if (m_MonoBehaviour.Detect() != null)
        {
            m_MonoBehaviour.GotoTarget();
        }
    }
}
