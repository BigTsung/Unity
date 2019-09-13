using UnityEngine;
using UnityEngine.SceneManagement;

public class AppStatusManager : MonoBehaviour
{
	void OnApplicationQuit()
	{
		Debug.Log("Application ending after " + Time.time + " seconds");
	}

    static bool WantsToQuit()
    {
        Debug.Log("Player prevented from quitting.");
        return false;
    }

    [RuntimeInitializeOnLoadMethod]
    static void RunOnStart()
    {
        Application.wantsToQuit += WantsToQuit;
    }

    private void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            Debug.Log("Click Back Button!!");
            if (SceneManager.GetActiveScene().name == "Start")
            {
                Application.Quit();
            }

            //Application.Quit();
        }
            
    }
}
