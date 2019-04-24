using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MainMenuInteractionDetector : MonoBehaviour {

    private 

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
            if (hit.collider != null && hit.transform.tag == "Enemy")
            {
                GameObject touchedObject = hit.transform.gameObject;
                Animator touchedObjectAnimator = touchedObject.GetComponent<Animator>();

                if (touchedObjectAnimator.GetCurrentAnimatorStateInfo(0).IsName("Idle") && touchedObjectAnimator.IsInTransition(0) == false)
                {
                    touchedObjectAnimator.SetTrigger("Interaction");
                    AudioClip interactionClip = touchedObject.GetComponent<ZombieInteraction>().GetInteractionClip();
                    AudioPlayer.Instance.PlayOneShot(interactionClip);
                }
                    
                //Debug.Log("Touched " + touchedObject.transform.name);
            }
        }
    }
}
