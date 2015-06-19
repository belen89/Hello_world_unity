﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t3506;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"

// System.Void System.Comparison`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m23779_gshared (Comparison_1_t3506 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m23779(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3506 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m23779_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m23780_gshared (Comparison_1_t3506 * __this, UILineInfo_t419  ___x, UILineInfo_t419  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m23780(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3506 *, UILineInfo_t419 , UILineInfo_t419 , const MethodInfo*))Comparison_1_Invoke_m23780_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UILineInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m23781_gshared (Comparison_1_t3506 * __this, UILineInfo_t419  ___x, UILineInfo_t419  ___y, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m23781(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3506 *, UILineInfo_t419 , UILineInfo_t419 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m23781_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m23782_gshared (Comparison_1_t3506 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m23782(__this, ___result, method) (( int32_t (*) (Comparison_1_t3506 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m23782_gshared)(__this, ___result, method)
