using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {

    public GameObject[] enemyList;
    public Transform[] spawnPosList;
    public int maxEnemy = 30;
    public float spawnTime = 2f;

    private float timeCount = 0f;
    private int enemyCount = 0;

    private bool enemyIsFull = false;

    void Start ()
    {}
	
	// Update is called once per frame
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
                    enemyIsFull = true;
            }
        }
	}

    private void Spawn()
    {
        GameObject.Instantiate(GetEnemyPrefab(), GetSpawnPosition(), Quaternion.identity, this.transform);
    }

    private GameObject GetEnemyPrefab()
    {
        int random = Random.Range(0, enemyList.Length);
        return enemyList[random];
    }

    private Vector3 GetSpawnPosition()
    {
        int random = Random.Range(0, spawnPosList.Length);
        return spawnPosList[random].position;
    }
}
