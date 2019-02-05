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
        public int num;
    }

    public float startWaitingTime = 20f;
    public List<LevelInfo> levelSetting = new List<LevelInfo>();

    private float countDownRefreshTime = 0.1f;
    private int currentLevel = 1;

    private void Countdown()
    {
        startWaitingTime -= countDownRefreshTime;

        if (startWaitingTime <= 0)
        {
            CancelInvoke("Countdown");
            SpawnEnemy();
            return;
        }

        // Refresh everything!!!
    }

    private void SpawnEnemy()
    {
         
    }

    public void StartAll()
    {
        InvokeRepeating("Countdown", 0, countDownRefreshTime);
    }


}
