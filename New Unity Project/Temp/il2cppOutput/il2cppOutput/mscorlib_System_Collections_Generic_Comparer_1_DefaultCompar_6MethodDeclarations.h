#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3741;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m26306_gshared (DefaultComparer_t3741 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m26306(__this, method) (( void (*) (DefaultComparer_t3741 *, const MethodInfo*))DefaultComparer__ctor_m26306_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m26307_gshared (DefaultComparer_t3741 * __this, DateTime_t602  ___x, DateTime_t602  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m26307(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3741 *, DateTime_t602 , DateTime_t602 , const MethodInfo*))DefaultComparer_Compare_m26307_gshared)(__this, ___x, ___y, method)
