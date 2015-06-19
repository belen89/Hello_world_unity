﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>
struct Transform_1_t3239;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19515_gshared (Transform_1_t3239 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m19515(__this, ___object, ___method, method) (( void (*) (Transform_1_t3239 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19515_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::Invoke(TKey,TValue)
extern "C" Object_t * Transform_1_Invoke_m19516_gshared (Transform_1_t3239 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m19516(__this, ___key, ___value, method) (( Object_t * (*) (Transform_1_t3239 *, Object_t *, uint16_t, const MethodInfo*))Transform_1_Invoke_m19516_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19517_gshared (Transform_1_t3239 * __this, Object_t * ___key, uint16_t ___value, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m19517(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3239 *, Object_t *, uint16_t, AsyncCallback_t258 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19517_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.Object>::EndInvoke(System.IAsyncResult)
extern "C" Object_t * Transform_1_EndInvoke_m19518_gshared (Transform_1_t3239 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m19518(__this, ___result, method) (( Object_t * (*) (Transform_1_t3239 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19518_gshared)(__this, ___result, method)