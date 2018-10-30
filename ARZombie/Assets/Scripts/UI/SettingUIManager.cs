using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SettingUIManager : MonoBehaviour {

    public GameObject settingMainUI;

    private void Start()
    {
        Init();
    }

    private void Init()
    {
        SetActiveSettingMainUI(false);
    }

    public void SetActiveSettingMainUI(bool status)
    {
        if (settingMainUI != null)
        {
            if (status == true)
                Time.timeScale = 0f;
            else
                Time.timeScale = 1f;

            settingMainUI.SetActive(status);
        }
    }

    public void Exit()
    {
#if UNITY_EDITOR
        UnityEditor.EditorApplication.isPlaying = false;
#else
        Application.Quit();
#endif
    }
}
