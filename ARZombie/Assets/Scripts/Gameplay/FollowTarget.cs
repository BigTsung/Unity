using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FollowTarget : MonoBehaviour {

    public Vector3 offset;
    public Vector3 rotation;
    public Transform target;
    
    private void FixedUpdate()
    {
        if (target != null)
        {
            transform.position = target.position + offset;
            transform.rotation = Quaternion.Euler(rotation);
            //Debug.Log(target.position);
        }
    }
}
