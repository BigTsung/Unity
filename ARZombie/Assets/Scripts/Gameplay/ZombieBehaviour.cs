<<<<<<< HEAD
﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(NavMeshAgent))]
[RequireComponent(typeof(Collider))]
public class ZombieBehaviour : MonoBehaviour {

    //private static string Ani_Walk      = "Walk";
    private static string Ani_Follow    = "Follow";
    private static string Ani_Damage    = "Damage";
    private static string Ani_Dead      = "Dead";
    private static string Ani_Idle      = "Idle";
    private static string Ani_Attack    = "Attack";
    private static string Ani_Wander    = "Wander";

    public bool drawGizmos = false;
    public TargetScanner targetScanner;
    public float stoppingDistance = 1f;
    public SphereCollider damageBallCollider;

    [Header("Wander")]
    public float minRandomWanderTime = 3f;
    public float maxRandomWanderTime = 7f;
    public float wanderAgentSpeed = 1f;

    [Header("Sound")]
    public AudioClip deadClip;

    [Header("Audio")]
    public RandomAudioPlayer audioGrout;

    private NavMeshAgent agent;
    private Animator animator;
    private Collider m_collider;
    private Character character;
    private bool fighting = false;
    private Vector3 spawnPosition;
    private bool faceingTarget = false;
    private Behaviour currentBehaviour;

    public enum Behaviour
    {
        Wander,
        Idle,
        Attack,
        Damage,
        Dead,
        Follow
    }
=======
﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(NavMeshAgent))]
[RequireComponent(typeof(Collider))]
public class ZombieBehaviour : MonoBehaviour {

    private static string Ani_Follow    = "Follow";
    private static string Ani_Damage    = "Damage";
    private static string Ani_Dead      = "Dead";
    private static string Ani_Idle      = "Idle";
    private static string Ani_Attack    = "Attack";
    private static string Ani_Wander    = "Wander";

    public TargetScanner targetScanner;
>>>>>>> 6fe5de8ce4c17c05fe73a2352d3a4bf981c71802

    public SphereCollider damageBallCollider;

    [Header("Wander")]
    public float minRandomWanderTime = 3f;
    public float maxRandomWanderTime = 7f;
    public float wanderAgentSpeed = 1f;
    public float wanderAnimationSpeed = 1f;

    [Header("Follow")]
    public float followAgentSpeed = 3f;
    public float followAnimationSpeed = 1f;

    [Header("Attack")]
    public float allowAttackDistance = 1f;

    [Header("Dead")]
    public float disappearTime = 5f;

    [Header("Sound")]
    public AudioClip deadClip;

    [Header("Audio")]
    public RandomAudioPlayer audioGrout;

    [Header("Debug")]
    public bool drawGizmos = false;

    private NavMeshAgent agent;
    private Animator animator;
    private Collider m_collider;
    private Character character;
    private Vector3 spawnPosition;
    private Behaviour currentBehaviour;

    public enum Behaviour
    {
        Wander,
        Idle,
        Attack,
        Damage,
        Dead,
        Follow
    }

    public Transform Target
    {
        get;
        set;
    }

    private bool AgentIsStop
    {
<<<<<<< HEAD
        NONE,
        TOOFAR,
        READY_TO_ATTACK,
        KEEP_GOING
    }

    public Transform Target
    {
        get;
        set;
    }

    //public bool IsWander
    //{
    //    get;
    //    set;
    //}
    
    void Awake()
    {
        character = GetComponent<Character>();
        m_collider = GetComponent<Collider>();
        animator = GetComponent<Animator>();
        agent = GetComponent<NavMeshAgent>();
    }

    private void OnEnable()
    {
        this.transform.localPosition = Vector3.zero;

        character.onDead += OnDead;
        character.onDamage += OnDamage;

        SceneLinkedSMB<ZombieBehaviour>.Initialise(animator, this);

        SetActiveCollider(true);
        SetActiveDamageBall(false);

        spawnPosition = new Vector3(transform.position.x, transform.position.y, transform.position.z);
    }

    private void OnDisable()
    {
        character.onDead -= OnDead;
        character.onDamage -= OnDamage;
    }

    private void Update()
    {
        Detect();

        if (Target != null)
        {
            SetAnimatorTrigger(Ani_Follow);
        }
        else
        {
            SetAnimatorTrigger(Ani_Wander);
        }
    }

    private void FixedUpdate()
    {
        //if (Target != null && faceingTarget)
        //{
        //    transform.LookAt(new Vector3(Target.position.x, transform.position.y, Target.position.z));
        //}

        if (agent.isStopped)
            return;

        if (fighting && Target != null)
        {
            Debug.Log("Go target");
            agent.SetDestination(Target.position);
        }
        //else
        //{
        //    Debug.Log("Go spawn position");
        //    agent.SetDestination(spawnPosition);
        //}
    }

