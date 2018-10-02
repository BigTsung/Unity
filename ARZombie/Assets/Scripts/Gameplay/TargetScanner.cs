using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//use this class to simply scan & spot the player based on the parameters.
    //Used by enemies behaviours.
[System.Serializable]
public class TargetScanner
{
    //public float heightOffset = 0.0f;
    public float detectionRadius = 10;
    //[Range(0.0f, 360.0f)]
    //public float detectionAngle = 270;
    //public float maxHeightDifference = 1.0f;
    //public LayerMask viewBlockerLayerMask;

    public GameObject Detect(Transform detector)
    {
        GameObject closedTarget = null;
        return closedTarget;
    }

#if UNITY_EDITOR

    public void EditorGizmo(Transform transform)
    {
        Color c = new Color(0, 0, 0.7f, 0.4f);

        UnityEditor.Handles.color = c;
        Vector3 rotatedForward = Quaternion.Euler(0, -360f * 0.5f, 0) * transform.forward;
        UnityEditor.Handles.DrawSolidArc(transform.position, Vector3.up, rotatedForward, 360f, detectionRadius);

        //Gizmos.color = new Color(1.0f, 1.0f, 0.0f, 1.0f);
        //Gizmos.DrawWireSphere(transform.position + Vector3.up * heightOffset, 0.2f);
    }

#endif

}