#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t3751;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m26353_gshared (DefaultComparer_t3751 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m26353(__this, method) (( void (*) (DefaultComparer_t3751 *, const MethodInfo*))DefaultComparer__ctor_m26353_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m26354_gshared (DefaultComparer_t3751 * __this, Guid_t1187  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m26354(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3751 *, Guid_t1187 , const MethodInfo*))DefaultComparer_GetHashCode_m26354_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m26355_gshared (DefaultComparer_t3751 * __this, Guid_t1187  ___x, Guid_t1187  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m26355(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3751 *, Guid_t1187 , Guid_t1187 , const MethodInfo*))DefaultComparer_Equals_m26355_gshared)(__this, ___x, ___y, method)
