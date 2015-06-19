#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct DefaultComparer_t3605;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
extern "C" void DefaultComparer__ctor_m25130_gshared (DefaultComparer_t3605 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25130(__this, method) (( void (*) (DefaultComparer_t3605 *, const MethodInfo*))DefaultComparer__ctor_m25130_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25131_gshared (DefaultComparer_t3605 * __this, KeyValuePair_2_t3026  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25131(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3605 *, KeyValuePair_2_t3026 , const MethodInfo*))DefaultComparer_GetHashCode_m25131_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25132_gshared (DefaultComparer_t3605 * __this, KeyValuePair_2_t3026  ___x, KeyValuePair_2_t3026  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25132(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3605 *, KeyValuePair_2_t3026 , KeyValuePair_2_t3026 , const MethodInfo*))DefaultComparer_Equals_m25132_gshared)(__this, ___x, ___y, method)
