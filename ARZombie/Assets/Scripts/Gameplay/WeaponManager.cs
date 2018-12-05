using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponManager : MonoBehaviour {

    public Transform weaponAnchor;
    private List<GameObject> weapons = new List<GameObject>();
    private GameObject currentWeapon;
    private int currenWeaponIndex;

    void Start ()
    {
        for (int i = 0; i < weaponAnchor.childCount; i++)
        {
            AddWeapon(weaponAnchor.GetChild(i).gameObject);
        }
        SelectWeaponByIndex(0);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Weapon")
        {
            GameObject weapon = other.gameObject;
            
            AddWeapon(weapon);
            SelectWeaponByIndex(weapons.Count - 1);
        }
    }

    // ===========================================
    // public function ===========================
    // ===========================================
    public void AddWeapon(GameObject weapon)
    {
        if (weapon != null && weapons.Exists( x => x.name == weapon.name) == false)
        {
            weapon.transform.parent = weaponAnchor;

            weapon.GetComponent<Collider>().enabled = false;
            weapon.GetComponent<AutoRotate>().enabled = false;

            weapon.transform.localPosition = Vector3.zero;
            weapon.transform.localEulerAngles = Vector3.zero;
            weapon.transform.localScale = Vector3.one;
            weapons.Add(weapon);
        }
    }

    // ===========================================
    // private function ==========================
    // ===========================================
    private void SelectWeaponByIndex(int index)
    {
        //currentWeapon.SetActive(false);
        //weapons[currenWeaponIndex].SetActive(false);
        if (currentWeapon != null)
            currentWeapon.SetActive(false);

        currentWeapon = index < weapons.Count ? weapons[index] : null;
        if (currentWeapon != null)
        {
            currenWeaponIndex = index;
            currentWeapon.SetActive(true);
        }

        //weapons[index].SetActive(false);
        //currentWeapon.SetActive(true);
        Debug.Log(currentWeapon.name);
    }

}
