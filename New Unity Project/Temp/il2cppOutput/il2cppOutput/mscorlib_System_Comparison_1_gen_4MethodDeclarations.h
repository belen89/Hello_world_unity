#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<System.Reflection.MethodInfo>
struct Comparison_1_t2898;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.IAsyncResult
struct IAsyncResult_t257;
// System.AsyncCallback
struct AsyncCallback_t258;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Comparison`1<System.Reflection.MethodInfo>::.ctor(System.Object,System.IntPtr)
// System.Comparison`1<System.Object>
#include "mscorlib_System_Comparison_1_gen_3MethodDeclarations.h"
#define Comparison_1__ctor_m14534(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2898 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14492_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<System.Reflection.MethodInfo>::Invoke(T,T)
#define Comparison_1_Invoke_m14535(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2898 *, MethodInfo_t *, MethodInfo_t *, const MethodInfo*))Comparison_1_Invoke_m14493_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<System.Reflection.MethodInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
#define Comparison_1_BeginInvoke_m14536(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2898 *, MethodInfo_t *, MethodInfo_t *, AsyncCallback_t258 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14494_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<System.Reflection.MethodInfo>::EndInvoke(System.IAsyncResult)
#define Comparison_1_EndInvoke_m14537(__this, ___result, method) (( int32_t (*) (Comparison_1_t2898 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14495_gshared)(__this, ___result, method)
