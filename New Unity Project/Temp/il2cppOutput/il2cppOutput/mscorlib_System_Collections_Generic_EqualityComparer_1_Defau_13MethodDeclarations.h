#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>
struct DefaultComparer_t3673;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::.ctor()
extern "C" void DefaultComparer__ctor_m25803_gshared (DefaultComparer_t3673 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m25803(__this, method) (( void (*) (DefaultComparer_t3673 *, const MethodInfo*))DefaultComparer__ctor_m25803_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m25804_gshared (DefaultComparer_t3673 * __this, uint8_t ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m25804(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t3673 *, uint8_t, const MethodInfo*))DefaultComparer_GetHashCode_m25804_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Byte>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m25805_gshared (DefaultComparer_t3673 * __this, uint8_t ___x, uint8_t ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m25805(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t3673 *, uint8_t, uint8_t, const MethodInfo*))DefaultComparer_Equals_m25805_gshared)(__this, ___x, ___y, method)
