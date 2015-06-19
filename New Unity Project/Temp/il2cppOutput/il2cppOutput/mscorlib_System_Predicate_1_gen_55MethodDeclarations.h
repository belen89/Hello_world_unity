#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t3503;
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

// System.Void System.Predicate`1<UnityEngine.UILineInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m23769_gshared (Predicate_1_t3503 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m23769(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3503 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m23769_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m23770_gshared (Predicate_1_t3503 * __this, UILineInfo_t419  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m23770(__this, ___obj, method) (( bool (*) (Predicate_1_t3503 *, UILineInfo_t419 , const MethodInfo*))Predicate_1_Invoke_m23770_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UILineInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m23771_gshared (Predicate_1_t3503 * __this, UILineInfo_t419  ___obj, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m23771(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3503 *, UILineInfo_t419 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m23771_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UILineInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m23772_gshared (Predicate_1_t3503 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m23772(__this, ___result, method) (( bool (*) (Predicate_1_t3503 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m23772_gshared)(__this, ___result, method)
