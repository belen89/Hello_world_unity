﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Object,System.Byte>
struct Func_2_t3114;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m17489_gshared (Func_2_t3114 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m17489(__this, ___object, ___method, method) (( void (*) (Func_2_t3114 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m17489_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Object,System.Byte>::Invoke(T)
extern "C" uint8_t Func_2_Invoke_m17491_gshared (Func_2_t3114 * __this, Object_t * ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m17491(__this, ___arg1, method) (( uint8_t (*) (Func_2_t3114 *, Object_t *, const MethodInfo*))Func_2_Invoke_m17491_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Object,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m17493_gshared (Func_2_t3114 * __this, Object_t * ___arg1, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m17493(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t3114 *, Object_t *, AsyncCallback_t258 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m17493_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Object,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_2_EndInvoke_m17495_gshared (Func_2_t3114 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m17495(__this, ___result, method) (( uint8_t (*) (Func_2_t3114 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m17495_gshared)(__this, ___result, method)