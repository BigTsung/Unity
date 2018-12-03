using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

[RequireComponent(typeof(AudioEventTrigger))]
public class AudioButton : MonoBehaviour
{
    public EventTriggerType triggerType;
    public AudioClip audioClip;
    public float delayTime;

    void Start()
    {
        EventTrigger trigger = GetComponent<EventTrigger>();
        EventTrigger.Entry entry = new EventTrigger.Entry();
        entry.eventID = triggerType;
        entry.callback.AddListener((data) => { OnPointerDelegate((PointerEventData)data); });
        trigger.triggers.Add(entry);
    }

    public void OnPointerDelegate(PointerEventData data)
    {
        Debug.Log("OnPointerDelegate called.");

        AudioPlayer.Instance.PlayOneShot(audioClip, delayTime);
    }
}
