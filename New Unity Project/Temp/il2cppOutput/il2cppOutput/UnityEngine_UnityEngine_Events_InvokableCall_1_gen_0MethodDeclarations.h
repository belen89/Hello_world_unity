#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.InvokableCall`1<UnityEngine.Color>
struct InvokableCall_1_t2994;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Events.UnityAction`1<UnityEngine.Color>
struct UnityAction_1_t367;
// System.Object[]
struct ObjectU5BU5D_t79;

// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void InvokableCall_1__ctor_m15839_gshared (InvokableCall_1_t2994 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define InvokableCall_1__ctor_m15839(__this, ___target, ___theFunction, method) (( void (*) (InvokableCall_1_t2994 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1__ctor_m15839_gshared)(__this, ___target, ___theFunction, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
extern "C" void InvokableCall_1__ctor_m15840_gshared (InvokableCall_1_t2994 * __this, UnityAction_1_t367 * ___callback, const MethodInfo* method);
#define InvokableCall_1__ctor_m15840(__this, ___callback, method) (( void (*) (InvokableCall_1_t2994 *, UnityAction_1_t367 *, const MethodInfo*))InvokableCall_1__ctor_m15840_gshared)(__this, ___callback, method)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Invoke(System.Object[])
extern "C" void InvokableCall_1_Invoke_m15841_gshared (InvokableCall_1_t2994 * __this, ObjectU5BU5D_t79* ___args, const MethodInfo* method);
#define InvokableCall_1_Invoke_m15841(__this, ___args, method) (( void (*) (InvokableCall_1_t2994 *, ObjectU5BU5D_t79*, const MethodInfo*))InvokableCall_1_Invoke_m15841_gshared)(__this, ___args, method)
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.Color>::Find(System.Object,System.Reflection.MethodInfo)
extern "C" bool InvokableCall_1_Find_m15842_gshared (InvokableCall_1_t2994 * __this, Object_t * ___targetObj, MethodInfo_t * ___method, const MethodInfo* method);
#define InvokableCall_1_Find_m15842(__this, ___targetObj, ___method, method) (( bool (*) (InvokableCall_1_t2994 *, Object_t *, MethodInfo_t *, const MethodInfo*))InvokableCall_1_Find_m15842_gshared)(__this, ___targetObj, ___method, method)
