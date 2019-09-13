using UnityEngine;

public class StartMenuUIManager : MonoBehaviour
{
    public void OnClickSinglePlayer()
    {
        AudioManager.Instance.PlayStartSceneButton();
        Invoke("GotoSinglePlayerGameScene", 3);
       
    }

    public void OnClickTwoPlayers()
    {
        AudioManager.Instance.PlayStartSceneButton();
        Invoke("GotoSinglePlayerGameScene", 3);
    }

    private void GotoSinglePlayerGameScene()
    {
        BrigeManager.Instance.GotoSinglePlayerGameScene();
    }

    private void GotoTwoPlayersGameScene()
    {
        BrigeManager.Instance.GotoTwoPlayersGameScene();
    }
}
