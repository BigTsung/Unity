using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class GameplayManager : Singleton<GameplayManager>
{
    [SerializeField] private CountDownText countDownText;

    [SerializeField] private int standbyTime = 3;
    [SerializeField] private int gameTime = 10;
    [SerializeField] private Text gameCountDownText;
    [SerializeField] private Text resultText;
    [SerializeField] private GameObject againButton;

    private float timer = 0f;

    private bool playing = false;
    private int countdownValue = 0;

    public int Counter
    {
        get;
        set;
    }

    private void Start()
    {
        Counter = 0;
        SetActiveAgainButton(false);
        SetActiveResultText(false);
        SetActiveGameCountDownText(false);

        Debug.Log("Current game mode: " + BrigeManager.Instance.CurrentGameMode);

        if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.SINGLE)
        {
            StartSingleGameMode();
        }
        else if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.TWO)
        {
            StartTwoGameMode();
        }
        else
        {
            Debug.LogWarning("this game mode(" + BrigeManager.Instance.CurrentGameMode + ")" + " is fail!");
        }
    }

    private void Update()
    {
        if (!playing)
            return;

        //if (timer <= 0)
        //{
        //    playing = false;
        //    Debug.Log("End!!Show the result!");
        //    SetActiveResultText(true);
        //    SetResultText(Counter);
        //    SetActiveAgainButton(true);
        //    SetActiveGameCountDownText(false);
        //    TouchDetector.Instance.CanInteraction = false;
        //}
        //else
        //{
        //    timer -= Time.deltaTime;
        //    SetGameCountDownText((int)timer);
        //}
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

    public void Again()
    {
        countDownText.PlayAnimation();
        SetActiveResultText(false);
        SetActiveAgainButton(false);
    }

    //public void Play()
    //{
    //    if (playing)
    //        return;

    //    TargetGenerator.Instance.Refresh();
    //    SetActiveResultText(false);
    //    SetActiveAgainButton(false);
    //    SetActiveGameCountDownText(true);
    //    TouchDetector.Instance.CanInteraction = true;
    //    playing = true;
    //    timer = gameTime;
    //    Counter = 0;
    //    //StartCoroutine(GameCountDown());
    //}

    public void CountdownForStartGame()
    {
        if(IsInvoking("CountDownForStandby"))
            CancelInvoke("CountDownForStandby");

        countdownValue = standbyTime;

        InvokeRepeating("CountDownForStandby", 0f, 1f);
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

            StartSinglePlayerGame();
        }

        UIManager.Instance.RefreshStandbyTime(countdownValue);

        countdownValue--;
    }

    private void StartSinglePlayerGame()
    {
        UIManager.Instance.SwitchToPlaying();
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
            UIManager.Instance.SwitchToGameOver();
        }

        UIManager.Instance.RefreshGameTime(countdownValue);

        countdownValue--;
    }

    private void StartSingleGameMode()
    {
        Debug.Log("StartSingleGameMode");

        Debug.Log(UIManager.Instance);

        UIManager.Instance.SwitchToSinglePlayerMode();
    }

    private void StartTwoGameMode()
    {
        Debug.Log("StartTwoGameMode");
        UIManager.Instance.SwitchToSTwoPlayersMode();
    }

    private void SetGameCountDownText(int value)
    {
        if (gameCountDownText != null)
            gameCountDownText.text = value.ToString();
    }

    private void SetActiveGameCountDownText(bool status)
    {
        if (gameCountDownText != null)
            gameCountDownText.gameObject.SetActive(status);
    }

    private void SetResultText(int countValue)
    {
        if (resultText != null)
            resultText.text = "You got " + countValue;
    }

    private void SetActiveResultText(bool status)
    {
        if (resultText != null)
            resultText.gameObject.SetActive(status);
    }


    private void SetActiveAgainButton(bool status)
    {
        if (againButton != null)
            againButton.SetActive(status);
    }
    //IEnumerator GameCountDown()
    //{
    //    yield return new WaitForSeconds(gameTime);

    //}
}
