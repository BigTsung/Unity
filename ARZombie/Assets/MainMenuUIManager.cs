using UnityEngine;

public class MainMenuUIManager : MonoBehaviour {

    public void Go()
    {
        SceneSwitcher.Instance.LoadScene("Main");
    }
}
