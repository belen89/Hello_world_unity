#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARManagerImpl
struct QCARManagerImpl_t628;
// Vuforia.WorldCenterTrackableBehaviour
struct WorldCenterTrackableBehaviour_t122;
// UnityEngine.Transform
struct Transform_t102;
// Vuforia.StateManagerImpl
struct StateManagerImpl_t685;
// Vuforia.QCARAbstractBehaviour/WorldCenterMode
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARAbstractBehavio_0.h"
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// Vuforia.QCARManagerImpl/FrameState
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Fra.h"

// System.Void Vuforia.QCARManagerImpl::set_WorldCenterMode(Vuforia.QCARAbstractBehaviour/WorldCenterMode)
extern "C" void QCARManagerImpl_set_WorldCenterMode_m2787 (QCARManagerImpl_t628 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARAbstractBehaviour/WorldCenterMode Vuforia.QCARManagerImpl::get_WorldCenterMode()
extern "C" int32_t QCARManagerImpl_get_WorldCenterMode_m2788 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::set_WorldCenter(Vuforia.WorldCenterTrackableBehaviour)
extern "C" void QCARManagerImpl_set_WorldCenter_m2789 (QCARManagerImpl_t628 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WorldCenterTrackableBehaviour Vuforia.QCARManagerImpl::get_WorldCenter()
extern "C" Object_t * QCARManagerImpl_get_WorldCenter_m2790 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::set_ARCameraTransform(UnityEngine.Transform)
extern "C" void QCARManagerImpl_set_ARCameraTransform_m2791 (QCARManagerImpl_t628 * __this, Transform_t102 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.QCARManagerImpl::get_ARCameraTransform()
extern "C" Transform_t102 * QCARManagerImpl_get_ARCameraTransform_m2792 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARManagerImpl::get_Initialized()
extern "C" bool QCARManagerImpl_get_Initialized_m2793 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARManagerImpl::get_QCARFrameIndex()
extern "C" int32_t QCARManagerImpl_get_QCARFrameIndex_m2794 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::set_VideoBackgroundTextureSet(System.Boolean)
extern "C" void QCARManagerImpl_set_VideoBackgroundTextureSet_m2795 (QCARManagerImpl_t628 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARManagerImpl::get_VideoBackgroundTextureSet()
extern "C" bool QCARManagerImpl_get_VideoBackgroundTextureSet_m2796 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARManagerImpl::Init()
extern "C" bool QCARManagerImpl_Init_m2797 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::Deinit()
extern "C" void QCARManagerImpl_Deinit_m2798 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARManagerImpl::Update(UnityEngine.ScreenOrientation)
extern "C" bool QCARManagerImpl_Update_m2799 (QCARManagerImpl_t628 * __this, int32_t ___counterRotation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::StartRendering()
extern "C" void QCARManagerImpl_StartRendering_m2800 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::FinishRendering()
extern "C" void QCARManagerImpl_FinishRendering_m2801 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::Pause(System.Boolean)
extern "C" void QCARManagerImpl_Pause_m2802 (QCARManagerImpl_t628 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::SetStatesToDiscard()
extern "C" void QCARManagerImpl_SetStatesToDiscard_m2803 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::InitializeTrackableContainer(System.Int32)
extern "C" void QCARManagerImpl_InitializeTrackableContainer_m2804 (QCARManagerImpl_t628 * __this, int32_t ___numTrackableResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateTrackers(Vuforia.QCARManagerImpl/FrameState)
extern "C" void QCARManagerImpl_UpdateTrackers_m2805 (QCARManagerImpl_t628 * __this, FrameState_t621  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateSmartTerrain(Vuforia.QCARManagerImpl/FrameState,Vuforia.StateManagerImpl)
extern "C" void QCARManagerImpl_UpdateSmartTerrain_m2806 (QCARManagerImpl_t628 * __this, FrameState_t621  ___frameState, StateManagerImpl_t685 * ___stateManager, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateTrackablesEditor()
extern "C" void QCARManagerImpl_UpdateTrackablesEditor_m2807 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateWordTrackables(Vuforia.QCARManagerImpl/FrameState)
extern "C" void QCARManagerImpl_UpdateWordTrackables_m2808 (QCARManagerImpl_t628 * __this, FrameState_t621  ___frameState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateImageContainer()
extern "C" void QCARManagerImpl_UpdateImageContainer_m2809 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::UpdateCameraFrame()
extern "C" void QCARManagerImpl_UpdateCameraFrame_m2810 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::InjectCameraFrame()
extern "C" void QCARManagerImpl_InjectCameraFrame_m2811 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARManagerImpl::.ctor()
extern "C" void QCARManagerImpl__ctor_m2812 (QCARManagerImpl_t628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
