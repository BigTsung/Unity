<<<<<<< HEAD
﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateEmerge :  SceneLinkedSMB<ZombieBehaviour> {

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);

        m_MonoBehaviour.StopAgent();
    }
}
=======
﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateEmerge :  SceneLinkedSMB<ZombieBehaviour> {

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);

        //m_MonoBehaviour.StopAgent();
    }
}
>>>>>>> 6fe5de8ce4c17c05fe73a2352d3a4bf981c71802
