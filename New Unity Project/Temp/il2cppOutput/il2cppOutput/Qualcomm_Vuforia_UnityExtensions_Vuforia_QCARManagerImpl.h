#pragma once
#include <stdint.h>
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t122;
// UnityEngine.Transform
struct Transform_t102;
// Vuforia.QCARManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t624;
// Vuforia.QCARManagerImpl/WordData[]
struct WordDataU5BU5D_t625;
// Vuforia.QCARManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t626;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t627;
// Vuforia.QCARManager
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManager.h"
// Vuforia.QCARAbstractBehaviour/WorldCenterMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARAbstractBehavio_0.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// Vuforia.QCARManagerImpl/FrameState
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Fra.h"
// Vuforia.QCARManagerImpl/AutoRotationState
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Aut.h"
// Vuforia.QCARManagerImpl
struct  QCARManagerImpl_t628  : public QCARManager_t111
{
	// Vuforia.QCARAbstractBehaviour/WorldCenterMode Vuforia.QCARManagerImpl::mWorldCenterMode
	int32_t ___mWorldCenterMode_1;
	// Vuforia.WorldCenterTrackableBehaviour Vuforia.QCARManagerImpl::mWorldCenter
	Object_t * ___mWorldCenter_2;
	// UnityEngine.Transform Vuforia.QCARManagerImpl::mARCameraTransform
	Transform_t102 * ___mARCameraTransform_3;
	// Vuforia.QCARManagerImpl/TrackableResultData[] Vuforia.QCARManagerImpl::mTrackableResultDataArray
	TrackableResultDataU5BU5D_t624* ___mTrackableResultDataArray_4;
	// Vuforia.QCARManagerImpl/WordData[] Vuforia.QCARManagerImpl::mWordDataArray
	WordDataU5BU5D_t625* ___mWordDataArray_5;
	// Vuforia.QCARManagerImpl/WordResultData[] Vuforia.QCARManagerImpl::mWordResultDataArray
	WordResultDataU5BU5D_t626* ___mWordResultDataArray_6;
	// System.Collections.Generic.LinkedList`1<System.Int32> Vuforia.QCARManagerImpl::mTrackableFoundQueue
	LinkedList_1_t627 * ___mTrackableFoundQueue_7;
	// System.IntPtr Vuforia.QCARManagerImpl::mImageHeaderData
	IntPtr_t ___mImageHeaderData_8;
	// System.Int32 Vuforia.QCARManagerImpl::mNumImageHeaders
	int32_t ___mNumImageHeaders_9;
	// System.Int32 Vuforia.QCARManagerImpl::mInjectedFrameIdx
	int32_t ___mInjectedFrameIdx_10;
	// System.IntPtr Vuforia.QCARManagerImpl::mLastProcessedFrameStatePtr
	IntPtr_t ___mLastProcessedFrameStatePtr_11;
	// System.Boolean Vuforia.QCARManagerImpl::mInitialized
	bool ___mInitialized_12;
	// System.Boolean Vuforia.QCARManagerImpl::mPaused
	bool ___mPaused_13;
	// Vuforia.QCARManagerImpl/FrameState Vuforia.QCARManagerImpl::mFrameState
	FrameState_t621  ___mFrameState_14;
	// Vuforia.QCARManagerImpl/AutoRotationState Vuforia.QCARManagerImpl::mAutoRotationState
	AutoRotationState_t622  ___mAutoRotationState_15;
	// System.Boolean Vuforia.QCARManagerImpl::mVideoBackgroundNeedsRedrawing
	bool ___mVideoBackgroundNeedsRedrawing_16;
	// System.Int32 Vuforia.QCARManagerImpl::mDiscardStatesForRendering
	int32_t ___mDiscardStatesForRendering_17;
	// System.Boolean Vuforia.QCARManagerImpl::<VideoBackgroundTextureSet>k__BackingField
	bool ___U3CVideoBackgroundTextureSetU3Ek__BackingField_18;
};
