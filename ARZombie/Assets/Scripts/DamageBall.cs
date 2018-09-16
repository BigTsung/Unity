using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Collider))]
public class DamageBall : MonoBehaviour {

    public bool isDisableOnCollision = true;
    public bool isDestroyOnCollision = false;

    public float damageValue = 10f;

    private Collider colliderCom;

    public delegate void OnCollision(Collider collision);
    public OnCollision onCollisionEnter;

    // Use this for initialization
    void Start () {
        colliderCom = GetComponent<Collider>();
        if (colliderCom != null)
            colliderCom.isTrigger = true;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (onCollisionEnter != null)
            onCollisionEnter(other);

        if (isDisableOnCollision)
            gameObject.SetActive(false);
        if (isDestroyOnCollision)
            Destroy(gameObject);

        Character character = other.GetComponent<Character>();

        if(character != null)
        {
            character.HP -= damageValue;
        }

        //Debug.Log(other.gameObject.name);
    }
}
