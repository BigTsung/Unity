using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {

    public List<ObjectPooler.ObjectTag> enemyTag = new List<ObjectPooler.ObjectTag>();
    public float delayWhenStart = 0f;
    public int enemyNumber = 30;
    public int spawnTimes = 5;
    public float spawnSpacingTime = 2f;

    private List<Transform> spawnPosList = new List<Transform>();
    private float timeCount = 0f;
    private int enemyCount = 0;
    private bool enemyIsFull = false;

    void Start ()
    {
        InitSpawnPosition();
        Invoke("StartSpawning", delayWhenStart);
    }

    private void StartSpawning()
    {
        //Debug.Log("StartSpawning");
        StartCoroutine(SpawnEnemy(enemyTag[0], spawnSpacingTime));
        //InvokeRepeating("Spawn", enemyNumber, spawnSpacingTime);
    }

    IEnumerator SpawnEnemy(ObjectPooler.ObjectTag objectTag, float repeatRate)
    {
        int generatedNum = 0;
        while (generatedNum < enemyNumber)
        {
            Spawn(objectTag);
            generatedNum++;
            yield return new WaitForSeconds(repeatRate);
        }
    }

    void Update ()
    {
	}

    private void InitSpawnPosition()
    {
        for (int i = 0; i < transform.childCount; i++)
        {
            spawnPosList.Add(transform.GetChild(i));
        }
    }

    private GameObject Spawn(ObjectPooler.ObjectTag objectTag)
    {
        //Debug.Log("StartSpawning");
        GameObject enemy = ObjectPooler.Instance.SpawnFormPool(objectTag, GetSpawnPosition(), Quaternion.identity);

        return enemy;
    }

    private Vector3 GetSpawnPosition()
    {
        int random = Random.Range(0, spawnPosList.Count);
        return spawnPosList[random].position;
    }
}
