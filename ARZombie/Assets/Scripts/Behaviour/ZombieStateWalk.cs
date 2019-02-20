using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateWalk : SceneLinkedSMB<ZombieBehaviour> {

    public float speed = 1f;

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);
        m_MonoBehaviour.SetAgentSpeed(speed);
    }

    public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        if (m_MonoBehaviour.ArrivedSpawnPosition())
        {
            m_MonoBehaviour.Idle();
        }
    }
}
