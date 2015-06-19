﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t2933;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m15030_gshared (Predicate_1_t2933 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m15030(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2933 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m15030_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m15031_gshared (Predicate_1_t2933 * __this, RaycastResult_t182  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m15031(__this, ___obj, method) (( bool (*) (Predicate_1_t2933 *, RaycastResult_t182 , const MethodInfo*))Predicate_1_Invoke_m15031_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m15032_gshared (Predicate_1_t2933 * __this, RaycastResult_t182  ___obj, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m15032(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2933 *, RaycastResult_t182 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m15032_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m15033_gshared (Predicate_1_t2933 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m15033(__this, ___result, method) (( bool (*) (Predicate_1_t2933 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m15033_gshared)(__this, ___result, method)