using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SingleGameModeUI : MonoBehaviour
{
    [SerializeField] private GameObject readyGroupUI;
    [SerializeField] private GameObject touchAnywhereUI;
    [SerializeField] private GameObject standbyTimeUI;
    [SerializeField] private GameObject gameTimeUI;
    [SerializeField] private GameObject resultUI;

    private Text standbyUIText;
    private Text gameUIText;
    private Text resultUIText;

    private void Start()
    {
        if (standbyTimeUI != null)
            standbyUIText = standbyTimeUI.GetComponent<Text>();

        if (gameTimeUI != null)
            gameUIText = gameTimeUI.GetComponent<Text>();

        if (resultUI != null)
            resultUIText = resultUI.transform.GetChild(0).GetComponent<Text>();
    }

    private void OnEnable()
    {
        StartWaitingUserClickAnywhere();
    }

    private void SetActiveReadyGroupUI(bool status)
    {
        if (readyGroupUI != null)
            readyGroupUI.SetActive(status);
    }

    private void SetActiveTouchAnywhereUI(bool status)
    {
        if (touchAnywhereUI != null)
            touchAnywhereUI.SetActive(status);
    }

    private void SetActiveStandbyTimeUI(bool status)
    {
        if (standbyTimeUI != null)
            standbyTimeUI.SetActive(status);
    }

    private void SetActiveGameTimeUI(bool status)
    {
        if (gameTimeUI != null)
            gameTimeUI.SetActive(status);
    }

    private void SetActiveResultUI(bool status)
    {
        if (resultUI != null)
            resultUI.SetActive(status);
    }

    private void RefreshResult(int value)
    {
        if (resultUIText != null)
            resultUIText.text = value.ToString();
    }

    // ****************************
    // ******* public *************
    // ****************************

    public void StartWaitingUserClickAnywhere()
    {
        SetActiveReadyGroupUI(true);
        SetActiveTouchAnywhereUI(true);
        SetActiveStandbyTimeUI(false);
        SetActiveGameTimeUI(false);
        SetActiveResultUI(false);
    }

    public void OnClickAgain()
    {
        AudioManager.Instance.PlayGameSceneBotton();

        GameplayManager.Instance.Again();
    }

    public void OnClickBack()
    {
        AudioManager.Instance.PlayGameSceneBotton();

        GameplayManager.Instance.GotoStartScene();
    }

    public void OnClickTouchAnywhere()
    {
        SetActiveReadyGroupUI(false);
        SetActiveTouchAnywhereUI(false);
        SetActiveStandbyTimeUI(true);
        SetActiveGameTimeUI(false);
        SetActiveResultUI(false);

        GameplayManager.Instance.CountdownForStartGame();
    }

    public void StartToPlay()
    {
        SetActiveReadyGroupUI(false);
        SetActiveTouchAnywhereUI(false);
        SetActiveStandbyTimeUI(false);
        SetActiveGameTimeUI(true);
        SetActiveResultUI(false);
    }

    public void StartToStandby()
    {
        SetActiveReadyGroupUI(false);
        SetActiveTouchAnywhereUI(false);
        SetActiveStandbyTimeUI(true);
        SetActiveGameTimeUI(false);
        SetActiveResultUI(false);
    }

    public void GameOver()
    {
        SetActiveReadyGroupUI(false);
        SetActiveTouchAnywhereUI(false);
        SetActiveStandbyTimeUI(false);
        SetActiveGameTimeUI(false);
        SetActiveResultUI(true);

        RefreshResult(GameplayManager.Instance.TopPlayerScore);
    }

    public void RefreshStandbyTime(int value)
    {
        if(standbyUIText != null)
            standbyUIText.text = value.ToString();
    }

    public void RefreshGameTime(int value)
    {
        if (gameUIText != null)
            gameUIText.text = value.ToString();
    }

    
}
