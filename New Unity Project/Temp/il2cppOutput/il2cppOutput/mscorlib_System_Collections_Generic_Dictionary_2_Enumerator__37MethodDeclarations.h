#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t3597;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t3594;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_38.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25072_gshared (Enumerator_t3597 * __this, Dictionary_2_t3594 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25072(__this, ___dictionary, method) (( void (*) (Enumerator_t3597 *, Dictionary_2_t3594 *, const MethodInfo*))Enumerator__ctor_m25072_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25073_gshared (Enumerator_t3597 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25073(__this, method) (( Object_t * (*) (Enumerator_t3597 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25073_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1596  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25074_gshared (Enumerator_t3597 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25074(__this, method) (( DictionaryEntry_t1596  (*) (Enumerator_t3597 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25074_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25075_gshared (Enumerator_t3597 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25075(__this, method) (( Object_t * (*) (Enumerator_t3597 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25075_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25076_gshared (Enumerator_t3597 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25076(__this, method) (( Object_t * (*) (Enumerator_t3597 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25076_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25077_gshared (Enumerator_t3597 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25077(__this, method) (( bool (*) (Enumerator_t3597 *, const MethodInfo*))Enumerator_MoveNext_m25077_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t3569  Enumerator_get_Current_m25078_gshared (Enumerator_t3597 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25078(__this, method) (( KeyValuePair_2_t3569  (*) (Enumerator_t3597 *, const MethodInfo*))Enumerator_get_Current_m25078_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m25079_gshared (Enumerator_t3597 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25079(__this, method) (( Object_t * (*) (Enumerator_t3597 *, const MethodInfo*))Enumerator_get_CurrentKey_m25079_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t3026  Enumerator_get_CurrentValue_m25080_gshared (Enumerator_t3597 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25080(__this, method) (( KeyValuePair_2_t3026  (*) (Enumerator_t3597 *, const MethodInfo*))Enumerator_get_CurrentValue_m25080_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m25081_gshared (Enumerator_t3597 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25081(__this, method) (( void (*) (Enumerator_t3597 *, const MethodInfo*))Enumerator_VerifyState_m25081_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25082_gshared (Enumerator_t3597 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25082(__this, method) (( void (*) (Enumerator_t3597 *, const MethodInfo*))Enumerator_VerifyCurrent_m25082_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m25083_gshared (Enumerator_t3597 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25083(__this, method) (( void (*) (Enumerator_t3597 *, const MethodInfo*))Enumerator_Dispose_m25083_gshared)(__this, method)
