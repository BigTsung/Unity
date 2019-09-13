using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : Singleton<UIManager>
{
    [SerializeField] private SingleGameModeUI singleGameModeUI;
    [SerializeField] private TwoPlayersGameModeUI twoPlayersModeUI;

    private void Start()
    {
        SetActiveSinglePlayerModeUI(false);
        SetActiveTwoPlayersModeUI(false);
    }

    private void OnDestroy()
    {
        Debug.Log("OnDestroy: " + "UIManager");
    }

    // ****************************
    // ******* private ************
    // ****************************

    private void SetActiveSinglePlayerModeUI(bool status)
    {
        if (singleGameModeUI != null)
            singleGameModeUI.gameObject.SetActive(status);
    }

    private void SetActiveTwoPlayersModeUI(bool status)
    {
        if (twoPlayersModeUI != null)
            twoPlayersModeUI.gameObject.SetActive(status);
    }

    // ****************************
    // ******* public *************
    // ****************************

    public void SwitchToSinglePlayerMode()
    {
        SetActiveSinglePlayerModeUI(true);
        SetActiveTwoPlayersModeUI(false);
    }

    public void SwitchToSTwoPlayersMode()
    {
        SetActiveSinglePlayerModeUI(false);
        SetActiveTwoPlayersModeUI(true);
    }

    public void SwitchWaitForUserReady()
    {
        if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.SINGLE)
        {
            if (singleGameModeUI != null)
                singleGameModeUI.StartWaitingUserClickAnywhere();
        }
        else if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.MULTIPLE)
        {
            if (twoPlayersModeUI != null)
                twoPlayersModeUI.InitAll();
        }
      
    }

    public void SwitchToStandbyCountdown()
    {
        if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.SINGLE)
        {
            if (singleGameModeUI != null)
                singleGameModeUI.StartToStandby();
        }
        else if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.MULTIPLE)
        {
            if (twoPlayersModeUI != null)
                twoPlayersModeUI.StartToStandby();
        }
        else { }
    }

    public void SwitchToPlaying()
    {
        if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.SINGLE)
        {
            if (singleGameModeUI != null)
                singleGameModeUI.StartToPlay();
        }
        else if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.MULTIPLE)
        {
            if (twoPlayersModeUI != null)
                twoPlayersModeUI.StartToPlay();
        }
        else { }
    }

    public void SwitchToGameOver()
    {
        if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.SINGLE)
        {
            if (singleGameModeUI != null)
            {
                singleGameModeUI.GameOver();
            }
        }
        else if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.MULTIPLE)
        {
            if (twoPlayersModeUI != null)
            {
                twoPlayersModeUI.GameOver();
            }
        }
        else { }     
    }

    public void RefreshStandbyTime(int value)
    {
        if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.SINGLE)
        {
            singleGameModeUI.RefreshStandbyTime(value);
        }
        else if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.MULTIPLE)
        {
            twoPlayersModeUI.RefreshStandbyTime(value);
        }
        else { }
    }

    public void RefreshGameTime(int value)
    {
        if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.SINGLE)
        {
            singleGameModeUI.RefreshGameTime(value);
        }
        else if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.MULTIPLE)
        {
            twoPlayersModeUI.RefreshGameTime(value);
        }
        else { }
    }

    //public void SwitchTopPlayerToReady()
    //{
    //    if (twoPlayersModeUI != null)
    //    {
    //        twoPlayersModeUI.
    //    }
    //}
}
