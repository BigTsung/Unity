﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class BrigeManager : Singleton<BrigeManager>
{
    public enum GameMode
    {
        SINGLE,
        MULTIPLE
    }

    public GameMode CurrentGameMode
    {
        get;
        private set;
    }

    public void GotoSinglePlayerGameScene()
    {
        Debug.Log("Go to Game Scene");
        CurrentGameMode = GameMode.SINGLE;
        SceneManager.LoadScene("Game");
    }

    public void GotoTwoPlayersGameScene()
    {
        Debug.Log("Go to Game Scene");
        CurrentGameMode = GameMode.MULTIPLE;
        SceneManager.LoadScene("Game");
    }
}
