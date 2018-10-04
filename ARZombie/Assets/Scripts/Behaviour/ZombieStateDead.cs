using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateDead : SceneLinkedSMB<ZombieBehaviour> {

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        m_MonoBehaviour.Stop();
    }
}
