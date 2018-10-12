using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{
    [SerializeField]
    private int hp = 0;
    public bool isDead = false;

    public delegate void OnDead();
    public OnDead onDead;

    public delegate void OnDamage(int hurtVal);
    public OnDamage onDamage;

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
                if(onDamage != null)
                    onDamage(hp - value);
            }
            hp = value;

            if (hp <= 0)
            {
                if (onDead != null)
                {
                    isDead = true;
                    onDead();
                }
            }
        }
    }
}
