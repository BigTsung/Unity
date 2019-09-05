using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TwoPlayersGameModeUI : MonoBehaviour
{
    [Header("Top Group")]
    [SerializeField] private Text topGroupReadyText;
    [SerializeField] private Button topGroupTouchAnywhereButton;
    [SerializeField] private Text topGroupTouchAnywhereText;
    [SerializeField] private Text topGroupStandbyCountDownText;
    [SerializeField] private Text topGroupGameCountDownText;
    [SerializeField] private Text topGroupResultText;
    [Header("Bottom Group")]
    [SerializeField] private Text bottomGroupReadyText;
    [SerializeField] private Button bottomGroupTouchAnywhereButton;
    [SerializeField] private Text bottomGroupTouchAnywhereText;
    [SerializeField] private Text bottomGroupStandbyCountDownText;
    [SerializeField] private Text bottomGroupGameCountDownText;
    [SerializeField] private Text bottomGroupResultText;

    private void Start()
    {
        InitAll();
    }

    // ****************************
    // ******* public *************
    // ****************************

    public void OnClickTouchAnywhere(int index)
    {
        GameplayManager.Instance.WaitingForTwoPlayersReady(index);
        if (index == 1)
        {
            SwitchTopGroupToReadyMode();
        }
        else if (index == 0)
        {
            SwitchReadyBottomGroupToReadyMode();
        }
        else
        { }
    }

    public void InitAll()
    {
        // Top group
        SetTopGroupReady("Ready?");
        SetActiveTopGroupTouchAnywhereText(true);
        SetActiveTopGroupTouchAnywhereButton(true);
        SetActiveTopGroupStandbyCountdown(false);
        SetActiveTopGroupGameCountdown(false);
        SetActiveTopGroupResult(false);

        // Bottom group
        SetBottomGroupReady("Ready?");
        SetActiveBottomGroupTouchAnywhereText(true);
        SetActiveBottomGroupTouchAnywhereButton(true);
        SetActiveBottomGroupStandbyCountdown(false);
        SetActiveBottomGroupGameCountdown(false);
        SetActiveBottomGroupResult(false);
    }

    public void GameOver()
    {
        // Top group
        SetActiveTopGroupTouchAnywhereText(false);
        SetActiveTopGroupTouchAnywhereButton(false);
        SetActiveTopGroupStandbyCountdown(false);
        SetActiveTopGroupGameCountdown(false);

        SetTopGroupResult(GameplayManager.Instance.TopPlayerScore);
        SetActiveTopGroupResult(true);

        // Bottom group

        SetActiveBottomGroupTouchAnywhereText(false);
        SetActiveBottomGroupTouchAnywhereButton(false);
        SetActiveBottomGroupStandbyCountdown(false);
        SetActiveBottomGroupGameCountdown(false);

        SetBottomGroupResult(GameplayManager.Instance.BottomPlayerScore);
        SetActiveBottomGroupResult(true);
    }

    public void RefreshStandbyTime(int value)
    {
        SetActiveTopGroupStandbyCountdown(true);
        SetActiveBottomGroupStandbyCountdown(true);

        SetTopGroupStandbyCountDown(value);
        SetBottomGroupStandbyCountDown(value);
    }

    public void RefreshGameTime(int value)
    {
        SetTopGroupGameCountDown(value);
        SetBottomGroupGameCountDown(value);
    }

    public void StartToPlay()
    {
        // Top group
        SetActiveTopGroupTouchAnywhereText(false);
        SetActiveTopGroupTouchAnywhereButton(false);
        SetActiveTopGroupStandbyCountdown(false);
        SetActiveTopGroupGameCountdown(true);
        SetActiveTopGroupResult(false);

        // Bottom group
        SetActiveBottomGroupTouchAnywhereText(false);
        SetActiveBottomGroupTouchAnywhereButton(false);
        SetActiveBottomGroupStandbyCountdown(false);
        SetActiveBottomGroupGameCountdown(true);
        SetActiveBottomGroupResult(false);
    }

    public void StartToStandby()
    {
        // Top group
        SetActiveTopGroupTouchAnywhereText(false);
        SetActiveTopGroupTouchAnywhereButton(false);
        SetActiveTopGroupStandbyCountdown(true);
        SetActiveTopGroupGameCountdown(false);
        SetActiveTopGroupResult(false);
        SetActiveTopGroupReadyText(false);

        // Bottom group
        SetActiveBottomGroupTouchAnywhereText(false);
        SetActiveBottomGroupTouchAnywhereButton(false);
        SetActiveBottomGroupStandbyCountdown(true);
        SetActiveBottomGroupGameCountdown(false);
        SetActiveBottomGroupResult(false);
        SetActiveBottomGroupReadyText(false);
    }

    // ****************************
    // ******* private ************
    // ****************************

    private void SwitchTopGroupToReadyMode()
    {
        SetTopGroupReady("Ready");
        SetActiveTopGroupTouchAnywhereText(false);
        SetActiveTopGroupTouchAnywhereButton(false);
    }

    private void SwitchReadyBottomGroupToReadyMode()
    {
        SetBottomGroupReady("Ready");
        SetActiveBottomGroupTouchAnywhereText(false);
        SetActiveBottomGroupTouchAnywhereButton(false);
    }

    // Top group

    private void SetTopGroupStandbyCountDown(int value)
    {
        if (topGroupStandbyCountDownText != null)
            topGroupStandbyCountDownText.text = value.ToString();
    }

    private void SetTopGroupGameCountDown(int value)
    {
        if (topGroupGameCountDownText != null)
            topGroupGameCountDownText.text = value.ToString();
    }

    private void SetTopGroupReady(string content)
    {
        if (topGroupReadyText != null)
            topGroupReadyText.text = content;
    }

    private void SetTopGroupResult(int value)
    {
        if (topGroupResultText != null)
            topGroupResultText.text = value.ToString();
    }

    private void SetActiveTopGroupReadyText(bool status)
    {
        if (topGroupReadyText != null)
            topGroupReadyText.gameObject.SetActive(status);
    }

    private void SetActiveTopGroupTouchAnywhereText(bool status)
    {
        if (topGroupTouchAnywhereText != null)
            topGroupTouchAnywhereText.gameObject.SetActive(status);
    }

    private void SetActiveTopGroupTouchAnywhereButton(bool status)
    {
        if (topGroupTouchAnywhereButton != null)
            topGroupTouchAnywhereButton.gameObject.SetActive(status);
    }

    private void SetActiveTopGroupStandbyCountdown(bool status)
    {
        if (topGroupStandbyCountDownText != null)
            topGroupStandbyCountDownText.gameObject.SetActive(status);
    }

    private void SetActiveTopGroupGameCountdown(bool status)
    {
        if (topGroupGameCountDownText != null)
            topGroupGameCountDownText.gameObject.SetActive(status);
    }

    private void SetActiveTopGroupResult(bool status)
    {
        if (topGroupResultText != null)
            topGroupResultText.transform.parent.gameObject.SetActive(status);
    }

    // Bottom group

    private void SetBottomGroupStandbyCountDown(int value)
    {
        if (bottomGroupStandbyCountDownText != null)
            bottomGroupStandbyCountDownText.text = value.ToString();
    }

    private void SetBottomGroupGameCountDown(int value)
    {
        if (bottomGroupGameCountDownText != null)
            bottomGroupGameCountDownText.text = value.ToString();
    }

    private void SetBottomGroupReady(string content)
    {
        if (bottomGroupReadyText != null)
            bottomGroupReadyText.text = content;
    }

    private void SetBottomGroupResult(int value)
    {
        if (bottomGroupResultText != null)
            bottomGroupResultText.text = value.ToString();
    }

    private void SetActiveBottomGroupReadyText(bool status)
    {
        if (bottomGroupReadyText != null)
            bottomGroupReadyText.gameObject.SetActive(status);
    }

    private void SetActiveBottomGroupTouchAnywhereText(bool status)
    {
        if (bottomGroupTouchAnywhereText != null)
            bottomGroupTouchAnywhereText.gameObject.SetActive(status);
    }

    private void SetActiveBottomGroupTouchAnywhereButton(bool status)
    {
        if (bottomGroupTouchAnywhereButton != null)
            bottomGroupTouchAnywhereButton.gameObject.SetActive(status);
    }

    private void SetActiveBottomGroupStandbyCountdown(bool status)
    {
        if (bottomGroupStandbyCountDownText != null)
            bottomGroupStandbyCountDownText.gameObject.SetActive(status);
    }

    private void SetActiveBottomGroupGameCountdown(bool status)
    {
        if (bottomGroupGameCountDownText != null)
            bottomGroupGameCountDownText.gameObject.SetActive(status);
    }

    private void SetActiveBottomGroupResult(bool status)
    {
        if (bottomGroupResultText != null)
            bottomGroupResultText.transform.parent.gameObject.SetActive(status);
    }
}
