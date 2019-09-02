using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameplayManager : Singleton<GameplayManager>
{
    [SerializeField] private CountDownText countDownText;

    [SerializeField] private int gameTime = 10;
    [SerializeField] private Text gameCountDownText;
    [SerializeField] private Text resultText;
    [SerializeField] private GameObject againButton;

    private float timer = 0f;

    private bool playing = false;

    public int Counter
    {
        get;
        set;
    }

    private void Start()
    {
        Counter = 0;
        SetActiveAgainButton(false) ;
        SetActiveResultText(false);
        SetActiveGameCountDownText(false);
    }

    public void Again()
    {
        countDownText.PlayAnimation();
        SetActiveResultText(false);
        SetActiveAgainButton(false);
    }

    public void Play()
    {
        if (playing)
            return;

        TargetGenerator.Instance.Refresh();
        SetActiveResultText(false);
        SetActiveAgainButton(false);
        SetActiveGameCountDownText(true);
        TouchDetector.Instance.CanInteraction = true;
        playing = true;
        timer = gameTime;
        Counter = 0;
        //StartCoroutine(GameCountDown());
    }

    private void Update()
    {
        if (!playing)
            return;

        if (timer <= 0)
        {
            playing = false;
            Debug.Log("End!!Show the result!");
            SetActiveResultText(true);
            SetResultText(Counter);
            SetActiveAgainButton(true);
            SetActiveGameCountDownText(false);
            TouchDetector.Instance.CanInteraction = false;
        }
        else
        {
            timer -= Time.deltaTime;
            SetGameCountDownText((int)timer);
        }
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
