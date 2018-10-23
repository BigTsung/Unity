using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(NavMeshAgent))]
[RequireComponent(typeof(Collider))]
public class ZombieBehaviour : MonoBehaviour {

    private static string Ani_Walk      = "Walk";
    private static string Ani_Run       = "Run";
    private static string Ani_Damage    = "Damage";
    private static string Ani_Dead      = "Dead";
    private static string Ani_Idle      = "Idle";
    private static string Ani_Attack    = "Attack";

    public bool drawGizmos = false;
    public TargetScanner targetScanner;
    public float stoppingDistance = 1f;
    public SphereCollider damageBallCollider;

    private NavMeshAgent agent;
    private Animator animator;
    private Collider collider;
    private Character character;
    private bool fighting = false;
    private Vector3 spawnPosition;
    private bool faceingTarget = false;

    public enum StatusWithTarget
    {
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

    [Header("Audio")]
    public RandomAudioPlayer audioGrout;

    void Awake()
    {
        character = GetComponent<Character>();
        collider = GetComponent<Collider>();
        animator = GetComponent<Animator>();
        agent = GetComponent<NavMeshAgent>();
    }

    void Start ()
    {
        SceneLinkedSMB<ZombieBehaviour>.Initialise(animator, this);

        //Debug.Log("ZombieBehaviour Start");
    }

    private void OnEnable()
    {
        character.onDead += OnDead;
        character.onDamage += OnDamage;

        //Debug.Log(this.transform.parent.name);

        SetActiveCollider(true);
        SetActiveDamageBall(false);

        spawnPosition = new Vector3(transform.position.x, transform.position.y, transform.position.z);
    }

    private void OnDisable()
    {
        character.onDead -= OnDead;
        character.onDamage -= OnDamage;
    }

    private void FixedUpdate()
    {
        //Debug.Log("agent stop: " + agent.isStopped);

        if (Target != null && faceingTarget)
        {
            transform.LookAt(new Vector3(Target.position.x, transform.position.y, Target.position.z));
        }

        if (agent.isStopped)
            return;

        if (fighting && Target != null)
        {
            //Debug.Log("Go target");
            agent.SetDestination(Target.position);
        }
        else
        {
            //Debug.Log("Go spawn position");
            agent.SetDestination(spawnPosition);
        }

        
    }

    private void SetAnimatorTrigger(string triggerName)
    {
        if (animator != null)
        {
            //Debug.Log(this.name + ": " + triggerName);
            animator.SetTrigger(triggerName);
        }
    }

    // ===========================================
    // Function for Behaviour
    // ===========================================

    public void SetSpeed(float speed)
    {
        if (!agent.isStopped)
            agent.speed = speed;
    }

    public Transform Detect()
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

        return Target;
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
    {
        StatusWithTarget status = StatusWithTarget.NONE;
        float dis = -1f;

        if (Target != null)
        {
            dis = Vector3.Distance(Target.position, this.transform.position);

            //Debug.Log(dis);
            if (dis >= targetScanner.followRadius)
            {
                status = StatusWithTarget.TOOFAR;
            }
            else if(dis <= agent.stoppingDistance + stoppingDistance)
            {
                status = StatusWithTarget.READY_TO_ATTACK;
            }
            else
            {
                status = StatusWithTarget.KEEP_GOING;
            }
        }
        else
        {
            status = StatusWithTarget.NONE;
        }

        return status;
    }

    public void Grout()
    {
        if (audioGrout != null)
            audioGrout.PlayRandomClip();
    }

    public void Stop()
    {
        agent.isStopped = true;
    }

    public void GotoTarget()
    {
        FaceToTarget(true);
        SetAnimatorTrigger(Ani_Run);
        agent.isStopped = false;
        fighting = true;
    }

    public void BackToSpawnPosiion()
    {
        FaceToTarget(false);
        SetAnimatorTrigger(Ani_Walk);
        agent.isStopped = false;
        fighting = false;
    }

    public void Attack()
    {
        SetAnimatorTrigger(Ani_Attack);
    }

    public void Dead()
    {
        SetAnimatorTrigger(Ani_Dead);
        FaceToTarget(false);
        SetActiveCollider(false);
        agent.isStopped = true;
        fighting = false;
    }

    public void Damage()
    {
        SetAnimatorTrigger(Ani_Damage);
    }

    public void KeepGoing()
    {
        SetAnimatorTrigger(Ani_Run);
        agent.isStopped = false;
        fighting = true;
    }

    public void Idle()
    {
        SetAnimatorTrigger(Ani_Idle);
        fighting = false;
        agent.isStopped = false;    
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
        if (collider != null)
            collider.enabled = status;
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
