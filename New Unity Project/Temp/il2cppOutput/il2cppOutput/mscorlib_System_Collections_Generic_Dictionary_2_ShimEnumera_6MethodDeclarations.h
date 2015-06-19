#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t3521;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3509;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m23965_gshared (ShimEnumerator_t3521 * __this, Dictionary_2_t3509 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m23965(__this, ___host, method) (( void (*) (ShimEnumerator_t3521 *, Dictionary_2_t3509 *, const MethodInfo*))ShimEnumerator__ctor_m23965_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m23966_gshared (ShimEnumerator_t3521 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m23966(__this, method) (( bool (*) (ShimEnumerator_t3521 *, const MethodInfo*))ShimEnumerator_MoveNext_m23966_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1596  ShimEnumerator_get_Entry_m23967_gshared (ShimEnumerator_t3521 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m23967(__this, method) (( DictionaryEntry_t1596  (*) (ShimEnumerator_t3521 *, const MethodInfo*))ShimEnumerator_get_Entry_m23967_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m23968_gshared (ShimEnumerator_t3521 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m23968(__this, method) (( Object_t * (*) (ShimEnumerator_t3521 *, const MethodInfo*))ShimEnumerator_get_Key_m23968_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m23969_gshared (ShimEnumerator_t3521 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m23969(__this, method) (( Object_t * (*) (ShimEnumerator_t3521 *, const MethodInfo*))ShimEnumerator_get_Value_m23969_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m23970_gshared (ShimEnumerator_t3521 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m23970(__this, method) (( Object_t * (*) (ShimEnumerator_t3521 *, const MethodInfo*))ShimEnumerator_get_Current_m23970_gshared)(__this, method)
