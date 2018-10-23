﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Character : MonoBehaviour
{
    [SerializeField]
    private int hp = 0;
    [SerializeField]
    private bool isDead = false;

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
            hp = value;
            
            if (hp <= 0)
            {
                hp = 0;

                if (onDead != null && !isDead)
                {
                    isDead = true;
                    //Debug.Log("isDead: " + isDead + " " + transform.parent.name);
                    onDead();
                }
            }

            if (onDamage != null && !isDead)
                onDamage(hp);
        }
    }
}
