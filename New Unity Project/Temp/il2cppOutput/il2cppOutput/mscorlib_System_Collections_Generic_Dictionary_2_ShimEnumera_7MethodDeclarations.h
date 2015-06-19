#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>
struct ShimEnumerator_t3559;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3547;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m24401_gshared (ShimEnumerator_t3559 * __this, Dictionary_2_t3547 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m24401(__this, ___host, method) (( void (*) (ShimEnumerator_t3559 *, Dictionary_2_t3547 *, const MethodInfo*))ShimEnumerator__ctor_m24401_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m24402_gshared (ShimEnumerator_t3559 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m24402(__this, method) (( bool (*) (ShimEnumerator_t3559 *, const MethodInfo*))ShimEnumerator_MoveNext_m24402_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1596  ShimEnumerator_get_Entry_m24403_gshared (ShimEnumerator_t3559 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m24403(__this, method) (( DictionaryEntry_t1596  (*) (ShimEnumerator_t3559 *, const MethodInfo*))ShimEnumerator_get_Entry_m24403_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m24404_gshared (ShimEnumerator_t3559 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m24404(__this, method) (( Object_t * (*) (ShimEnumerator_t3559 *, const MethodInfo*))ShimEnumerator_get_Key_m24404_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m24405_gshared (ShimEnumerator_t3559 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m24405(__this, method) (( Object_t * (*) (ShimEnumerator_t3559 *, const MethodInfo*))ShimEnumerator_get_Value_m24405_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.UInt64,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m24406_gshared (ShimEnumerator_t3559 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m24406(__this, method) (( Object_t * (*) (ShimEnumerator_t3559 *, const MethodInfo*))ShimEnumerator_get_Current_m24406_gshared)(__this, method)
