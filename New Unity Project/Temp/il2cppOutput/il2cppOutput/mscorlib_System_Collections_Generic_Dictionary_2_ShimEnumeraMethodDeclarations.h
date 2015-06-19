#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t2981;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2967;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15664_gshared (ShimEnumerator_t2981 * __this, Dictionary_2_t2967 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15664(__this, ___host, method) (( void (*) (ShimEnumerator_t2981 *, Dictionary_2_t2967 *, const MethodInfo*))ShimEnumerator__ctor_m15664_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15665_gshared (ShimEnumerator_t2981 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15665(__this, method) (( bool (*) (ShimEnumerator_t2981 *, const MethodInfo*))ShimEnumerator_MoveNext_m15665_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1596  ShimEnumerator_get_Entry_m15666_gshared (ShimEnumerator_t2981 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15666(__this, method) (( DictionaryEntry_t1596  (*) (ShimEnumerator_t2981 *, const MethodInfo*))ShimEnumerator_get_Entry_m15666_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15667_gshared (ShimEnumerator_t2981 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15667(__this, method) (( Object_t * (*) (ShimEnumerator_t2981 *, const MethodInfo*))ShimEnumerator_get_Key_m15667_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15668_gshared (ShimEnumerator_t2981 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15668(__this, method) (( Object_t * (*) (ShimEnumerator_t2981 *, const MethodInfo*))ShimEnumerator_get_Value_m15668_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15669_gshared (ShimEnumerator_t2981 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15669(__this, method) (( Object_t * (*) (ShimEnumerator_t2981 *, const MethodInfo*))ShimEnumerator_get_Current_m15669_gshared)(__this, method)
