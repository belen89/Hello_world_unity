#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Vuforia.DataSetImpl>
struct Predicate_1_t3193;
// System.Object
struct Object_t;
// Vuforia.DataSetImpl
struct DataSetImpl_t545;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<Vuforia.DataSetImpl>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_4MethodDeclarations.h"
#define Predicate_1__ctor_m18816(__this, ___object, ___method, method) (( void (*) (Predicate_1_t3193 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m14462_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Vuforia.DataSetImpl>::Invoke(T)
#define Predicate_1_Invoke_m18817(__this, ___obj, method) (( bool (*) (Predicate_1_t3193 *, DataSetImpl_t545 *, const MethodInfo*))Predicate_1_Invoke_m14463_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Vuforia.DataSetImpl>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m18818(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t3193 *, DataSetImpl_t545 *, AsyncCallback_t258 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m14464_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Vuforia.DataSetImpl>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m18819(__this, ___result, method) (( bool (*) (Predicate_1_t3193 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m14465_gshared)(__this, ___result, method)
