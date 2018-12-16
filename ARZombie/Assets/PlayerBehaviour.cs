using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerBehaviour : MonoBehaviour
{
    public static class AnimationState
    {
        public static string IDLE { get { return "Idle"; } }
        public static string RUN { get { return "Run"; } }
        public static string WALK { get { return "Walk"; } }
        public static string BACK { get { return "Back"; } }
        public static string SHOOT { get { return "Shoot"; } }
        public static string DEAD { get { return "Dead"; } }
        public static string DAMAGE { get { return "Damage"; } }
    }

    private Animator animator;

    private void Awake()
    {
        animator = GetComponent<Animator>();
    }

    private void Start()
    {
        SceneLinkedSMB<PlayerBehaviour>.Initialise(animator, this);
    }
}
