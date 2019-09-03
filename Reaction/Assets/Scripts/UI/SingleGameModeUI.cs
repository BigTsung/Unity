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

    private Text standbyUIText;
    private Text gameUIText;

    private void Start()
    {
        //SetActiveAllUI(false);
        if (standbyTimeUI != null)
            standbyUIText = standbyTimeUI.GetComponent<Text>();

        if (gameTimeUI != null)
            gameUIText = gameTimeUI.GetComponent<Text>();
    }

    private void OnEnable()
    {
        StartWaitingUserClickAnywhere();
    }

    // ****************************
    // ******* private ************
    // ****************************

    //private void SetActiveAllUI(bool status)
    //{
    //    SetActiveReadyGroupUI(status);
    //    SetActiveTouchAnywhereUI(status);
    //}

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

    // ****************************
    // ******* public *************
    // ****************************

    public void StartWaitingUserClickAnywhere()
    {
        SetActiveReadyGroupUI(true);
        SetActiveTouchAnywhereUI(true);
    }

    public void OnClickTouchAnywhere()
    {
        SetActiveReadyGroupUI(false);
        SetActiveTouchAnywhereUI(false);

        GameplayManager.Instance.CountdownForStartGame();
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
