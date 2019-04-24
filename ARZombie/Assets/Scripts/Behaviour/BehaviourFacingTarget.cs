using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BehaviourFacingTarget : SceneLinkedSMB<ZombieBehaviour>
{
    public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        m_MonoBehaviour.StartFacingTarget();
    }
}