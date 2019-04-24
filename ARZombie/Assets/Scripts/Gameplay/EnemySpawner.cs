using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemySpawner : Singleton<EnemySpawner> {

    [System.Serializable]
    public class EnemySetting 
    {
        public ObjectPooler.ObjectTag enemyTag;
        public int maxExistNum;
    }

    public GameObject player;
    public float minSpawnSpacingTime = 3f;
    public float maxSapwnSpacingTime = 7f;
    public List<EnemySetting> enemySettingList = new List<EnemySetting>();


    [Header("Debug")]
    public bool debugMode = true;

    private int currentEnemyNum = 0;
    private float detectRegion = 4f;
    
    void Start ()
    {
        StartSpawnEnemy();
    }

    // ===========================
    // Public Function
    // ===========================
    public void StartSpawnEnemy()
    {
        float randomTime = Random.Range(minSpawnSpacingTime, maxSapwnSpacingTime);
<<<<<<< HEAD

        Invoke("Spawn", randomTime);
    }

    private Vector3 GetSpawnPosition()
    {
        Vector3 result = player.transform.position;
        //Debug.Log("Enemy spawn Position:" + result);

        float xRandom = Random.Range(-detectRegion / 2f, detectRegion / 2f);
        float zRandom = Random.Range(-detectRegion / 2f, detectRegion / 2f);

        result.x += xRandom;
        result.z += zRandom;

        return result;
    }

    private void OnDrawGizmos()
    {
        if (!debugMode)
            return;

        SphereCollider sphereCollider = GetComponent<SphereCollider>();
        //sphereCollider.radius;

        Color finalColor = Color.green;
        finalColor.a = 0.2f;
        Gizmos.color = finalColor;
        Gizmos.DrawSphere(player.transform.position, sphereCollider.radius);
    }

   
}
=======
        Invoke("Spawn", randomTime);
    }

    public void StopSpwnEnemy()
    {
        CancelInvoke("Spawn");
    }

    public void CheckEnemyNum()
    {
        currentEnemyNum--;
        //Debug.Log("Current enemy");
    }

    // ===========================
    // Private Function
    // ===========================

    private void Spawn()
    {
        int randomIndex = Random.Range(0, enemySettingList.Count);

        EnemySetting setting = enemySettingList[randomIndex];

        //GameObject enemy = ObjectPooler.Instance.SpawnFormPool(setting.enemyTag, GetSpawnPosition(), Quaternion.identity);
        ObjectPooler.Instance.SpawnFormPool(setting.enemyTag, GetSpawnPosition(), Quaternion.identity);

        float randomTime = Random.Range(minSpawnSpacingTime, maxSapwnSpacingTime);

        Invoke("Spawn", randomTime);
    }

    private Vector3 GetSpawnPosition()
    {
        Vector3 result = player.transform.position;
        //Debug.Log("Enemy spawn Position:" + result);

        float xRandom = Random.Range(-detectRegion / 2f, detectRegion / 2f);
        float zRandom = Random.Range(-detectRegion / 2f, detectRegion / 2f);

        result.x += xRandom;
        result.z += zRandom;

        return result;
    }

    private void OnDrawGizmos()
    {
        if (!debugMode)
            return;

        SphereCollider sphereCollider = GetComponent<SphereCollider>();
        //sphereCollider.radius;

        Color finalColor = Color.green;
        finalColor.a = 0.2f;
        Gizmos.color = finalColor;
        Gizmos.DrawSphere(player.transform.position, sphereCollider.radius);
    }

   
}
>>>>>>> 6fe5de8ce4c17c05fe73a2352d3a4bf981c71802
