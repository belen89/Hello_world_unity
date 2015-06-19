#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<System.Int32>
struct InvokableCall_1_t3635;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<System.Int32>
struct UnityAction_1_t3636;
// System.Object[]
struct ObjectU5BU5D_t79;

// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m25366_gshared (InvokableCall_1_t3635 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m25366(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t3635 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m25366_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m25367_gshared (InvokableCall_1_t3635 * __this, UnityAction_1_t3636 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m25367(__this, ___callback, method) (( void (*) (InvokableCall_1_t3635 *, UnityAction_1_t3636 *, const MethodInfo*))InvokableCall_1__ctor_m25367_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<System.Int32>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m25368_gshared (InvokableCall_1_t3635 * __this, ObjectU5BU5D_t79* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m25368(__this, ___args, method) (( void (*) (InvokableCall_1_t3635 *, ObjectU5BU5D_t79*, const MethodInfo*))InvokableCall_1_Invoke_m25368_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<System.Int32>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m25369_gshared (InvokableCall_1_t3635 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m25369(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t3635 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m25369_gshared)(__this, ___targetObj, ___method, method)
