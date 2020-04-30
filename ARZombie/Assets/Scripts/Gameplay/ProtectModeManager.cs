using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ProtectModeManager : Singleton<ProtectModeManager> {

    [System.Serializable]
    public class LevelInfo
    {
        public float spacingTime;
        public List<EnemyInfo> enemyList = new List<EnemyInfo>();
    }

    [System.Serializable]
    public class EnemyInfo
    {
        public ObjectPooler.ObjectTag enemyTag;
        public Transform spawnTrans;
        public int num;
    }

    public int CurrentLevel
    {
        get;
        set;
    }

    public float startWaitingTime = 20f;
    public List<LevelInfo> levelSetting = new List<LevelInfo>();

    private float countDownRefreshTime = 0.1f;
    private LevelInfo currentLevelInfo = new LevelInfo();
    private int needSpawnedEnemyNum = 0;
    //private int currentLevel = 0;

    private void Start()
    {
        CurrentLevel = 0;
        StartAll();
    }

    public void StartAll()
    {
        InvokeRepeating("Countdown", 0, countDownRefreshTime);
    }

    private void Countdown()
    {
        startWaitingTime -= countDownRefreshTime;

        //Debug.Log(startWaitingTime);

        if (startWaitingTime <= 0)
        {
            CancelInvoke("Countdown");
            StartLevel();
            return;
        }

        // Refresh everything!!!
    }

    private void StartLevel()
    {
        if (CurrentLevel < levelSetting.Count)
        {
            currentLevelInfo = levelSetting[CurrentLevel];
            needSpawnedEnemyNum = 0;

            for (int i = 0; i < currentLevelInfo.enemyList.Count; i++)
            {
                needSpawnedEnemyNum += currentLevelInfo.enemyList[i].num;
            }

            InvokeRepeating("SpawnEnemy", 0, currentLevelInfo.spacingTime);
        }
        else
        { }
    }

   private void SpawnEnemy()
    {
        //ObjectPooler.Instance.SpawnFormPool(;

        needSpawnedEnemyNum--;

        if (needSpawnedEnemyNum <= 0)
            CancelInvoke("SpawnEnemy");
    }


}
