#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Vuforia.TrackableBehaviour>
struct Predicate_1_t3283;
// System.Object
struct Object_t;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t15;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<Vuforia.TrackableBehaviour>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
#define Predicate_1__ctor_m20350(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3283 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14462_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.TrackableBehaviour>::Invoke(T)
#define Predicate_1_Invoke_m20351(__this, ___obj, method) (( bool (*) (Predicate_1_t3283 *, TrackableBehaviour_t15 *, const MethodInfo*))Predicate_1_Invoke_m14463_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.TrackableBehaviour>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m20352(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3283 *, TrackableBehaviour_t15 *, AsyncCallback_t258 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14464_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.TrackableBehaviour>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m20353(__this, ___result, method) (( bool (*) (Predicate_1_t3283 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14465_gshared)(__this, ___result, method)