    private void SetAnimatorTrigger(string triggerName)
=======
        get
        { return agent.isStopped; }
        set
        { agent.isStopped = value; }
    }

    void Awake()
    {
        character = GetComponent<Character>();
        m_collider = GetComponent<Collider>();
        animator = GetComponent<Animator>();
        agent = GetComponent<NavMeshAgent>();
    }

    private void OnEnable()
    {
        this.transform.localPosition = Vector3.zero;

        character.onDead += OnDead;
        character.onDamage += OnDamage;

        SceneLinkedSMB<ZombieBehaviour>.Initialise(animator, this);

        SetAnimationSpeed("WanderSpeed", wanderAnimationSpeed);
        SetAnimationSpeed("FollowSpeed", followAnimationSpeed);

        SetActiveCollider(true);
        SetActiveDamageBall(false);

        spawnPosition = new Vector3(transform.position.x, transform.position.y, transform.position.z);
    }

    private void OnDisable()
    {
        character.onDead -= OnDead;
        character.onDamage -= OnDamage;
    }

    private void SetAnimationSpeed(string parameter, float speed)
>>>>>>> 6fe5de8ce4c17c05fe73a2352d3a4bf981c71802
    {
        if(animator != null)
        {
            animator.SetFloat(parameter, speed);
        }
    }

    private bool TargetInAttackRegion()
    {
        bool fight = false;

<<<<<<< HEAD
    private void SetAnimatorInteger(string triggerName, int intVal)
    {
        if (animator != null)
        {
            animator.SetInteger(triggerName, intVal);
        }
    }

    private static Vector3 GetRandomPosition(Vector3 origin, float distance, int layermask)
=======
        float dis = -1f;
        dis = Vector3.Distance(Target.position, this.transform.position);

        if (dis <= agent.stoppingDistance + allowAttackDistance)
        {
            fight = true;
        }

        return fight;
    }

    private void SetAnimatorTrigger(string triggerName)
    {
        if (animator != null && !animator.IsInTransition(0))
        {
            //Debug.Log(this.name + ": " + triggerName);
            animator.SetTrigger(triggerName);
        }
    }

    private void SetAnimatorInteger(string triggerName, int intVal)
    {
        if (animator != null)
        {
            animator.SetInteger(triggerName, intVal);
        }
    }

    private static Vector3 GetRandomPosition(Vector3 origin, float distance, int layermask)
    {
        Vector3 randomDirection = UnityEngine.Random.insideUnitSphere * distance;

        randomDirection += origin;

        NavMeshHit navHit;

        NavMesh.SamplePosition(randomDirection, out navHit, distance, layermask);

        return navHit.position;
    }

    private void CountDownForWander()
    {
        //Debug.Log("CountDownForWander");
        StopWander();
        CancelInvoke("CountDownForWander");
    }

    private void SetCurrentBehaviour(Behaviour behaviour)
>>>>>>> 6fe5de8ce4c17c05fe73a2352d3a4bf981c71802
    {
        currentBehaviour = behaviour;
    }

    private Behaviour GetCurrentBehaviour()
    {
        return currentBehaviour;
    }

<<<<<<< HEAD
    private void CountDownForWander()
    {
        Debug.Log("CountDownForWander");
        StopWander();
        CancelInvoke("CountDownForWander");
    }

    private void Detect()
    {
        Target = null;

        if (PlayerManager.Instance.ExistPlayer)
        {
            List<Transform> playlist = PlayerManager.Instance.PlayerList;
            for (int i = 0; i < playlist.Count; i++)
            {
                if (Vector3.Distance(playlist[i].position, transform.position) <= targetScanner.detectionRadius)
                {
                    Target = playlist[i];
                }
            }
        }
    }

=======
>>>>>>> 6fe5de8ce4c17c05fe73a2352d3a4bf981c71802
    // ===========================================
    // Function for Behaviour
    // ===========================================

