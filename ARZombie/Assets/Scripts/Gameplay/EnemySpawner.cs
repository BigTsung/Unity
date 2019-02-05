using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : Singleton<EnemySpawner> {

    [System.Serializable]
    public class EnemyInfo
    {
        public ObjectPooler.ObjectTag enemyTag;
        //public int num = 5;
    }

    [System.Serializable]
    public class LevelInfo
    {
        public List<EnemyInfo> enemyList;
        public float delayWhenStart = 0f;
        public float spawnSpacingTime = 1f;
        public int maxEnemy;
    }

  

    public LevelInfo randomSpawnSetting;
   // public List<LevelInfo> spawnLevel = new List<LevelInfo>();

    [Header("Debug")]
    public bool debugMode = true;

    //private List<Transform> spawnPosList = new List<Transform>();

    //private int currentLevel = 0;
    //private int currentLevelEnemyNum = 0;
    //private int currentLevelEnemyDeadNum = 0;

    private int currentEnemyNum = 0;
    private float detectRegion = 4f;
    private SphereCollider sphereCollider;

    void Start ()
    {
        sphereCollider = GetComponent<SphereCollider>();

        if(sphereCollider != null)
            detectRegion = sphereCollider.radius;
        //InitSpawnPosition();
        //StartCoroutine(StartThisLevel());
        //Invoke("StartRandomSpawnZombie", randomSpawnSetting.delayWhenStart);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag != "Player")
            return;

        //Debug.Log(other.name);
        sphereCollider.enabled = false;
        Invoke("StartRandomSpawnZombie", randomSpawnSetting.delayWhenStart);
    }

    // ===========================
    // Private Function
    // ===========================

    private void StartRandomSpawnZombie()
    {
        InvokeRepeating("SpawnZombie", 0, randomSpawnSetting.spawnSpacingTime);
    }

    private void SpawnZombie()
    {
        if (currentEnemyNum >= randomSpawnSetting.maxEnemy)
        {
            CancelInvoke("SpawnZombie");
            return;
        }
           
        int randomEnemyTag = Random.Range(0, randomSpawnSetting.enemyList.Count);
        ObjectPooler.ObjectTag objectTag = randomSpawnSetting.enemyList[randomEnemyTag].enemyTag;

        Spawn(objectTag);
        //GameObject enemy = Spawn(objectTag)

        //Character character = enemy.GetComponentInChildren<Character>();

        currentEnemyNum++;

        //character.onDead -= CheckEnemyNum;
        //character.onDead += CheckEnemyNum;
    }

    //IEnumerator StartThisLevel()
    //{
    //    yield return new WaitForSeconds(spawnLevel[currentLevel].delayWhenStart);

    //    List<ObjectPooler.ObjectTag> objectTagList = new List<ObjectPooler.ObjectTag>();

    //    for (int i = 0; i < spawnLevel[currentLevel].enemyList.Count; i++)
    //    {
    //        for (int j = 0; j < spawnLevel[currentLevel].enemyList[i].num; j++)
    //        {
    //            objectTagList.Add(spawnLevel[currentLevel].enemyList[i].enemyTag);
    //        }
    //    }
    //    currentLevelEnemyDeadNum = 0;
    //    currentLevelEnemyNum = objectTagList.Count;

    //    while (objectTagList.Count > 0)
    //    {
    //        int randomEnemyTag = Random.Range(0, objectTagList.Count);
    //        ObjectPooler.ObjectTag objectTag = objectTagList[randomEnemyTag];
    //        objectTagList.RemoveAt(randomEnemyTag);

    //        GameObject enemy = Spawn(objectTag);
    //        Character character = enemy.GetComponentInChildren<Character>();

    //        if (character != null)
    //        {
    //            character.onDead -= CheckLevelIsDone;
    //            character.onDead += CheckLevelIsDone;
    //        }

    //        yield return new WaitForSeconds(spawnLevel[currentLevel].spawnSpacingTime);
    //    }
    //}

    //private void CheckLevelIsDone()
    //{
    //    currentLevelEnemyDeadNum++;

    //    //Debug.Log(currentLevelEnemyNum + "  " + currentLevelEnemyDeadNum);

    //    if (currentLevelEnemyNum <= currentLevelEnemyDeadNum)
    //    {
    //        Debug.Log("Level " + currentLevel + " is finish!");
    //        currentLevel++;

    //        if (currentLevel < spawnLevel.Count)
    //            Invoke("StartRandomSpawnZombie", randomSpawnSetting.delayWhenStart);
    //        //StartCoroutine(StartThisLevel());
    //    }
    //}
    

    //private void InitSpawnPosition()
    //{
    //    for (int i = 0; i < transform.childCount; i++)
    //    {
    //        spawnPosList.Add(transform.GetChild(i));
    //    }
    //}

    private GameObject Spawn(ObjectPooler.ObjectTag objectTag)
    {
        GameObject enemy = ObjectPooler.Instance.SpawnFormPool(objectTag, GetSpawnPosition(), Quaternion.identity);

        return enemy;
    }

    private Vector3 GetSpawnPosition()
    {
        Vector3 result = this.transform.position;
        float xRandom = Random.Range(-detectRegion / 2f, detectRegion / 2f);
        float zRandom = Random.Range(-detectRegion / 2f, detectRegion / 2f);

        result.x += xRandom;
        result.z += zRandom;

        //Debug.Log("Enemy spawn Position:" + result);

        return result;
    }

    //private Vector3 GetSpawnPosition()
    //{
    //    int random = Random.Range(0, spawnPosList.Count);
    //    return spawnPosList[random].position;
    //}

    private void OnDrawGizmos()
    {
        if (!debugMode)
            return;

        SphereCollider sphereCollider = GetComponent<SphereCollider>();
        //sphereCollider.radius;

        Color finalColor = Color.green;
        finalColor.a = 0.2f;
        Gizmos.color = finalColor;
        Gizmos.DrawSphere(this.transform.position, sphereCollider.radius);
    }

    // ===========================
    // Public Function
    // ===========================

    public void CheckEnemyNum()
    {
        currentEnemyNum--;
        //Debug.Log("Current enemy");
    }
}
