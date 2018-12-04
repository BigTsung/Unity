using UnityEngine;

public class ZombieInteraction : MonoBehaviour {

    [SerializeField]
    private AudioClip interactionClip;

    public AudioClip GetInteractionClip()
    {
        if (interactionClip != null)
            return interactionClip;
        else
            return null;
    }
}