<<<<<<< HEAD
    public void StartWander()
    {
        currentBehaviour = Behaviour.Wander;
        SetAgentSpeed(wanderAgentSpeed);
        StartAgent();

        agent.SetDestination(GetRandomPosition(transform.position, 100f, 1 << NavMesh.GetAreaFromName("Walkable")));
       
        float randomTime = Random.Range(minRandomWanderTime, maxRandomWanderTime);
        Invoke("CountDownForWander", randomTime);
    }

    public void StopWander()
    {
        if (currentBehaviour != Behaviour.Wander)
            return;

        StopAgent();

        SetAnimatorInteger(Ani_Idle, Random.Range(1, 5));
    }

    public void ResetIndleInteger()
    {
        SetAnimatorInteger(Ani_Idle, 0);
    }

    public void SetAgentSpeed(float speed)
    {
        agent.speed = speed;
        Debug.Log("Agent speed: " + agent.speed);
    }

    public Transform DetectClosedTarget()
    {
        Target = null;

        if (PlayerManager.Instance.ExistPlayer)
        {
            List<Transform> playlist = PlayerManager.Instance.PlayerList;
            float minDis = float.MaxValue;
            float dis = 0f;
            for (int i = 0; i < playlist.Count; i++)
            {
                dis = Vector3.Distance(playlist[i].position, transform.position);
                if (dis <= minDis)
                {
                    Target = playlist[i];
                    minDis = dis;
                }
            }  
        }

        return Target;
    }

    public StatusWithTarget GetStatusWithTarget()
=======
    public void SetAgentDestinition(Vector3 target)
    {
        if (agent != null)
            agent.SetDestination(target);
    }

    public void ProcessDetectionResult()
>>>>>>> 6fe5de8ce4c17c05fe73a2352d3a4bf981c71802
    {
        Debug.Log(currentBehaviour.ToString());

        if (Target != null)
        {
            switch (currentBehaviour)
            {
                case Behaviour.Wander:
                    SetAnimatorTrigger(Ani_Follow);
                    break;
                case Behaviour.Idle:
                    SetAnimatorTrigger(Ani_Follow);
                    break;
                case Behaviour.Follow:
                    if (TargetInAttackRegion())
                    {
                        SetAnimatorTrigger(Ani_Attack);
                    }
                    break;
                case Behaviour.Attack:
                    if (TargetInAttackRegion())
                    {
                        SetAnimatorTrigger(Ani_Attack);
                    }
                    else
                    {
                        SetAnimatorTrigger(Ani_Follow);
                    }
                    break;
                default:
                    break;
            }
        }
        else
        {
            Debug.Log("Didn't detect any target!!!!");
            if (GetCurrentBehaviour() != Behaviour.Wander)
                SetAnimatorTrigger(Ani_Wander);
        }
    }

    public void StartFacingTarget()
    {
<<<<<<< HEAD
        if (audioGrout != null)
            audioGrout.PlayRandomClip();
    }

    public void StopAgent()
    {
        agent.isStopped = true;
    }

    public void StartAgent()
=======
        if (Target != null)
            transform.LookAt(new Vector3(Target.position.x, transform.position.y, Target.position.z));
    }

    public void Detect()
    {
        Target = null;

        if (PlayerManager.Instance.ExistPlayer)
        {
            List<Transform> playlist = PlayerManager.Instance.PlayerList;
            for (int i = 0; i < playlist.Count; i++)
            {
                //Debug.Log(Vector3.Distance(playlist[i].position, transform.position));
                if (Vector3.Distance(playlist[i].position, transform.position) <= targetScanner.detectionRadius)
                {
                    Target = playlist[i];
                }
            }
        }
    }

    public void StartDamage()
    {
        Debug.Log("StartDead");
        AgentIsStop = true;
    }

    public void StartDead()
>>>>>>> 6fe5de8ce4c17c05fe73a2352d3a4bf981c71802
    {
        Debug.Log("StartDead");
        AgentIsStop = true;
    }

    public void StartAttack()
    {
<<<<<<< HEAD
        FaceToTarget(true);
        SetAnimatorTrigger(Ani_Follow);
        StartAgent();
        fighting = true;
    }

    //public void BackToSpawnPosiion()
    //{
    //    FaceToTarget(false);
    //    SetAnimatorTrigger(Ani_Walk);
    //    AgentWork();
    //    fighting = false;
    //}

    public void Attack()
=======
        Debug.Log("StartAttack");
        SetCurrentBehaviour(Behaviour.Attack);
        AgentIsStop = true;
    }

    public void StartFollow()
