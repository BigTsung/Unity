using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateDamage : SceneLinkedSMB<ZombieBehaviour> {

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);
        m_MonoBehaviour.Stop();
    }

    public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        if (stateInfo.normalizedTime > 1f && !animator.IsInTransition(0))
        {
            if (m_MonoBehaviour.Target == null)
            {
                m_MonoBehaviour.DetectClosedTarget();
            }
            m_MonoBehaviour.GotoTarget();
        }
    }
}
