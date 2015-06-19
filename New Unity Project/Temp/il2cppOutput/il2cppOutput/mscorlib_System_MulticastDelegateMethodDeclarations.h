#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastDelegate
struct MulticastDelegate_t260;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t2361;
// System.Delegate
struct Delegate_t94;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m2338 (MulticastDelegate_t260 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m2336 (MulticastDelegate_t260 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m2337 (MulticastDelegate_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t2361* MulticastDelegate_GetInvocationList_m2340 (MulticastDelegate_t260 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t94 * MulticastDelegate_CombineImpl_m2341 (MulticastDelegate_t260 * __this, Delegate_t94 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m9486 (MulticastDelegate_t260 * __this, MulticastDelegate_t260 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t260 * MulticastDelegate_KPM_m9487 (Object_t * __this /* static, unused */, MulticastDelegate_t260 * ___needle, MulticastDelegate_t260 * ___haystack, MulticastDelegate_t260 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t94 * MulticastDelegate_RemoveImpl_m2342 (MulticastDelegate_t260 * __this, Delegate_t94 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
