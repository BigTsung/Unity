using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class Character : MonoBehaviour
{
    [SerializeField]
    private float hp = 0;

    private EnemyController enemyController;

    private void Start()
    {
        enemyController = GetComponent<EnemyController>();
    }

    public float HP
    {
        get { return hp; }
        set 
        {
            if (value < hp)
                OnHurting();

            hp = value;

            if (hp <= 0f)
                OnDead();
        }
    }

    private void OnDead()
    {
        Debug.Log("Dead!!!");
        PlayAnimation("Death");
        if(enemyController.Agent != null)
        {
            enemyController.Agent.isStopped = true;
        }
        Invoke("Disappear", 3f);
    }

    private void Disappear()
    {
        gameObject.SetActive(false);
    }

    private void OnHurting()
    {
        Debug.Log("Hurting!!!");
    }

    private void PlayAnimation(string aniName)
    {
        if (enemyController.Ani != null)
        {
            enemyController.Ani.CrossFade(aniName, 0.3f);
        }
    }
}
