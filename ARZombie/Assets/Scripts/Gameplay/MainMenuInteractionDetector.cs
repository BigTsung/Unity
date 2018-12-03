using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenuInteractionDetector : MonoBehaviour {

    void Update()
    {
#if !UNITY_EDITOR
        if (Input.touchCount == 1 && Input.GetTouch(0).phase == TouchPhase.Ended)
        {
            TouchDetection(Input.GetTouch(0).position);
        }
#else
        if (Input.GetMouseButtonDown(0))
        {
            TouchDetection(Input.mousePosition);
        }
#endif
    }

    private void TouchDetection(Vector2 pos)
    {
        Ray ray = Camera.main.ScreenPointToRay(pos);
        RaycastHit hit;
        //Debug.DrawRay(ray.origin, ray.direction * 100, Color.yellow, 100f);
        if (Physics.Raycast(ray, out hit))
        {
            //Debug.Log(hit.transform.name);
            if (hit.collider != null)
            {
                GameObject touchedObject = hit.transform.gameObject;
                touchedObject.GetComponent<Animator>().SetTrigger("Interaction");
                //Debug.Log("Touched " + touchedObject.transform.name);
            }
        }
    }
}
