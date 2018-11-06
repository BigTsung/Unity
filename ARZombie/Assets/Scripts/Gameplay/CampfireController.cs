using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CampfireController : MonoBehaviour {

    public GameObject firePrefab;

    private bool fireExist = false;

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag != "Player")
            return;

        Debug.Log("OnCollisionEnter: " + other.transform.name);
        PlayFire();
        this.GetComponent<Collider>().enabled = false;
    }

    private void PlayFire()
    {
        if (firePrefab != null && !fireExist)
        {
            GameObject fire = GameObject.Instantiate(firePrefab, this.transform);
            Debug.Log("firePrefab: " + fire.name);
            fireExist = true;
        }
    }
}
