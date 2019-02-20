using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateRun : SceneLinkedSMB<ZombieBehaviour> {

    public float speed = 3f;

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);
        m_MonoBehaviour.SetAgentSpeed(speed);

        if (m_MonoBehaviour.Target == null)
        {
            m_MonoBehaviour.Detect();
            m_MonoBehaviour.GotoTarget();
        }
    }

    public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStateNoTransitionUpdate(animator, stateInfo, layerIndex);

        ZombieBehaviour.StatusWithTarget status = m_MonoBehaviour.GetStatusWithTarget();

        //Debug.Log("status: " + status);

        if (status == ZombieBehaviour.StatusWithTarget.TOOFAR)
        {
            m_MonoBehaviour.BackToSpawnPosiion();
        }
        else if(status == ZombieBehaviour.StatusWithTarget.READY_TO_ATTACK)
        {
            //Debug.Log("Attack Run" + m_MonoBehaviour.gameObject.transform.parent.name);
            m_MonoBehaviour.Attack();
        }
        else if(status == ZombieBehaviour.StatusWithTarget.KEEP_GOING)
        {
            //Debug.Log("Follow the target!!!");
            m_MonoBehaviour.KeepGoing();
        }
        else
        {
            Debug.Log("not get any status!!");
        }
    }
}
