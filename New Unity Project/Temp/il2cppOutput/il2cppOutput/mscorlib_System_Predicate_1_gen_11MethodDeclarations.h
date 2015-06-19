#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Transform>
struct Predicate_1_t2953;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t102;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
#define Predicate_1__ctor_m15368(__this, ___object, ___method, method) (( void (*) (Predicate_1_t2953 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14462_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::Invoke(T)
#define Predicate_1_Invoke_m15369(__this, ___obj, method) (( bool (*) (Predicate_1_t2953 *, Transform_t102 *, const MethodInfo*))Predicate_1_Invoke_m14463_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Transform>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m15370(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t2953 *, Transform_t102 *, AsyncCallback_t258 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14464_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m15371(__this, ___result, method) (( bool (*) (Predicate_1_t2953 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14465_gshared)(__this, ___result, method)
