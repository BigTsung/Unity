using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TargetGenerator : Singleton<TargetGenerator>
{
    [SerializeField] GameObject targetPrefab;
    [SerializeField] Transform anchor;

    private Camera cam;
    private GameObject target;

    private float minWidth;
    private float maxWidth;
    private float minHeight;
    private float maxHeight;

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
        target = Instantiate(targetPrefab);

        target.SetActive(false);

        minWidth = -0.5f + (target.transform.localScale.x / 2f);
        maxWidth = 0.5f - (target.transform.localScale.x / 2f);

        minHeight = -1f + (target.transform.localScale.y / 2f);
        maxHeight = 1f - (target.transform.localScale.y / 2f);
    }

    public void Refresh()
    {
        if (target.activeSelf == false)
            target.SetActive(true);

        Vector3 pos = new Vector3(Random.value, Random.value, 10);
       
        pos = cam.ViewportToWorldPoint(pos);

        //pos.x = -100;
        //pos.y = -100;

        pos.x = Mathf.Clamp(pos.x, minWidth, maxWidth);
        pos.y = Mathf.Clamp(pos.y, minHeight, maxHeight);

        target.transform.localPosition = pos;
    }
}
