#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t3494;
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

// System.Void System.Predicate`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m23626_gshared (Predicate_1_t3494 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m23626(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3494 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m23626_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m23627_gshared (Predicate_1_t3494 * __this, UICharInfo_t421  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m23627(__this, ___obj, method) (( bool (*) (Predicate_1_t3494 *, UICharInfo_t421 , const MethodInfo*))Predicate_1_Invoke_m23627_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.UICharInfo>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m23628_gshared (Predicate_1_t3494 * __this, UICharInfo_t421  ___obj, AsyncCallback_t258 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m23628(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3494 *, UICharInfo_t421 , AsyncCallback_t258 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m23628_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m23629_gshared (Predicate_1_t3494 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m23629(__this, ___result, method) (( bool (*) (Predicate_1_t3494 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m23629_gshared)(__this, ___result, method)
