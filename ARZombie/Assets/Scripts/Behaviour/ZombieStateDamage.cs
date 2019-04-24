<<<<<<< HEAD
﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateDamage : SceneLinkedSMB<ZombieBehaviour> {

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);
        m_MonoBehaviour.StopAgent();
    }

    public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        Character character = m_MonoBehaviour.GetComponent<Character>();

        if (character.Dead)
            m_MonoBehaviour.Dead();

        if (stateInfo.normalizedTime > 1f && !animator.IsInTransition(0))
        {
            //if (m_MonoBehaviour.Target == null)
            //{
            //    m_MonoBehaviour.DetectClosedTarget();
            //}
            //m_MonoBehaviour.GotoTarget();
        }
    }
}
=======
﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateDamage : SceneLinkedSMB<ZombieBehaviour> {

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);
        m_MonoBehaviour.StartDamage();
    }

    //public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    //{
    //    if (stateInfo.normalizedTime > 1f && !animator.IsInTransition(0))
    //    {
    //        //if (m_MonoBehaviour.Target == null)
    //        //{
    //        //    m_MonoBehaviour.DetectClosedTarget();
    //        //}
    //        //m_MonoBehaviour.GotoTarget();
    //    }
    //}
}
>>>>>>> 6fe5de8ce4c17c05fe73a2352d3a4bf981c71802
