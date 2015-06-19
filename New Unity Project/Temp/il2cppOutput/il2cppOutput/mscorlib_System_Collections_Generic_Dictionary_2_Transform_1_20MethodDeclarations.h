#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>
struct Transform_1_t3242;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m19538_gshared (Transform_1_t3242 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m19538(__this, ___object, ___method, method) (( void (*) (Transform_1_t3242 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m19538_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::Invoke(TKey,TValue)
extern "C" uint16_t Transform_1_Invoke_m19539_gshared (Transform_1_t3242 * __this, Object_t * ___key, uint16_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m19539(__this, ___key, ___value, method) (( uint16_t (*) (Transform_1_t3242 *, Object_t *, uint16_t, const MethodInfo*))Transform_1_Invoke_m19539_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m19540_gshared (Transform_1_t3242 * __this, Object_t * ___key, uint16_t ___value, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m19540(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t3242 *, Object_t *, uint16_t, AsyncCallback_t258 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m19540_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.UInt16,System.UInt16>::EndInvoke(System.IAsyncResult)
extern "C" uint16_t Transform_1_EndInvoke_m19541_gshared (Transform_1_t3242 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m19541(__this, ___result, method) (( uint16_t (*) (Transform_1_t3242 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m19541_gshared)(__this, ___result, method)
