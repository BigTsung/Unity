using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameplayManager : Singleton<GameplayManager>
{
    [SerializeField] private int standbyTime = 3;
    [SerializeField] private int gameTime = 10;

    private float timer = 0f;

    private bool playing = false;
    private int countdownValue = 0;
    private bool bottomPlayerReady = false;
    private bool topPlayerReady = false;

    //public int Counter
    //{
    //    get;
    //    set;
    //}

    public int TopPlayerScore
    {
        get;
        set;
    }

    public int BottomPlayerScore
    {
        get;
        set;
    }

    private void Start()
    {
        TopPlayerScore = 0;
        BottomPlayerScore = 0;

        Debug.Log("Current game mode: " + BrigeManager.Instance.CurrentGameMode);

        if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.SINGLE)
        {
            StartOnePlayerMode();
        }
        else if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.MULTIPLE)
        {
            StartTwoPlayersMode();
        }
        else
        {
            Debug.LogWarning("this game mode(" + BrigeManager.Instance.CurrentGameMode + ")" + " is fail!");
        }
    }

    private void OnDestroy()
    {
        Debug.Log("OnDestroy: " + "GameplayManager");
    }

    // ****************************
    // ******* public *************
    // ****************************

    public void GotoStartScene()
    {
        Debug.Log("Go to Start Scene");
        SceneManager.LoadScene("Start");
    }

    public void CountdownForStartGame()
    {
        if(IsInvoking("CountDownForStandby"))
            CancelInvoke("CountDownForStandby");

        countdownValue = standbyTime;

        InvokeRepeating("CountDownForStandby", 0f, 1f);
    }

    public void WaitingForTwoPlayersReady(int index)
    {
        Debug.Log(index + " is ready!");

        if (index == 1)
        {
            topPlayerReady = true;
            //UIManager.Instance.SwitchTopPlayerToReady();
        }
        else if (index == 0)
        {
            bottomPlayerReady = true;
        }
        else
        { }

        if (bottomPlayerReady && topPlayerReady)
        {
            Debug.Log("All ready!!");
            countdownValue = standbyTime;
            UIManager.Instance.SwitchToStandbyCountdown();
            InvokeRepeating("CountDownForStandby", 0f, 1f);
        }
    }

    // ****************************
    // ******* private ************
    // ****************************

    private void CountDownForStandby()
    {
        if (countdownValue <= 0)
        {
            CancelInvoke("CountDownForStandby");
            Debug.Log("Start This Game!!");

            Playing();
            return;
        }

        Debug.Log("Standby Time: " + countdownValue);

        UIManager.Instance.RefreshStandbyTime(countdownValue);

        countdownValue--;
    }

    private void Playing()
    {
        UIManager.Instance.SwitchToPlaying();
        TargetGenerator.Instance.SetActiveTarget(true);
        TargetGenerator.Instance.Refresh();

        if (IsInvoking("CountDownForEnd"))
            CancelInvoke("CountDownForEnd");

        countdownValue = gameTime;

        InvokeRepeating("CountDownForEnd", 0f, 1f);
    }

    private void CountDownForEnd()
    {
        if (countdownValue <= 0)
        {
            Debug.Log("Game Over!");
            CancelInvoke("CountDownForEnd");
            TouchDetector.Instance.CanInteraction = false;
            TargetGenerator.Instance.SetActiveTarget(false);
            UIManager.Instance.SwitchToGameOver();
            return;
        }

        UIManager.Instance.RefreshGameTime(countdownValue);

        countdownValue--;
    }

    private void StartOnePlayerMode()
    {
        Debug.Log("StartSingleGameMode");

        UIManager.Instance.SwitchToSinglePlayerMode();
    }

    private void StartTwoPlayersMode()
    {
        Debug.Log("StartTwoGameMode");

        UIManager.Instance.SwitchToSTwoPlayersMode();
    }

    
}
