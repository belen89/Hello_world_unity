#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>
struct ShimEnumerator_t3244;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t3233;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m19550_gshared (ShimEnumerator_t3244 * __this, Dictionary_2_t3233 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m19550(__this, ___host, method) (( void (*) (ShimEnumerator_t3244 *, Dictionary_2_t3233 *, const MethodInfo*))ShimEnumerator__ctor_m19550_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m19551_gshared (ShimEnumerator_t3244 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m19551(__this, method) (( bool (*) (ShimEnumerator_t3244 *, const MethodInfo*))ShimEnumerator_MoveNext_m19551_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Entry()
extern "C" DictionaryEntry_t1596  ShimEnumerator_get_Entry_m19552_gshared (ShimEnumerator_t3244 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m19552(__this, method) (( DictionaryEntry_t1596  (*) (ShimEnumerator_t3244 *, const MethodInfo*))ShimEnumerator_get_Entry_m19552_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m19553_gshared (ShimEnumerator_t3244 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m19553(__this, method) (( Object_t * (*) (ShimEnumerator_t3244 *, const MethodInfo*))ShimEnumerator_get_Key_m19553_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m19554_gshared (ShimEnumerator_t3244 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m19554(__this, method) (( Object_t * (*) (ShimEnumerator_t3244 *, const MethodInfo*))ShimEnumerator_get_Value_m19554_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.UInt16>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m19555_gshared (ShimEnumerator_t3244 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m19555(__this, method) (( Object_t * (*) (ShimEnumerator_t3244 *, const MethodInfo*))ShimEnumerator_get_Current_m19555_gshared)(__this, method)
