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

    void Update()
    {
        if (CanInteraction == false)
            return;

        Debug.Log("touchCount: " + Input.touchCount);

        if (Input.touchCount > 0)
        {
            for (int i = 0; i < Input.touchCount; ++i)
            {
                if (Input.GetTouch(i).phase == TouchPhase.Began)
                {
                    // Construct a ray from the current touch coordinates
                    Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(i).position);
                    RaycastHit hitInfo;
                    // Create a particle if hit
                    if (Physics.Raycast(ray, out hitInfo))
                    {
                        Debug.Log("Target tag: " + hitInfo.transform.tag);

                        if (hitInfo.transform.tag == "Target")
                        {
                            Debug.Log("Touch on target: " + hitInfo.transform.name);
                            GameplayManager.Instance.Counter++;
                            TargetGenerator.Instance.Refresh();
                        }
                    }
                }
            }
        }
        else
        {
            Debug.Log("Don't do anything!!");
        }
    }
}
