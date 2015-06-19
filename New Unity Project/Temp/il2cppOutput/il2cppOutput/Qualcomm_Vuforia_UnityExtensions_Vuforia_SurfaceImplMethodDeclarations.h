#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.SurfaceImpl
struct SurfaceImpl_t638;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t556;
// UnityEngine.Mesh
struct Mesh_t107;
// System.Int32[]
struct Int32U5BU5D_t109;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.SurfaceImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void SurfaceImpl__ctor_m2849 (SurfaceImpl_t638 * __this, int32_t ___id, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetID(System.Int32)
extern "C" void SurfaceImpl_SetID_m2850 (SurfaceImpl_t638 * __this, int32_t ___trackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetMesh(System.Int32,UnityEngine.Mesh,UnityEngine.Mesh,System.Int32[])
extern "C" void SurfaceImpl_SetMesh_m2851 (SurfaceImpl_t638 * __this, int32_t ___meshRev, Mesh_t107 * ___mesh, Mesh_t107 * ___navMesh, Int32U5BU5D_t109* ___meshBoundaries, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetBoundingBox(UnityEngine.Rect)
extern "C" void SurfaceImpl_SetBoundingBox_m2852 (SurfaceImpl_t638 * __this, Rect_t71  ___boundingBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SurfaceImpl::GetNavMesh()
extern "C" Mesh_t107 * SurfaceImpl_GetNavMesh_m2853 (SurfaceImpl_t638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.SurfaceImpl::GetMeshBoundaries()
extern "C" Int32U5BU5D_t109* SurfaceImpl_GetMeshBoundaries_m2854 (SurfaceImpl_t638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.SurfaceImpl::get_BoundingBox()
extern "C" Rect_t71  SurfaceImpl_get_BoundingBox_m2855 (SurfaceImpl_t638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.SurfaceImpl::GetArea()
extern "C" float SurfaceImpl_GetArea_m2856 (SurfaceImpl_t638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
