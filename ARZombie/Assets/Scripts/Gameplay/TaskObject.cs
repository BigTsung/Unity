using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TaskObject : MonoBehaviour {

    public delegate void OnFinish();
    public OnFinish onFinish;

    public void Done()
    {
        Debug.Log(this.name + " is done!!");

        if (onFinish != null)
            onFinish();
    }
}
