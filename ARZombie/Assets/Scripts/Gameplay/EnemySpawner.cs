using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {

    //public GameObject[] enemyList;
    public int maxEnemy = 30;
    public float spawnTime = 2f;

    private List<Transform> spawnPosList = new List<Transform>();
    private float timeCount = 0f;
    private int enemyCount = 0;
    private bool enemyIsFull = false;

    void Start ()
    {
        InitSpawnPosition();
    }
	
	void Update ()
    {
        if(!enemyIsFull)
        {
            timeCount += Time.deltaTime;
            if (timeCount > spawnTime)
            {
                Spawn();
                enemyCount++;
                timeCount = 0f;
                if (enemyCount >= maxEnemy)
                {
                    enemyIsFull = true;
                }
            }
        }
	}

    private void InitSpawnPosition()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            spawnPosList.Add(transform.GetChild(i));
        }
    }

    private GameObject Spawn()
    {
        //Instantiate(GetEnemyPrefab(), GetSpawnPosition(), Quaternion.identity, this.transform);
        GameObject enemy = ObjectPooler.Instance.SpawnFormPool("Enemy", GetSpawnPosition(), Quaternion.identity);

        //Bullet bullet = enemy.GetComponent<Bullet>();

        //bullet.Fire(speed, life);

        return enemy;
    }

    /*private GameObject GetEnemyPrefab()
    {
        int random = Random.Range(0, enemyList.Length);
        return enemyList[random];
    }*/

    private Vector3 GetSpawnPosition()
    {
        int random = Random.Range(0, spawnPosList.Count);
        //Debug.Log(random);
        return spawnPosList[random].position;
    }
}
