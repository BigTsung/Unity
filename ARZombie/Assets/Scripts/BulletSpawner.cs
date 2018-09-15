using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletSpawner : MonoBehaviour {

    [Range(1f, 100f)]
    public float speed = 10f;
    public float life = 3f;

    public GameObject Spawn(Vector3 position, Quaternion rotation)
    {
        GameObject bulletObj = ObjectPooler.Instance.SpawnFormPool("Bullet", position, rotation);

        Bullet bullet = bulletObj.GetComponent<Bullet>();

        bullet.Fire(speed, life);

        return bulletObj;
    }
}
