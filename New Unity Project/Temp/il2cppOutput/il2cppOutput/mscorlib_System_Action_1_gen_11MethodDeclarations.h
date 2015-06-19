﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Action`1<System.Byte>
struct Action_1_t3139;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Action`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Action_1__ctor_m17836_gshared (Action_1_t3139 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Action_1__ctor_m17836(__this, ___object, ___method, method) (( void (*) (Action_1_t3139 *, Object_t *, IntPtr_t, const MethodInfo*))Action_1__ctor_m17836_gshared)(__this, ___object, ___method, method)
// System.Void System.Action`1<System.Byte>::Invoke(T)
extern "C" void Action_1_Invoke_m17838_gshared (Action_1_t3139 * __this, uint8_t ___obj, const MethodInfo* method);
#define Action_1_Invoke_m17838(__this, ___obj, method) (( void (*) (Action_1_t3139 *, uint8_t, const MethodInfo*))Action_1_Invoke_m17838_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Action`1<System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Action_1_BeginInvoke_m17840_gshared (Action_1_t3139 * __this, uint8_t ___obj, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Action_1_BeginInvoke_m17840(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Action_1_t3139 *, uint8_t, AsyncCallback_t258 *, Object_t *, const MethodInfo*))Action_1_BeginInvoke_m17840_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Void System.Action`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" void Action_1_EndInvoke_m17842_gshared (Action_1_t3139 * __this, Object_t * ___result, const MethodInfo* method);
#define Action_1_EndInvoke_m17842(__this, ___result, method) (( void (*) (Action_1_t3139 *, Object_t *, const MethodInfo*))Action_1_EndInvoke_m17842_gshared)(__this, ___result, method)