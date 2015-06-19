#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t15;
// UnityEngine.Camera
struct Camera_t103;
// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler>
struct List_1_t713;
// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler>
struct List_1_t714;
// System.Action`1<Vuforia.QCARUnity/InitError>
struct Action_1_t70;
// System.Action
struct Action_t90;
// System.Action`1<System.Boolean>
struct Action_1_t715;
// UnityEngine.Material
struct Material_t60;
// Vuforia.VideoBackgroundAbstractBehaviour[]
struct VideoBackgroundAbstractBehaviourU5BU5D_t716;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t717;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// Vuforia.CameraDevice/CameraDeviceMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera.h"
// Vuforia.CameraDevice/CameraDirection
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_Camera_0.h"
// Vuforia.QCARRenderer/VideoBackgroundReflection
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoB.h"
// Vuforia.QCARAbstractBehaviour/WorldCenterMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARAbstractBehavio_0.h"
// Vuforia.QCARUnity/InitError
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_InitError.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// Vuforia.QCARAbstractBehaviour
struct  QCARAbstractBehaviour_t38  : public MonoBehaviour_t10
{
	// System.String Vuforia.QCARAbstractBehaviour::VuforiaLicenseKey
	String_t* ___VuforiaLicenseKey_2;
	// System.Single Vuforia.QCARAbstractBehaviour::mCameraOffset
	float ___mCameraOffset_3;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mAutoAdjustStereoCameraSkewing
	bool ___mAutoAdjustStereoCameraSkewing_4;
	// System.Single Vuforia.QCARAbstractBehaviour::mSceneScaleFactor
	float ___mSceneScaleFactor_5;
	// Vuforia.CameraDevice/CameraDeviceMode Vuforia.QCARAbstractBehaviour::CameraDeviceModeSetting
	int32_t ___CameraDeviceModeSetting_6;
	// System.Int32 Vuforia.QCARAbstractBehaviour::MaxSimultaneousImageTargets
	int32_t ___MaxSimultaneousImageTargets_7;
	// System.Int32 Vuforia.QCARAbstractBehaviour::MaxSimultaneousObjectTargets
	int32_t ___MaxSimultaneousObjectTargets_8;
	// System.Boolean Vuforia.QCARAbstractBehaviour::UseDelayedLoadingObjectTargets
	bool ___UseDelayedLoadingObjectTargets_9;
	// Vuforia.CameraDevice/CameraDirection Vuforia.QCARAbstractBehaviour::CameraDirection
	int32_t ___CameraDirection_10;
	// Vuforia.QCARRenderer/VideoBackgroundReflection Vuforia.QCARAbstractBehaviour::MirrorVideoBackground
	int32_t ___MirrorVideoBackground_11;
	// Vuforia.QCARAbstractBehaviour/WorldCenterMode Vuforia.QCARAbstractBehaviour::mWorldCenterMode
	int32_t ___mWorldCenterMode_12;
	// Vuforia.TrackableBehaviour Vuforia.QCARAbstractBehaviour::mWorldCenter
	TrackableBehaviour_t15 * ___mWorldCenter_13;
	// UnityEngine.Camera Vuforia.QCARAbstractBehaviour::mPrimaryCamera
	Camera_t103 * ___mPrimaryCamera_14;
	// UnityEngine.Camera Vuforia.QCARAbstractBehaviour::mSecondaryCamera
	Camera_t103 * ___mSecondaryCamera_15;
	// System.Collections.Generic.List`1<Vuforia.ITrackerEventHandler> Vuforia.QCARAbstractBehaviour::mTrackerEventHandlers
	List_1_t713 * ___mTrackerEventHandlers_16;
	// System.Collections.Generic.List`1<Vuforia.IVideoBackgroundEventHandler> Vuforia.QCARAbstractBehaviour::mVideoBgEventHandlers
	List_1_t714 * ___mVideoBgEventHandlers_17;
	// System.Action`1<Vuforia.QCARUnity/InitError> Vuforia.QCARAbstractBehaviour::mOnQCARInitError
	Action_1_t70 * ___mOnQCARInitError_18;
	// System.Action Vuforia.QCARAbstractBehaviour::mOnQCARInitialized
	Action_t90 * ___mOnQCARInitialized_19;
	// System.Action Vuforia.QCARAbstractBehaviour::mOnQCARStarted
	Action_t90 * ___mOnQCARStarted_20;
	// System.Action Vuforia.QCARAbstractBehaviour::mOnTrackablesUpdated
	Action_t90 * ___mOnTrackablesUpdated_21;
	// System.Action Vuforia.QCARAbstractBehaviour::mRenderOnUpdate
	Action_t90 * ___mRenderOnUpdate_22;
	// System.Action`1<System.Boolean> Vuforia.QCARAbstractBehaviour::mOnPause
	Action_1_t715 * ___mOnPause_23;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mStartHasBeenInvoked
	bool ___mStartHasBeenInvoked_24;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mHasStarted
	bool ___mHasStarted_25;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mFailedToInitialize
	bool ___mFailedToInitialize_26;
	// Vuforia.QCARUnity/InitError Vuforia.QCARAbstractBehaviour::mInitError
	int32_t ___mInitError_27;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mIsStereoRendering
	bool ___mIsStereoRendering_28;
	// UnityEngine.Material Vuforia.QCARAbstractBehaviour::mClearMaterial
	Material_t60 * ___mClearMaterial_29;
	// UnityEngine.Rect Vuforia.QCARAbstractBehaviour::mViewportRect
	Rect_t71  ___mViewportRect_30;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mHasStartedOnce
	bool ___mHasStartedOnce_31;
	// UnityEngine.ScreenOrientation Vuforia.QCARAbstractBehaviour::mProjectionOrientation
	int32_t ___mProjectionOrientation_32;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mIsEyewear
	bool ___mIsEyewear_33;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mNeedToCheckStereo
	bool ___mNeedToCheckStereo_34;
	// UnityEngine.Camera Vuforia.QCARAbstractBehaviour::mLeftCamera
	Camera_t103 * ___mLeftCamera_35;
	// UnityEngine.Camera Vuforia.QCARAbstractBehaviour::mRightCamera
	Camera_t103 * ___mRightCamera_36;
	// System.Int32 Vuforia.QCARAbstractBehaviour::mViewPortWidth
	int32_t ___mViewPortWidth_37;
	// System.Int32 Vuforia.QCARAbstractBehaviour::mViewPortHeight
	int32_t ___mViewPortHeight_38;
	// Vuforia.VideoBackgroundAbstractBehaviour[] Vuforia.QCARAbstractBehaviour::mVideoBackgroundBehaviours
	VideoBackgroundAbstractBehaviourU5BU5D_t716* ___mVideoBackgroundBehaviours_39;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mWasEnabledBeforePause
	bool ___mWasEnabledBeforePause_40;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mObjectTrackerWasActiveBeforePause
	bool ___mObjectTrackerWasActiveBeforePause_41;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mObjectTrackerWasActiveBeforeDisabling
	bool ___mObjectTrackerWasActiveBeforeDisabling_42;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mMarkerTrackerWasActiveBeforePause
	bool ___mMarkerTrackerWasActiveBeforePause_43;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mMarkerTrackerWasActiveBeforeDisabling
	bool ___mMarkerTrackerWasActiveBeforeDisabling_44;
	// System.Boolean Vuforia.QCARAbstractBehaviour::mRenderVideoBackground
	bool ___mRenderVideoBackground_45;
	// System.Collections.Generic.List`1<System.Type> Vuforia.QCARAbstractBehaviour::mTrackersRequestedToDeinit
	List_1_t717 * ___mTrackersRequestedToDeinit_46;
};
