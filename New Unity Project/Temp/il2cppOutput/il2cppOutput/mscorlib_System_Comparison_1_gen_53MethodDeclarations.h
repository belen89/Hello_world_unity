﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t3497;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m23636_gshared (Comparison_1_t3497 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m23636(__this, ___object, ___method, method) (( void (*) (Comparison_1_t3497 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m23636_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m23637_gshared (Comparison_1_t3497 * __this, UICharInfo_t421  ___x, UICharInfo_t421  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m23637(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t3497 *, UICharInfo_t421 , UICharInfo_t421 , const MethodInfo*))Comparison_1_Invoke_m23637_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m23638_gshared (Comparison_1_t3497 * __this, UICharInfo_t421  ___x, UICharInfo_t421  ___y, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m23638(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t3497 *, UICharInfo_t421 , UICharInfo_t421 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m23638_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m23639_gshared (Comparison_1_t3497 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m23639(__this, ___result, method) (( int32_t (*) (Comparison_1_t3497 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m23639_gshared)(__this, ___result, method)