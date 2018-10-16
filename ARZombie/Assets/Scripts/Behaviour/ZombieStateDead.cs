﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateDead : SceneLinkedSMB<ZombieBehaviour> {

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        m_MonoBehaviour.Stop();
    }

    public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        if (stateInfo.normalizedTime > 1f && !animator.IsInTransition(0))
        {
            m_MonoBehaviour.Disappear();
        }
    }

    public override void OnSLStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStateExit(animator, stateInfo, layerIndex);

        //m_MonoBehaviour.Disappear();
    }
}
