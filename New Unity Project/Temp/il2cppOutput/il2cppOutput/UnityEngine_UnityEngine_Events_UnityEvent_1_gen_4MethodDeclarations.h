﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t305;
// UnityEngine.Events.UnityAction`1<System.Boolean>
struct UnityAction_1_t3108;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t1101;

// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
// UnityEngine.Events.UnityEvent`1<System.Byte>
#include "UnityEngine_UnityEngine_Events_UnityEvent_1_gen_6MethodDeclarations.h"
#define UnityEvent_1__ctor_m2124(__this, method) (( void (*) (UnityEvent_1_t305 *, const MethodInfo*))UnityEvent_1__ctor_m17376_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_AddListener_m17377(__this, ___call, method) (( void (*) (UnityEvent_1_t305 *, UnityAction_1_t3108 *, const MethodInfo*))UnityEvent_1_AddListener_m17378_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_RemoveListener_m17379(__this, ___call, method) (( void (*) (UnityEvent_1_t305 *, UnityAction_1_t3108 *, const MethodInfo*))UnityEvent_1_RemoveListener_m17380_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<System.Boolean>::FindMethod_Impl(System.String,System.Object)
#define UnityEvent_1_FindMethod_Impl_m2364(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t305 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m17381_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(System.Object,System.Reflection.MethodInfo)
#define UnityEvent_1_GetDelegate_m2365(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t1101 * (*) (UnityEvent_1_t305 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m17382_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<System.Boolean>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
#define UnityEvent_1_GetDelegate_m17383(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t1101 * (*) (Object_t * /* static, unused */, UnityAction_1_t3108 *, const MethodInfo*))UnityEvent_1_GetDelegate_m17384_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(T0)
#define UnityEvent_1_Invoke_m2125(__this, ___arg0, method) (( void (*) (UnityEvent_1_t305 *, bool, const MethodInfo*))UnityEvent_1_Invoke_m17385_gshared)(__this, ___arg0, method)
