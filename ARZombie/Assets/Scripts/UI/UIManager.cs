using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class UIManager : Singleton<UIManager> {

    [Header("UI")]
    public UserInfoUIManager userInfoUIManager;

    void Start ()
    {
		
	}

    public void InitHealthBar(int val)
    {
        if (userInfoUIManager != null)
        {
            userInfoUIManager.InitHealthBar(val);
        }
    }

    public void RefreshHealthBar(int val)
    {
        if (userInfoUIManager != null)
        {
            userInfoUIManager.RefreshHealthBar(val);
        }
    }

    public void RefreshOverheadBar(float val)
    {
        if (userInfoUIManager != null)
        {
            userInfoUIManager.RefreshOverheadBar(val);
        }
    }
}
