#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t3603;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3594;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m25119_gshared (ShimEnumerator_t3603 * __this, Dictionary_2_t3594 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m25119(__this, ___host, method) (( void (*) (ShimEnumerator_t3603 *, Dictionary_2_t3594 *, const MethodInfo*))ShimEnumerator__ctor_m25119_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m25120_gshared (ShimEnumerator_t3603 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m25120(__this, method) (( bool (*) (ShimEnumerator_t3603 *, const MethodInfo*))ShimEnumerator_MoveNext_m25120_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t1596  ShimEnumerator_get_Entry_m25121_gshared (ShimEnumerator_t3603 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m25121(__this, method) (( DictionaryEntry_t1596  (*) (ShimEnumerator_t3603 *, const MethodInfo*))ShimEnumerator_get_Entry_m25121_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m25122_gshared (ShimEnumerator_t3603 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m25122(__this, method) (( Object_t * (*) (ShimEnumerator_t3603 *, const MethodInfo*))ShimEnumerator_get_Key_m25122_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m25123_gshared (ShimEnumerator_t3603 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m25123(__this, method) (( Object_t * (*) (ShimEnumerator_t3603 *, const MethodInfo*))ShimEnumerator_get_Value_m25123_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m25124_gshared (ShimEnumerator_t3603 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m25124(__this, method) (( Object_t * (*) (ShimEnumerator_t3603 *, const MethodInfo*))ShimEnumerator_get_Current_m25124_gshared)(__this, method)
