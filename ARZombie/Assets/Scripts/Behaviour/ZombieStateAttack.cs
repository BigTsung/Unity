using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateAttack : SceneLinkedSMB<ZombieBehaviour> {

    public float damageLaunchNormalTime = 0.24f;
    public float damageDislaunchNormalTime = 0.26f;

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);

        if (damageDislaunchNormalTime < damageLaunchNormalTime)
            damageLaunchNormalTime = damageDislaunchNormalTime;

        m_MonoBehaviour.Stop();
    }

    public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        float normalizeTime = stateInfo.normalizedTime;

        //Debug.Log(normalizeTime);

        if (normalizeTime >= damageLaunchNormalTime && normalizeTime <= damageDislaunchNormalTime)
        {
            m_MonoBehaviour.SetActiveDamageBall(true);
        }
        else
        {
            m_MonoBehaviour.SetActiveDamageBall(false);
        }

        //Debug.Log(stateInfo.normalizedTime);
        ZombieBehaviour.StatusWithTarget status = m_MonoBehaviour.GetStatusWithTarget();

        //Debug.Log(stateInfo.normalizedTime);

        if (normalizeTime > 1f && !animator.IsInTransition(0))
        {
            //Debug.Log("Attck state done!!!");
            if (status == ZombieBehaviour.StatusWithTarget.TOOFAR)
            {
                m_MonoBehaviour.BackToSpawnPosiion();
                //Debug.Log("TOOFAR!!!");
            }
            else if (status == ZombieBehaviour.StatusWithTarget.READY_TO_ATTACK)
            {
                m_MonoBehaviour.Attack();
                //Debug.Log("Attack!!!");
            }
            else if (status == ZombieBehaviour.StatusWithTarget.KEEP_GOING)
            {
                m_MonoBehaviour.KeepGoing();
                //Debug.Log("KeepGoing!!!");
            }
            else
            {
                //Debug.Log("not get any status!!");
            }
        }
    }
}
