#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t29;
// Vuforia.Marker
struct Marker_t707;
// UnityEngine.Transform
struct Transform_t102;
// UnityEngine.GameObject
struct GameObject_t68;

// Vuforia.Marker Vuforia.MarkerAbstractBehaviour::get_Marker()
extern "C" Object_t * MarkerAbstractBehaviour_get_Marker_m3892 (MarkerAbstractBehaviour_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerAbstractBehaviour::.ctor()
extern "C" void MarkerAbstractBehaviour__ctor_m177 (MarkerAbstractBehaviour_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerAbstractBehaviour::InternalUnregisterTrackable()
extern "C" void MarkerAbstractBehaviour_InternalUnregisterTrackable_m331 (MarkerAbstractBehaviour_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerAbstractBehaviour::CorrectScaleImpl()
extern "C" bool MarkerAbstractBehaviour_CorrectScaleImpl_m332 (MarkerAbstractBehaviour_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorMarkerBehaviour.get_MarkerID()
extern "C" int32_t MarkerAbstractBehaviour_Vuforia_IEditorMarkerBehaviour_get_MarkerID_m333 (MarkerAbstractBehaviour_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorMarkerBehaviour.SetMarkerID(System.Int32)
extern "C" bool MarkerAbstractBehaviour_Vuforia_IEditorMarkerBehaviour_SetMarkerID_m334 (MarkerAbstractBehaviour_t29 * __this, int32_t ___markerID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorMarkerBehaviour.InitializeMarker(Vuforia.Marker)
extern "C" void MarkerAbstractBehaviour_Vuforia_IEditorMarkerBehaviour_InitializeMarker_m335 (MarkerAbstractBehaviour_t29 * __this, Object_t * ___marker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool MarkerAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m326 (MarkerAbstractBehaviour_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void MarkerAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m327 (MarkerAbstractBehaviour_t29 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t102 * MarkerAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m328 (MarkerAbstractBehaviour_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.MarkerAbstractBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t68 * MarkerAbstractBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m329 (MarkerAbstractBehaviour_t29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