>>>>>>> 6fe5de8ce4c17c05fe73a2352d3a4bf981c71802
    {
        SetCurrentBehaviour(Behaviour.Follow);
        SetAgentSpeed(followAgentSpeed);
        AgentIsStop = false;
    }

    public void StartWander()
    {
        SetCurrentBehaviour(Behaviour.Wander);
        SetAgentSpeed(wanderAgentSpeed);
        AgentIsStop = false;

        agent.SetDestination(GetRandomPosition(transform.position, 100f, 1 << NavMesh.GetAreaFromName("Walkable")));

        float randomTime = Random.Range(minRandomWanderTime, maxRandomWanderTime);
        Invoke("CountDownForWander", randomTime);
    }

    public void StopWander()
    {
        if (GetCurrentBehaviour() != Behaviour.Wander)
            return;

        AgentIsStop = true;

        SetAnimatorInteger(Ani_Idle, Random.Range(1, 5));
    }

    public void StartIdle()
    {
        SetCurrentBehaviour(Behaviour.Idle);
        ResetIndleInteger();
        //FacingTarget = false;
        AgentIsStop = true;
    }

    public void ResetIndleInteger()
    {
        SetAnimatorInteger(Ani_Idle, 0);
    }

    public void SetAgentSpeed(float speed)
    {
        agent.speed = speed;
        //Debug.Log("Agent speed: " + agent.speed);
    }

    public Transform DetectClosedTarget()
    {
        Target = null;

        if (PlayerManager.Instance.ExistPlayer)
        {
            List<Transform> playlist = PlayerManager.Instance.PlayerList;
            float minDis = float.MaxValue;
            float dis = 0f;
            for (int i = 0; i < playlist.Count; i++)
            {
                dis = Vector3.Distance(playlist[i].position, transform.position);
                if (dis <= minDis)
                {
                    Target = playlist[i];
                    minDis = dis;
                }
            }
        }

        return Target;
    }

    public void Grout()
    {
        if (audioGrout != null)
            audioGrout.PlayRandomClip();
    }

    public bool ArrivedSpawnPosition()
    {
        bool result = false;
        float dis = -1f;
        dis = Vector3.Distance(spawnPosition, this.transform.position);
        if (dis < 0.1f)
        {
            result = true;
        }

        return result;
    }

    public void Disappear()
    {
        this.transform.parent.gameObject.SetActive(false);
    }

    // ===========================================
    // private Function
    // ===========================================

    private void SetActiveCollider(bool status)
    {
        if (m_collider != null)
            m_collider.enabled = status;
    }

    private void CountDownForDisappear()
    {
        Disappear();
    }
    // ===========================================
    // public Function
    // ===========================================

    public void SetActiveDamageBall(bool status)
    {
        if (damageBallCollider != null)
        {
            damageBallCollider.enabled = status;
        }
    }

    // ===========================================
    // Delegate Function
    // ===========================================

    private void OnDead()
    {
        Debug.Log("Dead: " + this.transform.parent.name);
        SetAnimatorTrigger(Ani_Dead);
<<<<<<< HEAD
        FaceToTarget(false);
        SetActiveCollider(false);
        StopAgent();
        fighting = false;
    }

    public void Damage()
    {
        SetAnimatorTrigger(Ani_Damage);
    }

    public void KeepGoing()
    {
        SetAnimatorTrigger(Ani_Follow);
        StartAgent();
        fighting = true;
    }

    public void Idle()
    {
        SetAnimatorTrigger(Ani_Idle);
        fighting = false;
        StartAgent();
    }

    public bool ArrivedSpawnPosition()
    {
        bool result = false;
        float dis = -1f;
        dis = Vector3.Distance(spawnPosition, this.transform.position);
        if (dis < 0.1f)
        {
            result = true;
        }

        return result;
    }

    public void FaceToTarget(bool status)
    {
        faceingTarget = status;
    }

    public void Disappear()
    {
        this.transform.parent.gameObject.SetActive(false);
    }

    // ===========================================
    // private Function
    // ===========================================

    private void SetActiveCollider(bool status)
    {
        if (m_collider != null)
            m_collider.enabled = status;
    }

    // ===========================================
    // public Function
    // ===========================================

    public void SetActiveDamageBall(bool status)
    {
        if (damageBallCollider != null)
        {
            damageBallCollider.enabled = status;
        }
    }

    // ===========================================
    // Delegate Function
    // ===========================================

    private void OnDead()
    {
        //Debug.Log("Dead: " + this.transform.parent.name);
        Dead();
        AudioPlayer.Instance.PlayOneShot(deadClip);
    }

    private void OnDamage(int hurtVal)
    {
        //Debug.Log("Damage: " + this.transform.parent.name);
        Damage();      
    }

    // ===========================================
    // Function for Drawing
    // ===========================================
#if UNITY_EDITOR
    private void OnDrawGizmos()
    {
        if(drawGizmos)
            targetScanner.EditorGizmo(transform);
    }
#endif
}
=======
        SetActiveCollider(false);
        AudioPlayer.Instance.PlayOneShot(deadClip);
        Invoke("CountDownForDisappear", disappearTime);
    }

    private void OnDamage(int hurtVal)
    {
        Debug.Log("Damage: " + this.transform.parent.name);
        SetAnimatorTrigger(Ani_Damage);
    }

    // ===========================================
    // Function for Drawing
    // ===========================================
#if UNITY_EDITOR
    private void OnDrawGizmos()
    {
        if(drawGizmos)
            targetScanner.EditorGizmo(transform);
    }
#endif
}
>>>>>>> 6fe5de8ce4c17c05fe73a2352d3a4bf981c71802
