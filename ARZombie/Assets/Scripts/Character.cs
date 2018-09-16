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
            if (value < hp && value > 0)
                OnHurting();

            hp = value;

            if (hp <= 0f)
                OnDead();
        }
    }

    private void OnDead()
    {
        //Debug.Log("Dead!!!");
        PlayAnimation("Death", false);
        if(enemyController.Agent != null)
        {
            enemyController.Agent.isStopped = true;
        }
        if (enemyController.ColliderCom != null)
            enemyController.ColliderCom.enabled = false;

        Invoke("Disappear", 3f);
    }

    private void Disappear()
    {
        gameObject.SetActive(false);
    }

    private void OnHurting()
    {
        //Debug.Log("Hurting!!!");
        PlayAnimation("Hurt", true);
    }

    private void PlayAnimation(string aniName, bool supportRepeat = true)
    {
        if (enemyController.Ani != null)
        {
            //Debug.Log(aniName);
            if(supportRepeat)
                enemyController.Ani.CrossFadeInFixedTime(aniName, 0.1f);
            else
                enemyController.Ani.CrossFade(aniName, 0.1f);
        }
    }
}
