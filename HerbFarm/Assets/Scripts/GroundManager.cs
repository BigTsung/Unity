using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GroundManager : MonoBehaviour {

	public Vector3 originPos;
	public Vector2 groundResolution;
	public GameObject groundPrefab;

	private float groundPrefabWidth;
	private float groundPrefabHeight;

	// Use this for initialization
	void Start () {

		groundPrefabWidth = groundPrefab.transform.GetChild (0).GetComponent<Renderer> ().bounds.size.x;
		groundPrefabHeight = groundPrefab.transform.GetChild (0).GetComponent<Renderer> ().bounds.size.y;

		for (int x = 0; x < groundResolution.x; x++) 
		{
			for(int z = 0; z < groundResolution.y; z++)
			{
				Vector3 pos = new Vector3();
				pos.x = originPos.x + groundPrefabWidth * x;
				pos.z =  originPos.z + groundPrefabWidth * z;
				Instantiate (groundPrefab, pos, Quaternion.identity);
			}
		}

	}

	// Update is called once per frame
	void Update () {
		
	}
}
