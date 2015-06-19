#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.ObjectTargetImpl
struct ObjectTargetImpl_t546;
// Vuforia.DataSetImpl
struct DataSetImpl_t545;
// System.String
struct String_t;
// Vuforia.DataSet
struct DataSet_t561;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Vuforia.ObjectTargetImpl::.ctor(System.String,System.Int32,Vuforia.DataSet)
extern "C" void ObjectTargetImpl__ctor_m2499 (ObjectTargetImpl_t546 * __this, String_t* ___name, int32_t ___id, DataSet_t561 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.ObjectTargetImpl::GetSize()
extern "C" Vector3_t110  ObjectTargetImpl_GetSize_m2500 (ObjectTargetImpl_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.ObjectTargetImpl::SetSize(UnityEngine.Vector3)
extern "C" void ObjectTargetImpl_SetSize_m2501 (ObjectTargetImpl_t546 * __this, Vector3_t110  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StartExtendedTracking()
extern "C" bool ObjectTargetImpl_StartExtendedTracking_m2502 (ObjectTargetImpl_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.ObjectTargetImpl::StopExtendedTracking()
extern "C" bool ObjectTargetImpl_StopExtendedTracking_m2503 (ObjectTargetImpl_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.DataSetImpl Vuforia.ObjectTargetImpl::get_DataSet()
extern "C" DataSetImpl_t545 * ObjectTargetImpl_get_DataSet_m2504 (ObjectTargetImpl_t546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
