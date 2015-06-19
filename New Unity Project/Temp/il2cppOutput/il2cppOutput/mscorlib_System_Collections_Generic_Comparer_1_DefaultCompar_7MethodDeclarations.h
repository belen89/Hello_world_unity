#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t3745;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m26323_gshared (DefaultComparer_t3745 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m26323(__this, method) (( void (*) (DefaultComparer_t3745 *, const MethodInfo*))DefaultComparer__ctor_m26323_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m26324_gshared (DefaultComparer_t3745 * __this, DateTimeOffset_t1186  ___x, DateTimeOffset_t1186  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m26324(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3745 *, DateTimeOffset_t1186 , DateTimeOffset_t1186 , const MethodInfo*))DefaultComparer_Compare_m26324_gshared)(__this, ___x, ___y, method)
