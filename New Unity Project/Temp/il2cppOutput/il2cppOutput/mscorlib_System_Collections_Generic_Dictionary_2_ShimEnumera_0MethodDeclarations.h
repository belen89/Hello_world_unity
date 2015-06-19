#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t3010;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2996;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16001_gshared (ShimEnumerator_t3010 * __this, Dictionary_2_t2996 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16001(__this, ___host, method) (( void (*) (ShimEnumerator_t3010 *, Dictionary_2_t2996 *, const MethodInfo*))ShimEnumerator__ctor_m16001_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16002_gshared (ShimEnumerator_t3010 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16002(__this, method) (( bool (*) (ShimEnumerator_t3010 *, const MethodInfo*))ShimEnumerator_MoveNext_m16002_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1596  ShimEnumerator_get_Entry_m16003_gshared (ShimEnumerator_t3010 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16003(__this, method) (( DictionaryEntry_t1596  (*) (ShimEnumerator_t3010 *, const MethodInfo*))ShimEnumerator_get_Entry_m16003_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16004_gshared (ShimEnumerator_t3010 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16004(__this, method) (( Object_t * (*) (ShimEnumerator_t3010 *, const MethodInfo*))ShimEnumerator_get_Key_m16004_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16005_gshared (ShimEnumerator_t3010 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16005(__this, method) (( Object_t * (*) (ShimEnumerator_t3010 *, const MethodInfo*))ShimEnumerator_get_Value_m16005_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16006_gshared (ShimEnumerator_t3010 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16006(__this, method) (( Object_t * (*) (ShimEnumerator_t3010 *, const MethodInfo*))ShimEnumerator_get_Current_m16006_gshared)(__this, method)
