using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TaskManager : Singleton<TaskManager> {

    [System.Serializable]
    public class Task 
    {
        public GameObject taskObjectPrefab;
        public int taskObjectNum; 
    }

    public List<Transform> spawnPostionList = new List<Transform>();
    public List<Task> taskSettings = new List<Task>();

    private int currentTaskIndex = -1;
    private int finishNum = 0;
    private int currentTotalTaslObject = 0;

    private void Start()
    {
        SetTaskIndex(0);
        SpawnTaskObject();
    }

    // ===========================
    // Private Function
    // ===========================
    private void SpawnTaskObject()
    {
        if (currentTaskIndex < 0)
        {
            Debug.LogWarning("Please set the task index first!!!");
            return;
        }

        Task task = taskSettings[currentTaskIndex];

        if (task == null)
        {
            Debug.LogWarning("Your task index is wrong!! task setting length: " + taskSettings.Count);
            return;
        }

        currentTotalTaslObject = task.taskObjectNum;

        for (int i = 0; i < task.taskObjectNum; i++)
        {
            Transform spawnPos;

            if (spawnPostionList.Count > 0)
            {
                spawnPos = spawnPostionList[0];
                spawnPostionList.RemoveAt(0);
            }
            else
            {
                Debug.LogWarning("Too many task object!!");
                return;
            }

            GameObject taskObject = GameObject.Instantiate(task.taskObjectPrefab, spawnPos);
            taskObject.GetComponent<TaskObject>().onFinish += CheckTaskFinish;
        }
    }

    private void CheckTaskFinish()
    {
        finishNum++;
        if (finishNum == currentTotalTaslObject)
        {
            UIManager.Instance.SetGameStatus(GameStatusUIManager.STATUS.COMPLETE);
            Time.timeScale = 0f;
        }
        Debug.Log( "Finish!!! " + finishNum );
    }

    // ===========================
    // Public Function
    // ===========================
    public void SetTaskIndex(int index)
    {
        currentTaskIndex = index;
    }

}
