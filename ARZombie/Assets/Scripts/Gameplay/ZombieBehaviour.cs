using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

[RequireComponent(typeof(Animator))]
[RequireComponent(typeof(NavMeshAgent))]
[RequireComponent(typeof(Collider))]
public class ZombieBehaviour : MonoBehaviour {

    public TargetScanner targetScanner;

    private NavMeshAgent agent;
    private Animator animator;
    private Collider collider;
    
    public Transform Target
    {
        get;
        set;
    }
    void Start ()
    {
        animator = GetComponent<Animator>();

        SceneLinkedSMB<ZombieBehaviour>.Initialise(animator, this);

        Debug.Log("ZombieBehaviour Start");
    }

    private void SetAnimatorTrigger(string triggerName)
    {
        if (animator != null)
        {
            animator.SetTrigger(triggerName);
        }
    }

    public Transform Detect()
    {
        if (Playermanager.Instance.ExistPlayer)
        {
            Debug.Log("Exist the player");
            List<Transform> playlist = Playermanager.Instance.PlayerList;
            for (int i = 0; i < playlist.Count; i++)
            {
                Debug.Log(Vector3.Distance(playlist[i].position, transform.position) <= targetScanner.detectionRadius);
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
        SetAnimatorTrigger("Walk");

    }

#if UNITY_EDITOR
    private void OnDrawGizmos()
    {
        targetScanner.EditorGizmo(transform);
    }
#endif
}
