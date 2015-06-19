#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.DataSet
struct DataSet_t561;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable>
struct IEnumerable_1_t731;
// Vuforia.DataSetTrackableBehaviour
struct DataSetTrackableBehaviour_t534;
// Vuforia.TrackableSource
struct TrackableSource_t586;
// UnityEngine.GameObject
struct GameObject_t68;
// Vuforia.Trackable
struct Trackable_t532;
// Vuforia.QCARUnity/StorageType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARUnity_StorageTy.h"
// Vuforia.DataSet/StorageType
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_DataSet_StorageType.h"

// System.String Vuforia.DataSet::get_Path()
// Vuforia.QCARUnity/StorageType Vuforia.DataSet::get_FileStorageType()
// System.Boolean Vuforia.DataSet::Exists(System.String)
extern "C" bool DataSet_Exists_m2588 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSet::Exists(System.String,Vuforia.DataSet/StorageType)
extern "C" bool DataSet_Exists_m2589 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSet::Exists(System.String,Vuforia.QCARUnity/StorageType)
extern "C" bool DataSet_Exists_m2590 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.DataSet::Load(System.String)
// System.Boolean Vuforia.DataSet::Load(System.String,Vuforia.DataSet/StorageType)
// System.Boolean Vuforia.DataSet::Load(System.String,Vuforia.QCARUnity/StorageType)
// System.Collections.Generic.IEnumerable`1<Vuforia.Trackable> Vuforia.DataSet::GetTrackables()
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSet::CreateTrackable(Vuforia.TrackableSource,System.String)
// Vuforia.DataSetTrackableBehaviour Vuforia.DataSet::CreateTrackable(Vuforia.TrackableSource,UnityEngine.GameObject)
// System.Boolean Vuforia.DataSet::Destroy(Vuforia.Trackable,System.Boolean)
// System.Boolean Vuforia.DataSet::HasReachedTrackableLimit()
// System.Boolean Vuforia.DataSet::Contains(Vuforia.Trackable)
// System.Void Vuforia.DataSet::DestroyAllTrackables(System.Boolean)
// System.Void Vuforia.DataSet::.ctor()
extern "C" void DataSet__ctor_m2591 (DataSet_t561 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
