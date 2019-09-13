using UnityEngine;

[RequireComponent(typeof(AudioSource))]
public class AudioManager : Singleton<AudioManager>
{
    private AudioSource audioSource;

    [Header("Start Scene")]
    [SerializeField] AudioClip startSceneButton;
    [Header("Game Scene")]
    [SerializeField] AudioClip gameSceneTouchTarget;
    [SerializeField] AudioClip gameSceneButton;

    private void Start()
    {
        audioSource = GetComponent<AudioSource>();
    }

    // ***************************
    // ******* Start Scene *******
    // ***************************

    public void PlayStartSceneButton()
    {
        if(audioSource != null && startSceneButton != null)
            audioSource.PlayOneShot(startSceneButton);
    }

    // ***************************
    // ******* Game Scene ********
    // ***************************

    public void PlayGameSceneTouchTarget()
    {
        if (audioSource != null && gameSceneTouchTarget != null)
            audioSource.PlayOneShot(gameSceneTouchTarget);
    }

    public void PlayGameSceneBotton()
    {
        if (audioSource != null && gameSceneButton != null)
            audioSource.PlayOneShot(gameSceneButton);
    }
}
