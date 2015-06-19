#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.RaycastHit>
struct Comparison_1_t201;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.RaycastHit
#include "UnityEngine_UnityEngine_RaycastHit.h"

// System.Void System.Comparison`1<UnityEngine.RaycastHit>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m1788_gshared (Comparison_1_t201 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m1788(__this, ___object, ___method, method) (( void (*) (Comparison_1_t201 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m1788_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m15826_gshared (Comparison_1_t201 * __this, RaycastHit_t366  ___x, RaycastHit_t366  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m15826(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t201 *, RaycastHit_t366 , RaycastHit_t366 , const MethodInfo*))Comparison_1_Invoke_m15826_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.RaycastHit>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m15827_gshared (Comparison_1_t201 * __this, RaycastHit_t366  ___x, RaycastHit_t366  ___y, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m15827(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t201 *, RaycastHit_t366 , RaycastHit_t366 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m15827_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.RaycastHit>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m15828_gshared (Comparison_1_t201 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m15828(__this, ___result, method) (( int32_t (*) (Comparison_1_t201 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m15828_gshared)(__this, ___result, method)
