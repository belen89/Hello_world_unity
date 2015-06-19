﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct Transform_1_t2980;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15660_gshared (Transform_1_t2980 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m15660(__this, ___object, ___method, method) (( void (*) (Transform_1_t2980 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m15660_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Invoke(TKey,TValue)
extern "C" KeyValuePair_2_t2968  Transform_1_Invoke_m15661_gshared (Transform_1_t2980 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m15661(__this, ___key, ___value, method) (( KeyValuePair_2_t2968  (*) (Transform_1_t2980 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m15661_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15662_gshared (Transform_1_t2980 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m15662(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2980 *, int32_t, Object_t *, AsyncCallback_t258 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m15662_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::EndInvoke(System.IAsyncResult)
extern "C" KeyValuePair_2_t2968  Transform_1_EndInvoke_m15663_gshared (Transform_1_t2980 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m15663(__this, ___result, method) (( KeyValuePair_2_t2968  (*) (Transform_1_t2980 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m15663_gshared)(__this, ___result, method)
