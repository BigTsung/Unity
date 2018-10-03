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
    private static string Ani_Idle      = "Idle";
    private static string Ani_Attack    = "Attack";


    public TargetScanner targetScanner;

    private NavMeshAgent agent;
    private Animator animator;
    private Collider collider;
    private bool fighting = false;
    private Vector3 spawnPosition;

    public enum StatusWithTarget
    {
        NONE,
        TOOFAR,
        ARRIVED_TARGET,
        KEEP_GOING
    }

    public Transform Target
    {
        get;
        set;
    }
    void Start ()
    {
        animator = GetComponent<Animator>();
        agent = GetComponent<NavMeshAgent>();

        SceneLinkedSMB<ZombieBehaviour>.Initialise(animator, this);

        Debug.Log("ZombieBehaviour Start");

    }

    private void OnEnable()
    {
        spawnPosition = new Vector3(transform.position.x, transform.position.y, transform.position.z);
    }

    private void FixedUpdate()
    {
        if (agent.isStopped)
            return;

        //Debug.Log("GOGOGO");

        if (fighting && Target != null)
        {
            agent.SetDestination(Target.position);
        }
        else
        {
            agent.SetDestination(spawnPosition);
        }
    }

    private void SetAnimatorTrigger(string triggerName)
    {
        if (animator != null)
        {
            animator.SetTrigger(triggerName);
        }
    }

    // ===========================================
    // Function for Behaviour
    // ===========================================
    public Transform Detect()
    {
        if (Playermanager.Instance.ExistPlayer)
        {
            //Debug.Log("Exist the player");
            List<Transform> playlist = Playermanager.Instance.PlayerList;
            for (int i = 0; i < playlist.Count; i++)
            {
                //Debug.Log(Vector3.Distance(playlist[i].position, transform.position) <= targetScanner.detectionRadius);
                if (Vector3.Distance(playlist[i].position, transform.position) <= targetScanner.detectionRadius)
                {
                    Target = playlist[i];
                }
            }
        }

        return Target;
    }

    public void GotoTarget()
    {
        SetAnimatorTrigger(Ani_Run);
        agent.enabled = true;
        fighting = true;
    }

    public StatusWithTarget GetStatusWithTarget()
    {
        StatusWithTarget status = StatusWithTarget.NONE;
        float dis = -1f;
        if (Target != null)
        {
            dis = Vector3.Distance(Target.position, this.transform.position);

            Debug.Log(dis);
            if (dis >= targetScanner.followRadius)
            {
                status = StatusWithTarget.TOOFAR;
            }
            else if(dis <= agent.stoppingDistance + 1.2f)
            {
                status = StatusWithTarget.ARRIVED_TARGET;
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

    public void BackToSpawnPosiion()
    {
        SetAnimatorTrigger(Ani_Walk);
        fighting = false;
    }

    public void Fighting()
    {
        SetAnimatorTrigger(Ani_Attack);
    }

    // ===========================================
    // Function for Drawing
    // ===========================================
#if UNITY_EDITOR
    private void OnDrawGizmos()
    {
        targetScanner.EditorGizmo(transform);
    }
#endif
}
