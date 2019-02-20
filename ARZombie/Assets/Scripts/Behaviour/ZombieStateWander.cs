using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateWander : SceneLinkedSMB<ZombieBehaviour> {

    public float agentSpeed = 1f;

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);
        m_MonoBehaviour.AgentWork();
        m_MonoBehaviour.SetAgentSpeed(agentSpeed);
        m_MonoBehaviour.StartWander();
    }

    public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStateNoTransitionUpdate(animator, stateInfo, layerIndex);
    }
}
