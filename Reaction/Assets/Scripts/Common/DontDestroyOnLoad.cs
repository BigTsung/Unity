using UnityEngine;

public class DontDestroyOnLoad : MonoBehaviour
{
    private void Awake()
    {
        DontDestroyOnLoad(this);
        Debug.Log("<color=red>DontDestroyOnLoad: " + this.name + "</color>");
    }
}
