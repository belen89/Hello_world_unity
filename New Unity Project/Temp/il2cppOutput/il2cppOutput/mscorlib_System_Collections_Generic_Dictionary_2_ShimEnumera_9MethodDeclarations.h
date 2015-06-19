#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>
struct ShimEnumerator_t3670;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3659;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25789_gshared (ShimEnumerator_t3670 * __this, Dictionary_2_t3659 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25789(__this, ___host, method) (( void (*) (ShimEnumerator_t3670 *, Dictionary_2_t3659 *, const MethodInfo*))ShimEnumerator__ctor_m25789_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25790_gshared (ShimEnumerator_t3670 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25790(__this, method) (( bool (*) (ShimEnumerator_t3670 *, const MethodInfo*))ShimEnumerator_MoveNext_m25790_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Entry()
extern "C" DictionaryEntry_t1596  ShimEnumerator_get_Entry_m25791_gshared (ShimEnumerator_t3670 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25791(__this, method) (( DictionaryEntry_t1596  (*) (ShimEnumerator_t3670 *, const MethodInfo*))ShimEnumerator_get_Entry_m25791_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25792_gshared (ShimEnumerator_t3670 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25792(__this, method) (( Object_t * (*) (ShimEnumerator_t3670 *, const MethodInfo*))ShimEnumerator_get_Key_m25792_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25793_gshared (ShimEnumerator_t3670 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25793(__this, method) (( Object_t * (*) (ShimEnumerator_t3670 *, const MethodInfo*))ShimEnumerator_get_Value_m25793_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Byte>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25794_gshared (ShimEnumerator_t3670 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25794(__this, method) (( Object_t * (*) (ShimEnumerator_t3670 *, const MethodInfo*))ShimEnumerator_get_Current_m25794_gshared)(__this, method)
