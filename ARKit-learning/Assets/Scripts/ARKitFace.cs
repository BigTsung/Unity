using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

[RequireComponent(typeof(MeshFilter))]
[RequireComponent(typeof(MeshRenderer))]
public class ARKitFace : MonoBehaviour
{
    [SerializeField] private GameObject anchorPrefab;

    [SerializeField] private ARKitSetting arkitSetting;

    [SerializeField] private bool drawFaceMesh = false;

    private MeshFilter meshFilter;
    private Mesh faceMesh;

    private void Awake()
    {
        if(drawFaceMesh)
        {
            meshFilter = GetComponent<MeshFilter>();
        }
    }

    private void Start()
    {
        arkitSetting.onSessionIsReady += OnARKitIsReady;
    }

    private void OnARKitIsReady()
    {
        Debug.Log("ARkit is ready!");

        UnityARSessionNativeInterface.ARFaceAnchorAddedEvent += FaceAdded;
        UnityARSessionNativeInterface.ARFaceAnchorUpdatedEvent += FaceUpdated;
        UnityARSessionNativeInterface.ARFaceAnchorRemovedEvent += FaceRemoved;
    }

    private void FaceAdded(ARFaceAnchor anchorData)
    {
        anchorPrefab.transform.position = UnityARMatrixOps.GetPosition(anchorData.transform);
        anchorPrefab.transform.rotation = UnityARMatrixOps.GetRotation(anchorData.transform);

        if(drawFaceMesh)
        {
            faceMesh = new Mesh();
            faceMesh.vertices = anchorData.faceGeometry.vertices;
            faceMesh.uv = anchorData.faceGeometry.textureCoordinates;
            faceMesh.triangles = anchorData.faceGeometry.triangleIndices;

            // Assign the mesh object and update it.
            faceMesh.RecalculateBounds();
            faceMesh.RecalculateNormals();
            meshFilter.mesh = faceMesh;
        }

        anchorPrefab.SetActive(true);
        Debug.Log("FaceAdded");
    }

    private void FaceUpdated(ARFaceAnchor anchorData)
    {
        if (anchorPrefab.activeSelf != anchorData.isTracked)
        {
            anchorPrefab.SetActive(anchorData.isTracked);
        }

        if (anchorData.isTracked)
        {
            anchorPrefab.transform.position = UnityARMatrixOps.GetPosition(anchorData.transform);
            anchorPrefab.transform.rotation = UnityARMatrixOps.GetRotation(anchorData.transform);
        }

        if(faceMesh != null && drawFaceMesh)
        {
            gameObject.transform.localPosition = UnityARMatrixOps.GetPosition(anchorData.transform);
            gameObject.transform.localRotation = UnityARMatrixOps.GetRotation(anchorData.transform);

            faceMesh.vertices = anchorData.faceGeometry.vertices;
            faceMesh.uv = anchorData.faceGeometry.textureCoordinates;
            faceMesh.triangles = anchorData.faceGeometry.triangleIndices;
            faceMesh.RecalculateBounds();
            faceMesh.RecalculateNormals();
        }
    }

    private void FaceRemoved(ARFaceAnchor anchorData)
    {
        Debug.Log("FaceRemoved");
        anchorPrefab.SetActive(false);

        if(drawFaceMesh)
        {
            meshFilter.mesh = null;
            faceMesh = null;
        }
    }
}
