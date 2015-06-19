#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.PropImpl
struct PropImpl_t641;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t556;
// UnityEngine.Mesh
struct Mesh_t107;
// Vuforia.OrientedBoundingBox3D
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox_0.h"

// System.Void Vuforia.PropImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void PropImpl__ctor_m2865 (PropImpl_t641 * __this, int32_t ___id, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox3D Vuforia.PropImpl::get_BoundingBox()
extern "C" OrientedBoundingBox3D_t566  PropImpl_get_BoundingBox_m2866 (PropImpl_t641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetMesh(System.Int32,UnityEngine.Mesh)
extern "C" void PropImpl_SetMesh_m2867 (PropImpl_t641 * __this, int32_t ___meshRev, Mesh_t107 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetObb(Vuforia.OrientedBoundingBox3D)
extern "C" void PropImpl_SetObb_m2868 (PropImpl_t641 * __this, OrientedBoundingBox3D_t566  ___obb3D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
