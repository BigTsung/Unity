using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour {
  
    private Rigidbody rigidbody;
    private Vector3 originalPos;

    private void Awake()
    {
        rigidbody = GetComponent<Rigidbody>();
        originalPos = transform.position;
    }

    public void Fire(float speed, float life)
    {
        if (rigidbody != null)
        {
            rigidbody.velocity = transform.forward * speed;
            //gameObject.SetActive(true);

            if (IsInvoking("Dead"))
                CancelInvoke("Dead");

            Invoke("Dead", life);
        }
    }

    private void Dead()
    {
        //Debug.Log("Bullet Dead");
        this.transform.position = originalPos;
        rigidbody.velocity = Vector3.zero;
        gameObject.SetActive(false);
    }
}
