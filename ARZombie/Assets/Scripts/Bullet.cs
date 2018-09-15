using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour {
  
    private Rigidbody rigidbody;

    private void Awake()
    {
        rigidbody = GetComponent<Rigidbody>();
    }

    public void Fire(float speed, float life)
    {
        if (rigidbody != null)
        {
            rigidbody.velocity = transform.forward * speed / 5f;

            if (IsInvoking("Dead"))
                CancelInvoke("Dead");

            Invoke("Dead", life);
        }
    }

    private void Dead()
    {
        rigidbody.velocity = Vector3.zero;
        gameObject.SetActive(false);
    }
}
