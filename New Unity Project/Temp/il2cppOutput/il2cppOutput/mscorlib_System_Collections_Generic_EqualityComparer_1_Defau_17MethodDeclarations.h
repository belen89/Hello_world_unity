#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3755;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m26370_gshared (DefaultComparer_t3755 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m26370(__this, method) (( void (*) (DefaultComparer_t3755 *, const MethodInfo*))DefaultComparer__ctor_m26370_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m26371_gshared (DefaultComparer_t3755 * __this, TimeSpan_t783  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m26371(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3755 *, TimeSpan_t783 , const MethodInfo*))DefaultComparer_GetHashCode_m26371_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.TimeSpan>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m26372_gshared (DefaultComparer_t3755 * __this, TimeSpan_t783  ___x, TimeSpan_t783  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m26372(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3755 *, TimeSpan_t783 , TimeSpan_t783 , const MethodInfo*))DefaultComparer_Equals_m26372_gshared)(__this, ___x, ___y, method)
