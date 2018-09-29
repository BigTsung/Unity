using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{
    [SerializeField]
    private int hp = 0;
    private bool isDead = false;

    public delegate void OnDead();
    public OnDead onDead;

    public delegate void OnHurt(int hurtVal);
    public OnHurt onHurt;

    public bool Dead
    {
        get { return isDead; }
        set { isDead = value; }
    }

    public int HP
    {
        get { return hp; }
        set 
        {
            if (value < hp && value > 0)
            {
                if(onHurt != null)
                    onHurt(hp - value);
            }
            hp = value;

            if (hp <= 0)
            {
                isDead = true;
                if (onDead != null)
                    onDead();
            }
        }
    }
}
