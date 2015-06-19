#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
struct DefaultComparer_t3743;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern "C" void DefaultComparer__ctor_m26315_gshared (DefaultComparer_t3743 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m26315(__this, method) (( void (*) (DefaultComparer_t3743 *, const MethodInfo*))DefaultComparer__ctor_m26315_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m26316_gshared (DefaultComparer_t3743 * __this, DateTime_t602  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m26316(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3743 *, DateTime_t602 , const MethodInfo*))DefaultComparer_GetHashCode_m26316_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m26317_gshared (DefaultComparer_t3743 * __this, DateTime_t602  ___x, DateTime_t602  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m26317(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3743 *, DateTime_t602 , DateTime_t602 , const MethodInfo*))DefaultComparer_Equals_m26317_gshared)(__this, ___x, ___y, method)
