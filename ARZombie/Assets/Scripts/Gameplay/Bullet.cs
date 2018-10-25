﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour {

    public GameObject collisionEffectPrefab;
    public DamageBall damageball;

    private Rigidbody rigidbody;
    private Vector3 spawnPos;
    private TrailRenderer trailRenderer;
    private bool isCollision = false;
    private Vector3 collisionPos;

    private void Awake()
    {
        rigidbody = GetComponent<Rigidbody>();
        trailRenderer = GetComponent<TrailRenderer>();
        spawnPos = transform.position;
    }

    private void Start()
    {
        if(damageball != null)
            damageball.onCollisionEnter += OnCollision;
    }

    private void OnDestroy()
    {
        if (damageball != null)
            damageball.onCollisionEnter -= OnCollision;
    }

    public void SetSpawnPosition(Vector3 pos)
    {
        spawnPos = pos;
    }

    public void Fire(float speed, float life)
    {
        if (rigidbody != null)
        {
            isCollision = false;
            trailRenderer.enabled = true;
            rigidbody.velocity = transform.forward * speed;
       
            if (IsInvoking("Dead"))
                CancelInvoke("Dead");

            Invoke("Dead", life);
        }
    }

    private void OnCollision(Collider other)
    {
        //collisionPos.x = other.transform.position.x;
        //collisionPos.y = this.transform.position.y;
        //collisionPos.z = other.transform.position.z;

        collisionPos = other.ClosestPoint(spawnPos);

        GameObject collisionEffect = GameObject.Instantiate(collisionEffectPrefab, collisionPos, this.transform.rotation);
        ParticleSystem particleSystem = collisionEffect.GetComponent<ParticleSystem>();
        InvokeRepeating("Disappear", particleSystem.duration, 0f);
        isCollision = true;
    }

    private void Dead()
    {
        if (isCollision)
            return;

        this.transform.position = spawnPos;
        rigidbody.velocity = Vector3.zero;
        trailRenderer.enabled = false;
        this.gameObject.SetActive(false);
    }

    private void Disappear()
    {
        Dead();
    }
}
