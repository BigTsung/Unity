using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : MonoBehaviour {

    [System.Serializable]
    public class EnemyInfo
    {
        public ObjectPooler.ObjectTag enemyTag;
        public int num = 5;
    }

    [System.Serializable]
    public class LevelInfo
    {
        public List<EnemyInfo> enemyList;
        public float delayWhenStart = 0f;
        public float spawnSpacingTime = 1f;
    }

    public List<LevelInfo> spawnLevel = new List<LevelInfo>();

    private List<Transform> spawnPosList = new List<Transform>();

    private int currentLevel = 0;

    void Start ()
    {
        InitSpawnPosition();
        StartCoroutine(StartThisLevel());
    }

    IEnumerator StartThisLevel()
    {
        yield return new WaitForSeconds(spawnLevel[currentLevel].delayWhenStart);

        List<ObjectPooler.ObjectTag> objectTagList = new List<ObjectPooler.ObjectTag>();

        for (int i = 0; i < spawnLevel[currentLevel].enemyList.Count; i++)
        {
            for (int j = 0; j < spawnLevel[currentLevel].enemyList[i].num; j++)
            {
                objectTagList.Add(spawnLevel[currentLevel].enemyList[i].enemyTag);
            }
        }
        while (objectTagList.Count > 0)
        {
            int randomEnemyTag = Random.Range(0, objectTagList.Count);
            ObjectPooler.ObjectTag objectTag = objectTagList[randomEnemyTag];
            objectTagList.RemoveAt(randomEnemyTag);

            Spawn(objectTag);
            yield return new WaitForSeconds(spawnLevel[currentLevel].spawnSpacingTime);
        }
        currentLevel++;

        if (currentLevel < spawnLevel.Count)
            StartCoroutine(StartThisLevel());
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
        GameObject enemy = ObjectPooler.Instance.SpawnFormPool(objectTag, GetSpawnPosition(), Quaternion.identity);

        return enemy;
    }

    private Vector3 GetSpawnPosition()
    {
        int random = Random.Range(0, spawnPosList.Count);
        return spawnPosList[random].position;
    }
}
