using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(PlayerBehaviour))]

public class PlayerController : MonoBehaviour 
{
    private struct ObjectInfo
    {
        public GameObject target;
        public int id;
    }

    public float rotateSpeed = 10f;
    public float rotateAngleFix = -35f;
    public float crossdurationTime = 0.1f;
    public float moveSpeed = 8f;
    public float overheatSpeed = 0.2f;
    public Joystick moveJoystick;
    public Joystick rotateJoystick;

    // private
    private WeaponManager weaponManager;
    private PlayerBehaviour playerBehaviour;
    private GameObject closeTarget = null;
    private float shootTimeCount = 0f;
    private bool shooting = false;
    private bool autoAttack = false;
    private float overheatValue = 0f;
    private bool isOverHeat = false;
    private float horizontal = 0f;
    private float vertical = 0f;

    private List<ObjectInfo> aroundMeList = new List<ObjectInfo>();
    
    private void Awake()
    {
        PlayerManager.Instance.AddToPlayerList(this.transform);
        playerBehaviour = GetComponent<PlayerBehaviour>();
        weaponManager = GetComponent<WeaponManager>();
    }

    void Update ()
    {
        MoveingAndRotation();

        if(autoAttack)
            RotateToTarget();

        // Shoot
        if (shooting)
        //if (shooting && !isOverHeat)
        {
            Shoot();

            overheatValue += Time.deltaTime * overheatSpeed;
            if (overheatValue >= 1)
            {
                overheatValue = 1;
                isOverHeat = true;
            }
        }
        else
        {
            overheatValue -= Time.deltaTime * overheatSpeed;
            if (overheatValue <= 0)
            {
                overheatValue = 0;
                isOverHeat = false;
            }
        }

       UIManager.Instance.RefreshOverheadBar(overheatValue);
       //Debug.Log("overheatValue: " + overheatValue);
    }

    /// <summary>
    /// private function
    /// </summary>
    private void RotateToTarget()
    {
        if (aroundMeList.Count > 0)
        {
            closeTarget = GetMostClosedTarget();
            if(closeTarget != null)
            {
                transform.LookAt(new Vector3(closeTarget.transform.position.x, transform.position.y, closeTarget.transform.position.z));
            }
        }
    }

    private GameObject GetMostClosedTarget()
    {
        GameObject target = null;
        float minDis = float.MaxValue;
        float dis = 0f;

        for (int i = 0; i < aroundMeList.Count; i++)
        {
            dis = Vector3.Distance(transform.position, aroundMeList[i].target.transform.position);
            if (dis < minDis && aroundMeList[i].target.activeInHierarchy)
            {
                minDis = dis;
                target = aroundMeList[i].target;
            }
        }

        return target;
    }

    private void MoveingAndRotation()
    {
        horizontal = moveJoystick.Horizontal;
        vertical = moveJoystick.Vertical;

        Vector3 moveVector = (Vector3.right * vertical + Vector3.back * horizontal);
        Vector3 rotateVector = (Vector3.right * rotateJoystick.Vertical + Vector3.back * rotateJoystick.Horizontal);

        Vector3 moveDirection = new Vector3(vertical, 0, horizontal);
        Vector3 rotateDirection = new Vector3(rotateJoystick.Vertical, 0, rotateJoystick.Horizontal);

        float angle = Vector3.Angle(moveDirection, rotateDirection);

        // Move and Rotate
        if (moveVector != Vector3.zero)
        {
            if (rotateVector != Vector3.zero) //  drag move and rotate joystick
            {
                //transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.Euler(resultRotate), Time.deltaTime * rotateSpeed);

                if (angle <= 90f)
                {
                    transform.Translate(rotateVector * moveSpeed / 2f * Time.deltaTime, Space.World);
                }
                else
                {
                    transform.Translate(moveVector * moveSpeed / 2f * Time.deltaTime, Space.World);
                }

                Vector3 resultRotate = Quaternion.LookRotation(rotateVector).eulerAngles;
                resultRotate.y += rotateAngleFix + 15f;
                transform.rotation = Quaternion.Euler(resultRotate);
            }
            else // only drag move joystick
            {
                transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.LookRotation(moveVector), Time.deltaTime * rotateSpeed);
                transform.Translate(moveVector * moveSpeed * Time.deltaTime, Space.World);
            }
        }
        else
        {
            if (rotateVector != Vector3.zero)// only drag rotate joystick
            {
                Vector3 resultRotate = Quaternion.LookRotation(rotateVector).eulerAngles;
                resultRotate.y += rotateAngleFix;
                transform.rotation = Quaternion.Euler(resultRotate);
            }
        }
        // Speed
        float total = Mathf.InverseLerp(0, 1, Mathf.Abs(vertical) + Mathf.Abs(horizontal));

        if ((Mathf.Abs(rotateJoystick.Vertical) > 0 || Mathf.Abs(rotateJoystick.Horizontal) > 0) && angle > 90f)
            playerBehaviour.SetAnimatorSpeed(1.2f);
        else if (total == 0)
            playerBehaviour.SetAnimatorSpeed(1f);
        else
            playerBehaviour.SetAnimatorSpeed(total);

        if (vertical > 0f || Mathf.Abs(horizontal) > 0f)
            ChangeAnimation(angle, true, Mathf.Abs(rotateJoystick.Vertical) > 0f || Mathf.Abs(rotateJoystick.Horizontal) > 0f);
        else
            ChangeAnimation(angle, false);
    }

    private void ChangeAnimation(float angle, bool moving, bool firing = false)
    {
        // Animation
        if (moving)
        {
            if (firing)
            {
                if (angle <= 90f)
                    playerBehaviour.SetAnimation(PlayerBehaviour.AnimationState.WALK);
                else
                    playerBehaviour.SetAnimation(PlayerBehaviour.AnimationState.BACK);
            }
            else
            {
                if (angle <= 90f)
                    playerBehaviour.SetAnimation(PlayerBehaviour.AnimationState.RUN);
                else
                    playerBehaviour.SetAnimation(PlayerBehaviour.AnimationState.BACK);
            }
        }
        else
        {
            playerBehaviour.SetAnimation(PlayerBehaviour.AnimationState.IDLE);
        }
    }

    private void Shoot()
    {
        shootTimeCount += Time.deltaTime;

        if (shootTimeCount >= weaponManager.GetCurrentGun().fireSpeed)
        {
            AudioPlayer.Instance.PlayOneShot(weaponManager.GetCurrentGun().attackAudio);
            playerBehaviour.CrossFade(PlayerBehaviour.AnimationState.SHOOT, crossdurationTime);
            //playerBehaviour.CurrentAnimator().CrossFadeInFixedTime(PlayerBehaviour.AnimationState.SHOOT, transitionDuration);
            //playerBehaviour.SetAnimation(PlayerBehaviour.AnimationState.SHOOT);
            BulletSpawner.Instance.Spawn(weaponManager.GetCurrentBulletBownTrans().position, weaponManager.GetCurrentBulletBownTrans().rotation, this.gameObject);

            shootTimeCount = 0f;
        }
    }

    /// <summary>
    /// public function
    /// </summary>
    /// 
    public void SetAutoAttackState()
    {
        autoAttack = !autoAttack;
    }

    public void SetShootingStatus(bool status)
    {
        //Debug.Log("Click status: " + status);
        shooting = status;
    }
}
