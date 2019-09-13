using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TouchDetector : Singleton<TouchDetector>
{
    [SerializeField] private bool canInteraction = true;

    public bool CanInteraction
    {
        get;
        set;
    }

    private void Start()
    {
        CanInteraction = canInteraction;
    }

    private void OnDestroy()
    {
        
    }

    void Update()
    {
        if (CanInteraction == false)
            return;

        if (Input.touchCount > 0)
        {
            Debug.Log("touchCount: " + Input.touchCount);

            for (int i = 0; i < Input.touchCount; ++i)
            {
                if (Input.GetTouch(i).phase == TouchPhase.Began)
                {
                    Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(i).position);
                    RaycastHit hitInfo;
                    
                    if (Physics.Raycast(ray, out hitInfo))
                    {
                        Debug.Log("Target tag: " + hitInfo.transform.tag);

                        if (hitInfo.transform.tag == "TargetTop")
                        {
                            AudioManager.Instance.PlayGameSceneTouchTarget();
                            Debug.Log("Touch on target: " + hitInfo.transform.name);
                            GameplayManager.Instance.TopPlayerScore++;
                            TargetGenerator.Instance.Refresh();
                        }
                        else if (hitInfo.transform.tag == "TargetBottom")
                        {
                            AudioManager.Instance.PlayGameSceneTouchTarget();
                            Debug.Log("Touch on target: " + hitInfo.transform.name);
                            GameplayManager.Instance.BottomPlayerScore++;
                            TargetGenerator.Instance.Refresh();
                        }
                    }
                }
            }
        }
        else
        {
            //Debug.Log("Don't do anything!!");
        }
    }
}
