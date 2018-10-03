using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateRun : SceneLinkedSMB<ZombieBehaviour> {

	 public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);
    }

    public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStateNoTransitionUpdate(animator, stateInfo, layerIndex);

        ZombieBehaviour.StatusWithTarget status = m_MonoBehaviour.GetStatusWithTarget();

        Debug.Log(status);

        if (status == ZombieBehaviour.StatusWithTarget.TOOFAR)
        {
            m_MonoBehaviour.BackToSpawnPosiion();
        }
        else if(status == ZombieBehaviour.StatusWithTarget.ARRIVED_TARGET)
        {
            m_MonoBehaviour.Fighting();
        }
        else if(status == ZombieBehaviour.StatusWithTarget.KEEP_GOING)
        {
           
        }
        else
        {
            Debug.Log("not get any status!!");
        }
    }
}
