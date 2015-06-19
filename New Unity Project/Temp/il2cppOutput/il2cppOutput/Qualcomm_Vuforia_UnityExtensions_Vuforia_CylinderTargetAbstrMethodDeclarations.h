#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t6;
// Vuforia.CylinderTarget
struct CylinderTarget_t559;
// Vuforia.ReconstructionFromTarget
struct ReconstructionFromTarget_t549;
// UnityEngine.Transform
struct Transform_t102;
// UnityEngine.GameObject
struct GameObject_t68;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.CylinderTarget Vuforia.CylinderTargetAbstractBehaviour::get_CylinderTarget()
extern "C" Object_t * CylinderTargetAbstractBehaviour_get_CylinderTarget_m2578 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_SideLength()
extern "C" float CylinderTargetAbstractBehaviour_get_SideLength_m2579 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_TopDiameter()
extern "C" float CylinderTargetAbstractBehaviour_get_TopDiameter_m2580 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::get_BottomDiameter()
extern "C" float CylinderTargetAbstractBehaviour_get_BottomDiameter_m2581 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetSideLength(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetSideLength_m2582 (CylinderTargetAbstractBehaviour_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetTopDiameter(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetTopDiameter_m2583 (CylinderTargetAbstractBehaviour_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetBottomDiameter(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetBottomDiameter_m2584 (CylinderTargetAbstractBehaviour_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C" void CylinderTargetAbstractBehaviour_OnFrameIndexUpdate_m271 (CylinderTargetAbstractBehaviour_t6 * __this, int32_t ___newFrameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::CorrectScaleImpl()
extern "C" bool CylinderTargetAbstractBehaviour_CorrectScaleImpl_m273 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void CylinderTargetAbstractBehaviour_InternalUnregisterTrackable_m272 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::CalculateDefaultOccluderBounds(UnityEngine.Vector3&,UnityEngine.Vector3&)
extern "C" void CylinderTargetAbstractBehaviour_CalculateDefaultOccluderBounds_m299 (CylinderTargetAbstractBehaviour_t6 * __this, Vector3_t110 * ___boundsMin, Vector3_t110 * ___boundsMax, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ProtectedSetAsSmartTerrainInitializationTarget(Vuforia.ReconstructionFromTarget)
extern "C" void CylinderTargetAbstractBehaviour_ProtectedSetAsSmartTerrainInitializationTarget_m300 (CylinderTargetAbstractBehaviour_t6 * __this, Object_t * ___reconstructionFromTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.CylinderTargetAbstractBehaviour::GetScale()
extern "C" float CylinderTargetAbstractBehaviour_GetScale_m2585 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::SetScale(System.Single)
extern "C" bool CylinderTargetAbstractBehaviour_SetScale_m2586 (CylinderTargetAbstractBehaviour_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::ApplyScale(System.Single)
extern "C" void CylinderTargetAbstractBehaviour_ApplyScale_m2587 (CylinderTargetAbstractBehaviour_t6 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.InitializeCylinderTarget(Vuforia.CylinderTarget)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_InitializeCylinderTarget_m301 (CylinderTargetAbstractBehaviour_t6 * __this, Object_t * ___cylinderTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorCylinderTargetBehaviour.SetAspectRatio(System.Single,System.Single)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorCylinderTargetBehaviour_SetAspectRatio_m302 (CylinderTargetAbstractBehaviour_t6 * __this, float ___topRatio, float ___bottomRatio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::.ctor()
extern "C" void CylinderTargetAbstractBehaviour__ctor_m108 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m265 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m266 (CylinderTargetAbstractBehaviour_t6 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t102 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m267 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.CylinderTargetAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t68 * CylinderTargetAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m268 (CylinderTargetAbstractBehaviour_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
