#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ReconstructionFromTargetImpl
struct ReconstructionFromTargetImpl_t548;
// Vuforia.CylinderTarget
struct CylinderTarget_t559;
// Vuforia.ImageTarget
struct ImageTarget_t700;
// Vuforia.MultiTarget
struct MultiTarget_t708;
// Vuforia.Trackable
struct Trackable_t532;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void Vuforia.ReconstructionFromTargetImpl::.ctor(System.IntPtr)
extern "C" void ReconstructionFromTargetImpl__ctor_m2525 (ReconstructionFromTargetImpl_t548 * __this, IntPtr_t ___nativeReconstructionPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m2526 (ReconstructionFromTargetImpl_t548 * __this, Object_t * ___cylinderTarget, Vector3_t110  ___occluderMin, Vector3_t110  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.CylinderTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m2527 (ReconstructionFromTargetImpl_t548 * __this, Object_t * ___cylinderTarget, Vector3_t110  ___occluderMin, Vector3_t110  ___occluderMax, Vector3_t110  ___offsetToOccluderOrigin, Quaternion_t113  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m2528 (ReconstructionFromTargetImpl_t548 * __this, Object_t * ___imageTarget, Vector3_t110  ___occluderMin, Vector3_t110  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.ImageTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m2529 (ReconstructionFromTargetImpl_t548 * __this, Object_t * ___imageTarget, Vector3_t110  ___occluderMin, Vector3_t110  ___occluderMax, Vector3_t110  ___offsetToOccluderOrigin, Quaternion_t113  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m2530 (ReconstructionFromTargetImpl_t548 * __this, Object_t * ___multiTarget, Vector3_t110  ___occluderMin, Vector3_t110  ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(Vuforia.MultiTarget,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m2531 (ReconstructionFromTargetImpl_t548 * __this, Object_t * ___multiTarget, Vector3_t110  ___occluderMin, Vector3_t110  ___occluderMax, Vector3_t110  ___offsetToOccluderOrigin, Quaternion_t113  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m2532 (ReconstructionFromTargetImpl_t548 * __this, Vector3_t110 * ___occluderMin, Vector3_t110 * ___occluderMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.ReconstructionFromTargetImpl::GetInitializationTarget(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
extern "C" Object_t * ReconstructionFromTargetImpl_GetInitializationTarget_m2533 (ReconstructionFromTargetImpl_t548 * __this, Vector3_t110 * ___occluderMin, Vector3_t110 * ___occluderMax, Vector3_t110 * ___offsetToOccluderOrigin, Quaternion_t113 * ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Reset()
extern "C" bool ReconstructionFromTargetImpl_Reset_m2534 (ReconstructionFromTargetImpl_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::Start()
extern "C" bool ReconstructionFromTargetImpl_Start_m2535 (ReconstructionFromTargetImpl_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::SetInitializationTarget(System.IntPtr,Vuforia.Trackable,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
extern "C" bool ReconstructionFromTargetImpl_SetInitializationTarget_m2536 (ReconstructionFromTargetImpl_t548 * __this, IntPtr_t ___datasetPtr, Object_t * ___trackable, Vector3_t110  ___occluderMin, Vector3_t110  ___occluderMax, Vector3_t110  ___offsetToOccluderOrigin, Quaternion_t113  ___rotationToOccluderOrigin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ReconstructionFromTargetImpl::get_CanAutoSetInitializationTarget()
extern "C" bool ReconstructionFromTargetImpl_get_CanAutoSetInitializationTarget_m2537 (ReconstructionFromTargetImpl_t548 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ReconstructionFromTargetImpl::set_CanAutoSetInitializationTarget(System.Boolean)
extern "C" void ReconstructionFromTargetImpl_set_CanAutoSetInitializationTarget_m2538 (ReconstructionFromTargetImpl_t548 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
