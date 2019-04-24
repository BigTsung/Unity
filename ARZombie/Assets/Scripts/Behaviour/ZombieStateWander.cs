<<<<<<< HEAD
﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateWander : SceneLinkedSMB<ZombieBehaviour> {

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);

        m_MonoBehaviour.StartWander();
    }
}
=======
﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ZombieStateWander : SceneLinkedSMB<ZombieBehaviour> {

    public override void OnSLStatePostEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnSLStatePostEnter(animator, stateInfo, layerIndex);

        m_MonoBehaviour.StartWander();
    }
}
>>>>>>> 6fe5de8ce4c17c05fe73a2352d3a4bf981c71802
