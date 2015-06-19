#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t3753;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m26361_gshared (DefaultComparer_t3753 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m26361(__this, method) (( void (*) (DefaultComparer_t3753 *, const MethodInfo*))DefaultComparer__ctor_m26361_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m26362_gshared (DefaultComparer_t3753 * __this, TimeSpan_t783  ___x, TimeSpan_t783  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m26362(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3753 *, TimeSpan_t783 , TimeSpan_t783 , const MethodInfo*))DefaultComparer_Compare_m26362_gshared)(__this, ___x, ___y, method)
