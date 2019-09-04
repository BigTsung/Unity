using UnityEngine;

public class StartMenuUIManager : MonoBehaviour
{
    public void OnClickSinglePlayer()
    {
        BrigeManager.Instance.GotoSinglePlayerGameScene();
    }

    public void OnClickTwoPlayers()
    {
        BrigeManager.Instance.GotoTwoPlayersGameScene();
    }
}
