using System.Collections;
using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneLoader : Singleton<SceneLoader> {

    public void LoadSceneAsync(string sceneName)
    {
        //SceneManager.LoadScene("Loading");
        StartCoroutine(LoadNewScene("Loading", 1.25f));
        StartCoroutine(LoadNewScene(sceneName, 3f));
    }

    IEnumerator LoadNewScene(string sceneName, float waitTime)
    {
        yield return new WaitForSeconds(waitTime);
        AsyncOperation async = SceneManager.LoadSceneAsync(sceneName);

        while (!async.isDone)
        {
            yield return null;
        }
    }
}
