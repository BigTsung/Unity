using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class WeaponManager : MonoBehaviour {

    public Transform weaponAnchor;
    private List<GameObject> weapons = new List<GameObject>();
    private GameObject currentWeapon;

    void Start ()
    {
        for (int i = 0; i < weaponAnchor.childCount; i++)
        {
            AddWeapon(weaponAnchor.GetChild(i).gameObject);
        }
        SelectWeaponByIndex(0);
    }
    // ===========================================
    // public function ===========================
    // ===========================================
    public void AddWeapon(GameObject weapon)
    {
        if (weapon != null && weapons.Contains(weapon) == false)
        {
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
        currentWeapon = index < weapons.Count ? weapons[index] : null;
        Debug.Log(currentWeapon.name);
    }

}
