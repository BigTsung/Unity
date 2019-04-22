using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BehaviourDetection : SceneLinkedSMB<ZombieBehaviour>
{
    public bool waitCurrentStateDone = false;

    public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStateNoTransitionUpdate(animator, stateInfo, layerIndex);

        // Detect Target
        if(waitCurrentStateDone)
        {
            if (stateInfo.normalizedTime > 1f && !animator.IsInTransition(0))
            {
                m_MonoBehaviour.Detect();
                // Process detection result
                m_MonoBehaviour.ProcessDetectionResult();
            }
            else
            {
                Debug.Log("stateInfo.normalizedTime: " + stateInfo.normalizedTime);
            }
        }
        else
        {
            m_MonoBehaviour.Detect();
            // Process detection result
            m_MonoBehaviour.ProcessDetectionResult();
        }

       
    }
}