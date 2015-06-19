#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UnitySerializationHolder
struct UnitySerializationHolder_t2334;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t2277;
// System.Reflection.Module
struct Module_t2002;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m13348 (UnitySerializationHolder_t2334 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m13349 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m13350 (Object_t * __this /* static, unused */, DBNull_t2277 * ___instance, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m13351 (Object_t * __this /* static, unused */, Module_t2002 * ___instance, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m13352 (UnitySerializationHolder_t2334 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m13353 (UnitySerializationHolder_t2334 * __this, StreamingContext_t1145  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
