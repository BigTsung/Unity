using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateEmerge :  SceneLinkedSMB<ZombieBehaviour> {

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);

        m_MonoBehaviour.AgentStop();
    }
}
