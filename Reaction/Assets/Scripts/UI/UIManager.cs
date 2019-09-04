using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIManager : Singleton<UIManager>
{
    [SerializeField] private SingleGameModeUI singleGameModeUI;
    [SerializeField] private GameObject twoPlayersModeUI;

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
            twoPlayersModeUI.SetActive(status);
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
        if(singleGameModeUI != null)
            singleGameModeUI.StartWaitingUserClickAnywhere();
    }

    public void SwitchToPlaying()
    {
        if (singleGameModeUI != null)
            singleGameModeUI.StartToPlay();
    }

    public void SwitchToGameOver()
    {
        if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.SINGLE)
        {
            if (singleGameModeUI != null)
            {
                singleGameModeUI.GameOver();

                singleGameModeUI.RefreshResult(GameplayManager.Instance.Counter);
            }
        }
        else if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.TWO)
        { }
        else { }     
    }

    public void RefreshStandbyTime(int value)
    {
        if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.SINGLE)
        {
            singleGameModeUI.RefreshStandbyTime(value);
        }
        else if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.TWO)
        { }
        else { }
    }

    public void RefreshGameTime(int value)
    {
        if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.SINGLE)
        {
            singleGameModeUI.RefreshGameTime(value);
        }
        else if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.TWO)
        { }
        else { }
    }
}
