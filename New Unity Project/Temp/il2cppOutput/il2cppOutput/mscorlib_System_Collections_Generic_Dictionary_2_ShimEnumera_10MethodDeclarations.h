#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t3692;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1532;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25999_gshared (ShimEnumerator_t3692 * __this, Dictionary_2_t1532 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25999(__this, ___host, method) (( void (*) (ShimEnumerator_t3692 *, Dictionary_2_t1532 *, const MethodInfo*))ShimEnumerator__ctor_m25999_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m26000_gshared (ShimEnumerator_t3692 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m26000(__this, method) (( bool (*) (ShimEnumerator_t3692 *, const MethodInfo*))ShimEnumerator_MoveNext_m26000_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1596  ShimEnumerator_get_Entry_m26001_gshared (ShimEnumerator_t3692 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m26001(__this, method) (( DictionaryEntry_t1596  (*) (ShimEnumerator_t3692 *, const MethodInfo*))ShimEnumerator_get_Entry_m26001_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m26002_gshared (ShimEnumerator_t3692 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m26002(__this, method) (( Object_t * (*) (ShimEnumerator_t3692 *, const MethodInfo*))ShimEnumerator_get_Key_m26002_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m26003_gshared (ShimEnumerator_t3692 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m26003(__this, method) (( Object_t * (*) (ShimEnumerator_t3692 *, const MethodInfo*))ShimEnumerator_get_Value_m26003_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m26004_gshared (ShimEnumerator_t3692 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m26004(__this, method) (( Object_t * (*) (ShimEnumerator_t3692 *, const MethodInfo*))ShimEnumerator_get_Current_m26004_gshared)(__this, method)
