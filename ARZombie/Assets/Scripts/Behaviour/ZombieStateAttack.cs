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

        m_MonoBehaviour.StartAttack();

        //m_MonoBehaviour.StopAgent();
    }

    public override void OnSLStateNoTransitionUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        float normalizeTime = stateInfo.normalizedTime;

        if (normalizeTime >= damageLaunchNormalTime && normalizeTime <= damageDislaunchNormalTime)
        {
            m_MonoBehaviour.SetActiveDamageBall(true);
        }
        else
        {
            m_MonoBehaviour.SetActiveDamageBall(false);
        }
    }
}
