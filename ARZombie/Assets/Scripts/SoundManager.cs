using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SoundManager : Singleton<SoundManager> {

    [Header("Weapon")]
    public AudioClip shoot;
    [Header("Zombie")]
    public AudioClip death;

    private AudioSource audioSource;

    // Use this for initialization
    void Start () 
    {
        if (audioSource == null)
            audioSource = GetComponent<AudioSource>();
	}
	
	public void PlayShootOneShot()
    {
        if (audioSource != null)
            audioSource.PlayOneShot(shoot);
    }

    public void PlayZombieDeathOneShot()
    {
        if (audioSource != null)
            audioSource.PlayOneShot(death);
    }
}
