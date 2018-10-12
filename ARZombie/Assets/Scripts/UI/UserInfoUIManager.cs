using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UserInfoUIManager : MonoBehaviour {

	public Slider healthBar;
    public Text healthBarVal;

    private void SetHealthBar(int value)
    {
        if (healthBar != null && healthBarVal != null)
        {
            healthBar.value = value;
            healthBarVal.text = value.ToString();
        }
        
    }
}
