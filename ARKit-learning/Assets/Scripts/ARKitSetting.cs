using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.iOS;

public class ARKitSetting : MonoBehaviour
{
    [System.Serializable]
    public enum ConfigurationType
    {
        FaceTracking,
        WorldTracking,
        ObjectScanning
    }

    [SerializeField] private ConfigurationType defaultConfiguration;

    private UnityARSessionNativeInterface m_session;

    private bool m_currentARkitStatus = false;

    public delegate void OnSessionIsReady();

    public OnSessionIsReady onSessionIsReady;


    private void Start()
    {
        m_session = UnityARSessionNativeInterface.GetARSessionNativeInterface();

        RunSpecificConfiguration(defaultConfiguration);
    }

    public bool ARkitStats
    {
        get {
            return m_currentARkitStatus;
        }
    }

    public void RunSpecificConfigurationByIndex(int ind)
    {
        PauseARkit();
        RunSpecificConfiguration((ConfigurationType)ind);
    }

    public void RunSpecificConfiguration(ConfigurationType type)
    { 
        switch(type)
        {
            case ConfigurationType.FaceTracking:
                ARKitFaceTrackingConfiguration faceTrackingConfig = new ARKitFaceTrackingConfiguration();
                RunARkit(faceTrackingConfig);
                break;
            case ConfigurationType.ObjectScanning:
                ARKitObjectScanningSessionConfiguration objectScanningConfig = new ARKitObjectScanningSessionConfiguration();
                RunARkit(objectScanningConfig);
                break;
            case ConfigurationType.WorldTracking:
                ARKitWorldTrackingSessionConfiguration worldTrackingConfig = new ARKitWorldTrackingSessionConfiguration();
                RunARkit(worldTrackingConfig);
                break;
            default:
                Debug.Log("your config type is wrong!");
                break;
        }
    }

    public void PauseARkit()
    {
        if (m_currentARkitStatus == true && m_session != null)
        {
            m_session.Pause();
            m_currentARkitStatus = false;
        }
    }

    private void RunARkit(ARKitFaceTrackingConfiguration configuration)
    {
        if (configuration.IsSupported && m_currentARkitStatus == false)
        {
            onSessionIsReady?.Invoke();

            m_session.RunWithConfig(configuration);
            m_currentARkitStatus = true;
        }
    }

    private void RunARkit(ARKitWorldTrackingSessionConfiguration configuration)
    {
        if (configuration.IsSupported && m_currentARkitStatus == false)
        {
            onSessionIsReady?.Invoke();

            m_session.RunWithConfig(configuration);
            m_currentARkitStatus = true;
        }
    }

    private void RunARkit(ARKitObjectScanningSessionConfiguration configuration)
    {
        if (configuration.IsSupported && m_currentARkitStatus == false)
        {
            onSessionIsReady?.Invoke();

            m_session.RunWithConfig(configuration);
            m_currentARkitStatus = true;
        }
    }
}
