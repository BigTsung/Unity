using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetGenerator : Singleton<TargetGenerator>
{
    [SerializeField] GameObject topTargetPrefab;
    [SerializeField] GameObject bottomTargetPrefab;
    [SerializeField] Transform anchor;

    private Camera cam;
    private GameObject topTarget;
    private GameObject bottomTarget;

    private float firstMinWidth;
    private float firstMaxWidth;
    private float firstMinHeight;
    private float firstMaxHeight;

    private float secondMinWidth;
    private float secondMaxWidth;
    private float secondMinHeight;
    private float secondMaxHeight;

    // Start is called before the first frame update
    void Start()
    {
        cam = Camera.main;
        CreateTarget();
    }

    private void OnDestroy()
    {
        Debug.Log("OnDestroy: " + "TargetGenerator");
    }

    private void CreateTarget()
    {
        if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.SINGLE)
        {
            topTarget = Instantiate(topTargetPrefab);
            topTarget.SetActive(false);

            firstMinWidth = -0.5f + (topTarget.transform.localScale.x / 2f);
            firstMaxWidth = 0.5f - (topTarget.transform.localScale.x / 2f);

            firstMinHeight = -1f + (topTarget.transform.localScale.y / 2f);
            firstMaxHeight = 1f - (topTarget.transform.localScale.y / 2f);
        }
        else if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.MULTIPLE)
        {
            topTarget = Instantiate(topTargetPrefab);
            topTarget.SetActive(false);

            bottomTarget = Instantiate(bottomTargetPrefab);
            bottomTarget.SetActive(false);

            firstMinWidth = -0.5f + (topTarget.transform.localScale.x / 2f);
            firstMaxWidth = 0.5f - (topTarget.transform.localScale.x / 2f);

            firstMinHeight = 0 + (topTarget.transform.localScale.y / 2f);
            firstMaxHeight = 1f - (topTarget.transform.localScale.y / 2f);

            secondMinWidth = -0.5f + (topTarget.transform.localScale.x / 2f);
            secondMaxWidth = 0.5f - (topTarget.transform.localScale.x / 2f);

            secondMinHeight = -1f + (topTarget.transform.localScale.y / 2f);
            secondMaxHeight = 0 - (topTarget.transform.localScale.y / 2f);
        }
        else
        { }
    }

    public void Refresh()
    {
        //if (topTarget.activeSelf == false)
        //    topTarget.SetActive(true);

        if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.SINGLE)
        {
            Vector3 pos = new Vector3(Random.value, Random.value, 10);

            pos = cam.ViewportToWorldPoint(pos);

            pos.x = Mathf.Clamp(pos.x, firstMinWidth, firstMaxWidth);
            pos.y = Mathf.Clamp(pos.y, firstMinHeight, firstMaxHeight);

            topTarget.transform.localPosition = pos;
        }
        else if (BrigeManager.Instance.CurrentGameMode == BrigeManager.GameMode.MULTIPLE)
        {
            Vector3 posTop = new Vector3(Random.value, Random.value, 10);

            posTop = cam.ViewportToWorldPoint(posTop);

            posTop.x = Mathf.Clamp(posTop.x, firstMinWidth, firstMaxWidth);
            posTop.y = Mathf.Clamp(posTop.y, firstMinHeight, firstMaxHeight);

            topTarget.transform.localPosition = posTop;


            Vector3 posBottom = new Vector3(Random.value, Random.value, 10);

            posBottom = cam.ViewportToWorldPoint(posBottom);

            posBottom.x = Mathf.Clamp(posBottom.x, secondMinWidth, secondMaxWidth);
            posBottom.y = Mathf.Clamp(posBottom.y, secondMinHeight, secondMaxHeight);

            bottomTarget.transform.localPosition = posBottom;
        }
    }

    public void SetActiveTarget(bool status)
    {
        if (topTarget != null)
            topTarget.SetActive(status);

        if (bottomTarget != null)
            bottomTarget.SetActive(status);
    }
}
