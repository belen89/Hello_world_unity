#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.SmartTerrainBuilderImpl
struct SmartTerrainBuilderImpl_t640;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour>
struct IEnumerable_1_t730;
// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t39;
// Vuforia.Reconstruction
struct Reconstruction_t675;
// Vuforia.QCARManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t736;
// Vuforia.QCARManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t737;
// Vuforia.QCARManagerImpl/PropData[]
struct PropDataU5BU5D_t738;

// System.Boolean Vuforia.SmartTerrainBuilderImpl::Init()
extern "C" bool SmartTerrainBuilderImpl_Init_m2857 (SmartTerrainBuilderImpl_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::Deinit()
extern "C" bool SmartTerrainBuilderImpl_Deinit_m2858 (SmartTerrainBuilderImpl_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour> Vuforia.SmartTerrainBuilderImpl::GetReconstructions()
extern "C" Object_t* SmartTerrainBuilderImpl_GetReconstructions_m2859 (SmartTerrainBuilderImpl_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::AddReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_AddReconstruction_m2860 (SmartTerrainBuilderImpl_t640 * __this, ReconstructionAbstractBehaviour_t39 * ___reconstructionBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::RemoveReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_RemoveReconstruction_m2861 (SmartTerrainBuilderImpl_t640 * __this, ReconstructionAbstractBehaviour_t39 * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::DestroyReconstruction(Vuforia.Reconstruction)
extern "C" bool SmartTerrainBuilderImpl_DestroyReconstruction_m2862 (SmartTerrainBuilderImpl_t640 * __this, Object_t * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::UpdateSmartTerrainData(Vuforia.QCARManagerImpl/SmartTerrainRevisionData[],Vuforia.QCARManagerImpl/SurfaceData[],Vuforia.QCARManagerImpl/PropData[])
extern "C" void SmartTerrainBuilderImpl_UpdateSmartTerrainData_m2863 (SmartTerrainBuilderImpl_t640 * __this, SmartTerrainRevisionDataU5BU5D_t736* ___smartTerrainRevisions, SurfaceDataU5BU5D_t737* ___updatedSurfaces, PropDataU5BU5D_t738* ___updatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::.ctor()
extern "C" void SmartTerrainBuilderImpl__ctor_m2864 (SmartTerrainBuilderImpl_t640 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
