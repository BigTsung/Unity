﻿using UnityEngine;

public class MainMenuUIManager : MonoBehaviour {

    public void Go()
    {
        SceneLoader.Instance.LoadSceneAsync ("GameMode_ProtectMyCamp");
    }
}
