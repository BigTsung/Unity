using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

[RequireComponent(typeof(Text))]
public class CountDownText : MonoBehaviour
{
    [SerializeField] private Animation animation;

    private Text countDownText;

    private void Awake()
    {
        countDownText = GetComponent<Text>();
    }

    public void PlayAnimation()
    {
        if (animation.isPlaying)
            animation.Stop();

        animation.Play();

        Debug.Log("PlayAnimation");
    }

    public void SetCountDownText(string value)
    {
        if (countDownText != null)
        {
            countDownText.text = value;
            if (value == string.Empty)
            {
                //TargetGenerator.Instance.Init();
                GameplayManager.Instance.Play();
            }
        }
    }

   
}
