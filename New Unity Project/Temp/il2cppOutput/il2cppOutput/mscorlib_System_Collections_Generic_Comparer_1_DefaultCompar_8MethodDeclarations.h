#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3749;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m26344_gshared (DefaultComparer_t3749 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m26344(__this, method) (( void (*) (DefaultComparer_t3749 *, const MethodInfo*))DefaultComparer__ctor_m26344_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m26345_gshared (DefaultComparer_t3749 * __this, Guid_t1187  ___x, Guid_t1187  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m26345(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t3749 *, Guid_t1187 , Guid_t1187 , const MethodInfo*))DefaultComparer_Compare_m26345_gshared)(__this, ___x, ___y, method)
