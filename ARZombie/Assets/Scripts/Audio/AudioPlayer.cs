using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class AudioPlayer : Singleton<AudioPlayer> { 

	private AudioSource audioSource;
    //private AudioClip currentClip;

    private void Awake()
    {
        if (audioSource == null)
        {
            audioSource = GetComponent<AudioSource>();
            audioSource.playOnAwake = false;
            audioSource.mute = false;
        }
    }

    public void PlayOneShot(AudioClip clip, float delayTime = 0f)
    {
        if (audioSource != null && clip != null)
        {
            //currentClip = clip;
            //Debug.Log("PlayOneShot");
            StartCoroutine(AudioPlaying(clip, delayTime));
        }
        else
        {
            Debug.LogWarning("Audio resource or audio clip is null??");
        }
    }

    public void StopPlaying()
    {
        if (audioSource != null)
        {
            audioSource.Stop();
        }
    }

    IEnumerator AudioPlaying(AudioClip clip, float waitTime)
    {
        yield return new WaitForSeconds(waitTime);
        //Debug.Log("AudioPlaying");
        audioSource.PlayOneShot(clip);
    }
}
