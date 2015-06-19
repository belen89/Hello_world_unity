#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARAbstractBehaviour
struct QCARAbstractBehaviour_t38;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t15;
// UnityEngine.Camera
struct Camera_t103;
// System.String
struct String_t;
// System.Action`1<Vuforia.QCARUnity/InitError>
struct Action_1_t70;
// System.Action
struct Action_t90;
// System.Action`1<System.Boolean>
struct Action_1_t715;
// Vuforia.ITrackerEventHandler
struct ITrackerEventHandler_t756;
// Vuforia.IVideoBackgroundEventHandler
struct IVideoBackgroundEventHandler_t118;
// UnityEngine.GameObject
struct GameObject_t68;
// Vuforia.IUnityPlayer
struct IUnityPlayer_t130;
// Vuforia.QCARAbstractBehaviour/WorldCenterMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARAbstractBehavio_0.h"
// Vuforia.CameraDevice/CameraDeviceMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"
// Vuforia.CameraDevice/CameraDirection
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"
// Vuforia.QCARRenderer/VideoBackgroundReflection
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoB.h"

// System.Boolean Vuforia.QCARAbstractBehaviour::get_AutoAdjustStereoCameraSkewing()
extern "C" bool QCARAbstractBehaviour_get_AutoAdjustStereoCameraSkewing_m3899 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARAbstractBehaviour::get_SceneScaleFactor()
extern "C" float QCARAbstractBehaviour_get_SceneScaleFactor_m3900 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::set_SceneScaleFactor(System.Single)
extern "C" void QCARAbstractBehaviour_set_SceneScaleFactor_m3901 (QCARAbstractBehaviour_t38 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARAbstractBehaviour::get_CameraOffset()
extern "C" float QCARAbstractBehaviour_get_CameraOffset_m3902 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::set_CameraOffset(System.Single)
extern "C" void QCARAbstractBehaviour_set_CameraOffset_m3903 (QCARAbstractBehaviour_t38 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARAbstractBehaviour/WorldCenterMode Vuforia.QCARAbstractBehaviour::get_WorldCenterModeSetting()
extern "C" int32_t QCARAbstractBehaviour_get_WorldCenterModeSetting_m3904 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TrackableBehaviour Vuforia.QCARAbstractBehaviour::get_WorldCenter()
extern "C" TrackableBehaviour_t15 * QCARAbstractBehaviour_get_WorldCenter_m3905 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::get_VideoBackGroundMirrored()
extern "C" bool QCARAbstractBehaviour_get_VideoBackGroundMirrored_m3906 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::set_VideoBackGroundMirrored(System.Boolean)
extern "C" void QCARAbstractBehaviour_set_VideoBackGroundMirrored_m3907 (QCARAbstractBehaviour_t38 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDeviceMode Vuforia.QCARAbstractBehaviour::get_CameraDeviceMode()
extern "C" int32_t QCARAbstractBehaviour_get_CameraDeviceMode_m3908 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::get_HasStarted()
extern "C" bool QCARAbstractBehaviour_get_HasStarted_m3909 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::get_IsStereoRendering()
extern "C" bool QCARAbstractBehaviour_get_IsStereoRendering_m3910 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.QCARAbstractBehaviour::get_PrimaryCamera()
extern "C" Camera_t103 * QCARAbstractBehaviour_get_PrimaryCamera_m3911 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::set_PrimaryCamera(UnityEngine.Camera)
extern "C" void QCARAbstractBehaviour_set_PrimaryCamera_m3912 (QCARAbstractBehaviour_t38 * __this, Camera_t103 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera Vuforia.QCARAbstractBehaviour::get_SecondaryCamera()
extern "C" Camera_t103 * QCARAbstractBehaviour_get_SecondaryCamera_m3913 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::set_SecondaryCamera(UnityEngine.Camera)
extern "C" void QCARAbstractBehaviour_set_SecondaryCamera_m3914 (QCARAbstractBehaviour_t38 * __this, Camera_t103 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.QCARAbstractBehaviour::get_AppLicenseKey()
extern "C" String_t* QCARAbstractBehaviour_get_AppLicenseKey_m3915 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetAutoAdjustStereoCameraSkewing(System.Boolean)
extern "C" void QCARAbstractBehaviour_SetAutoAdjustStereoCameraSkewing_m3916 (QCARAbstractBehaviour_t38 * __this, bool ___setSkewing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetSceneScaleFactor(System.Single)
extern "C" void QCARAbstractBehaviour_SetSceneScaleFactor_m3917 (QCARAbstractBehaviour_t38 * __this, float ___Scale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterQCARInitErrorCallback(System.Action`1<Vuforia.QCARUnity/InitError>)
extern "C" void QCARAbstractBehaviour_RegisterQCARInitErrorCallback_m115 (QCARAbstractBehaviour_t38 * __this, Action_1_t70 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UnregisterQCARInitErrorCallback(System.Action`1<Vuforia.QCARUnity/InitError>)
extern "C" void QCARAbstractBehaviour_UnregisterQCARInitErrorCallback_m121 (QCARAbstractBehaviour_t38 * __this, Action_1_t70 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterQCARInitializedCallback(System.Action)
extern "C" void QCARAbstractBehaviour_RegisterQCARInitializedCallback_m3918 (QCARAbstractBehaviour_t38 * __this, Action_t90 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UnregisterQCARInitializedCallback(System.Action)
extern "C" void QCARAbstractBehaviour_UnregisterQCARInitializedCallback_m3919 (QCARAbstractBehaviour_t38 * __this, Action_t90 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterQCARStartedCallback(System.Action)
extern "C" void QCARAbstractBehaviour_RegisterQCARStartedCallback_m3920 (QCARAbstractBehaviour_t38 * __this, Action_t90 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UnregisterQCARStartedCallback(System.Action)
extern "C" void QCARAbstractBehaviour_UnregisterQCARStartedCallback_m3921 (QCARAbstractBehaviour_t38 * __this, Action_t90 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterTrackablesUpdatedCallback(System.Action)
extern "C" void QCARAbstractBehaviour_RegisterTrackablesUpdatedCallback_m3922 (QCARAbstractBehaviour_t38 * __this, Action_t90 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UnregisterTrackablesUpdatedCallback(System.Action)
extern "C" void QCARAbstractBehaviour_UnregisterTrackablesUpdatedCallback_m3923 (QCARAbstractBehaviour_t38 * __this, Action_t90 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C" void QCARAbstractBehaviour_RegisterOnPauseCallback_m3924 (QCARAbstractBehaviour_t38 * __this, Action_1_t715 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UnregisterOnPauseCallback(System.Action`1<System.Boolean>)
extern "C" void QCARAbstractBehaviour_UnregisterOnPauseCallback_m3925 (QCARAbstractBehaviour_t38 * __this, Action_1_t715 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetEditorValues(System.Single)
extern "C" void QCARAbstractBehaviour_SetEditorValues_m3926 (QCARAbstractBehaviour_t38 * __this, float ___Offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C" void QCARAbstractBehaviour_RegisterTrackerEventHandler_m3927 (QCARAbstractBehaviour_t38 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::UnregisterTrackerEventHandler(Vuforia.ITrackerEventHandler)
extern "C" bool QCARAbstractBehaviour_UnregisterTrackerEventHandler_m3928 (QCARAbstractBehaviour_t38 * __this, Object_t * ___trackerEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C" void QCARAbstractBehaviour_RegisterVideoBgEventHandler_m3929 (QCARAbstractBehaviour_t38 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::UnregisterVideoBgEventHandler(Vuforia.IVideoBackgroundEventHandler)
extern "C" bool QCARAbstractBehaviour_UnregisterVideoBgEventHandler_m3930 (QCARAbstractBehaviour_t38 * __this, Object_t * ___videoBgEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetWorldCenterMode(Vuforia.QCARAbstractBehaviour/WorldCenterMode)
extern "C" void QCARAbstractBehaviour_SetWorldCenterMode_m3931 (QCARAbstractBehaviour_t38 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetWorldCenter(Vuforia.TrackableBehaviour)
extern "C" void QCARAbstractBehaviour_SetWorldCenter_m3932 (QCARAbstractBehaviour_t38 * __this, TrackableBehaviour_t15 * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetAppLicenseKey(System.String)
extern "C" void QCARAbstractBehaviour_SetAppLicenseKey_m3933 (QCARAbstractBehaviour_t38 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.QCARAbstractBehaviour::GetViewportRectangle()
extern "C" Rect_t71  QCARAbstractBehaviour_GetViewportRectangle_m3934 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.QCARAbstractBehaviour::GetSurfaceOrientation()
extern "C" int32_t QCARAbstractBehaviour_GetSurfaceOrientation_m3935 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::ConfigureVideoBackground(System.Boolean)
extern "C" void QCARAbstractBehaviour_ConfigureVideoBackground_m3936 (QCARAbstractBehaviour_t38 * __this, bool ___forceReflectionSetting, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::ResetBackgroundPlane(System.Boolean)
extern "C" void QCARAbstractBehaviour_ResetBackgroundPlane_m3937 (QCARAbstractBehaviour_t38 * __this, bool ___disable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::RegisterRenderOnUpdateCallback(System.Action)
extern "C" void QCARAbstractBehaviour_RegisterRenderOnUpdateCallback_m3938 (QCARAbstractBehaviour_t38 * __this, Action_t90 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UnregisterRenderOnUpdateCallback(System.Action)
extern "C" void QCARAbstractBehaviour_UnregisterRenderOnUpdateCallback_m3939 (QCARAbstractBehaviour_t38 * __this, Action_t90 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::ConfigureView()
extern "C" void QCARAbstractBehaviour_ConfigureView_m3940 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::EnableObjectRenderer(UnityEngine.GameObject,System.Boolean)
extern "C" void QCARAbstractBehaviour_EnableObjectRenderer_m3941 (QCARAbstractBehaviour_t38 * __this, GameObject_t68 * ___go, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Start()
extern "C" void QCARAbstractBehaviour_Start_m3942 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::OnEnable()
extern "C" void QCARAbstractBehaviour_OnEnable_m3943 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UpdateView()
extern "C" void QCARAbstractBehaviour_UpdateView_m3944 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Update()
extern "C" void QCARAbstractBehaviour_Update_m3945 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::OnApplicationPause(System.Boolean)
extern "C" void QCARAbstractBehaviour_OnApplicationPause_m3946 (QCARAbstractBehaviour_t38 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::OnDisable()
extern "C" void QCARAbstractBehaviour_OnDisable_m3947 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::OnDestroy()
extern "C" void QCARAbstractBehaviour_OnDestroy_m3948 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::SetUnityPlayerImplementation(Vuforia.IUnityPlayer)
extern "C" void QCARAbstractBehaviour_SetUnityPlayerImplementation_m193 (QCARAbstractBehaviour_t38 * __this, Object_t * ___implementation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::StartQCAR(System.Boolean,System.Boolean)
extern "C" bool QCARAbstractBehaviour_StartQCAR_m3949 (QCARAbstractBehaviour_t38 * __this, bool ___startObjectTracker, bool ___startMarkerTracker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::StopQCAR()
extern "C" bool QCARAbstractBehaviour_StopQCAR_m3950 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UpdateStereoDepth()
extern "C" void QCARAbstractBehaviour_UpdateStereoDepth_m3951 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::ProjectionMatricesUpdated()
extern "C" void QCARAbstractBehaviour_ProjectionMatricesUpdated_m3952 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::ApplyMatrix(UnityEngine.Camera,UnityEngine.Matrix4x4)
extern "C" void QCARAbstractBehaviour_ApplyMatrix_m3953 (QCARAbstractBehaviour_t38 * __this, Camera_t103 * ___cam, Matrix4x4_t112  ___inputMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::UpdateProjection(UnityEngine.ScreenOrientation)
extern "C" void QCARAbstractBehaviour_UpdateProjection_m3954 (QCARAbstractBehaviour_t38 * __this, int32_t ___orientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::DeinitRequestedTrackers()
extern "C" void QCARAbstractBehaviour_DeinitRequestedTrackers_m3955 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::CheckSceneScaleFactor()
extern "C" void QCARAbstractBehaviour_CheckSceneScaleFactor_m3956 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::CheckForSurfaceChanges()
extern "C" void QCARAbstractBehaviour_CheckForSurfaceChanges_m3957 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.SetCameraDeviceMode(Vuforia.CameraDevice/CameraDeviceMode)
extern "C" void QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_SetCameraDeviceMode_m380 (QCARAbstractBehaviour_t38 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.GetMaximumSimultaneousImageTargets()
extern "C" int32_t QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_GetMaximumSimultaneousImageTargets_m381 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.SetMaximumSimultaneousImageTargets(System.Int32)
extern "C" void QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_SetMaximumSimultaneousImageTargets_m382 (QCARAbstractBehaviour_t38 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.GetMaximumSimultaneousObjectTargets()
extern "C" int32_t QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_GetMaximumSimultaneousObjectTargets_m383 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.SetMaximumSimultaneousObjectTargets(System.Int32)
extern "C" void QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_SetMaximumSimultaneousObjectTargets_m384 (QCARAbstractBehaviour_t38 * __this, int32_t ___max, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.GetDelayedLoadingObjectTargets()
extern "C" bool QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_GetDelayedLoadingObjectTargets_m385 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.SetUseDelayedLoadingObjectTargets(System.Boolean)
extern "C" void QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_SetUseDelayedLoadingObjectTargets_m386 (QCARAbstractBehaviour_t38 * __this, bool ___useDelayedLoading, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/CameraDirection Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.GetCameraDirection()
extern "C" int32_t QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_GetCameraDirection_m387 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.SetCameraDirection(Vuforia.CameraDevice/CameraDirection)
extern "C" void QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_SetCameraDirection_m388 (QCARAbstractBehaviour_t38 * __this, int32_t ___cameraDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRenderer/VideoBackgroundReflection Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.GetMirrorVideoBackground()
extern "C" int32_t QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_GetMirrorVideoBackground_m389 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::Vuforia.IEditorQCARBehaviour.SetMirrorVideoBackground(Vuforia.QCARRenderer/VideoBackgroundReflection)
extern "C" void QCARAbstractBehaviour_Vuforia_IEditorQCARBehaviour_SetMirrorVideoBackground_m390 (QCARAbstractBehaviour_t38 * __this, int32_t ___reflection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARAbstractBehaviour::.ctor()
extern "C" void QCARAbstractBehaviour__ctor_m188 (QCARAbstractBehaviour_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
