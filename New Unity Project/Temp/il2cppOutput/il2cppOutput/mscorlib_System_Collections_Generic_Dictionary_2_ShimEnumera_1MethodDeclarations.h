#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t3035;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3025;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16329_gshared (ShimEnumerator_t3035 * __this, Dictionary_2_t3025 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16329(__this, ___host, method) (( void (*) (ShimEnumerator_t3035 *, Dictionary_2_t3025 *, const MethodInfo*))ShimEnumerator__ctor_m16329_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16330_gshared (ShimEnumerator_t3035 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16330(__this, method) (( bool (*) (ShimEnumerator_t3035 *, const MethodInfo*))ShimEnumerator_MoveNext_m16330_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1596  ShimEnumerator_get_Entry_m16331_gshared (ShimEnumerator_t3035 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16331(__this, method) (( DictionaryEntry_t1596  (*) (ShimEnumerator_t3035 *, const MethodInfo*))ShimEnumerator_get_Entry_m16331_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16332_gshared (ShimEnumerator_t3035 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16332(__this, method) (( Object_t * (*) (ShimEnumerator_t3035 *, const MethodInfo*))ShimEnumerator_get_Key_m16332_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16333_gshared (ShimEnumerator_t3035 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16333(__this, method) (( Object_t * (*) (ShimEnumerator_t3035 *, const MethodInfo*))ShimEnumerator_get_Value_m16333_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16334_gshared (ShimEnumerator_t3035 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16334(__this, method) (( Object_t * (*) (ShimEnumerator_t3035 *, const MethodInfo*))ShimEnumerator_get_Current_m16334_gshared)(__this, method)
