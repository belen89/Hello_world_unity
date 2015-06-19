#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t2374;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m13426_gshared (Nullable_1_t2374 * __this, TimeSpan_t783  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m13426(__this, ___value, method) (( void (*) (Nullable_1_t2374 *, TimeSpan_t783 , const MethodInfo*))Nullable_1__ctor_m13426_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m13427_gshared (Nullable_1_t2374 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m13427(__this, method) (( bool (*) (Nullable_1_t2374 *, const MethodInfo*))Nullable_1_get_HasValue_m13427_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t783  Nullable_1_get_Value_m13428_gshared (Nullable_1_t2374 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m13428(__this, method) (( TimeSpan_t783  (*) (Nullable_1_t2374 *, const MethodInfo*))Nullable_1_get_Value_m13428_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m26335_gshared (Nullable_1_t2374 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m26335(__this, ___other, method) (( bool (*) (Nullable_1_t2374 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m26335_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m26336_gshared (Nullable_1_t2374 * __this, Nullable_1_t2374  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m26336(__this, ___other, method) (( bool (*) (Nullable_1_t2374 *, Nullable_1_t2374 , const MethodInfo*))Nullable_1_Equals_m26336_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m26337_gshared (Nullable_1_t2374 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m26337(__this, method) (( int32_t (*) (Nullable_1_t2374 *, const MethodInfo*))Nullable_1_GetHashCode_m26337_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m26338_gshared (Nullable_1_t2374 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m26338(__this, method) (( String_t* (*) (Nullable_1_t2374 *, const MethodInfo*))Nullable_1_ToString_m26338_gshared)(__this, method)
