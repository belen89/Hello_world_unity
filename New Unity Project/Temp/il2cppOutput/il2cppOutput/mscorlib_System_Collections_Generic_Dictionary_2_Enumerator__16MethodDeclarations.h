#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>
struct Enumerator_t3238;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.UInt16>
struct Dictionary_2_t3233;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.UInt16>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m19503_gshared (Enumerator_t3238 * __this, Dictionary_2_t3233 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m19503(__this, ___dictionary, method) (( void (*) (Enumerator_t3238 *, Dictionary_2_t3233 *, const MethodInfo*))Enumerator__ctor_m19503_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m19504_gshared (Enumerator_t3238 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m19504(__this, method) (( Object_t * (*) (Enumerator_t3238 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m19504_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1596  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19505_gshared (Enumerator_t3238 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19505(__this, method) (( DictionaryEntry_t1596  (*) (Enumerator_t3238 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m19505_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19506_gshared (Enumerator_t3238 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19506(__this, method) (( Object_t * (*) (Enumerator_t3238 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m19506_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19507_gshared (Enumerator_t3238 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19507(__this, method) (( Object_t * (*) (Enumerator_t3238 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m19507_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::MoveNext()
extern "C" bool Enumerator_MoveNext_m19508_gshared (Enumerator_t3238 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m19508(__this, method) (( bool (*) (Enumerator_t3238 *, const MethodInfo*))Enumerator_MoveNext_m19508_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_Current()
extern "C" KeyValuePair_2_t3234  Enumerator_get_Current_m19509_gshared (Enumerator_t3238 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m19509(__this, method) (( KeyValuePair_2_t3234  (*) (Enumerator_t3238 *, const MethodInfo*))Enumerator_get_Current_m19509_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m19510_gshared (Enumerator_t3238 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m19510(__this, method) (( Object_t * (*) (Enumerator_t3238 *, const MethodInfo*))Enumerator_get_CurrentKey_m19510_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::get_CurrentValue()
extern "C" uint16_t Enumerator_get_CurrentValue_m19511_gshared (Enumerator_t3238 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m19511(__this, method) (( uint16_t (*) (Enumerator_t3238 *, const MethodInfo*))Enumerator_get_CurrentValue_m19511_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::VerifyState()
extern "C" void Enumerator_VerifyState_m19512_gshared (Enumerator_t3238 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m19512(__this, method) (( void (*) (Enumerator_t3238 *, const MethodInfo*))Enumerator_VerifyState_m19512_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m19513_gshared (Enumerator_t3238 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m19513(__this, method) (( void (*) (Enumerator_t3238 *, const MethodInfo*))Enumerator_VerifyCurrent_m19513_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.UInt16>::Dispose()
extern "C" void Enumerator_Dispose_m19514_gshared (Enumerator_t3238 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m19514(__this, method) (( void (*) (Enumerator_t3238 *, const MethodInfo*))Enumerator_Dispose_m19514_gshared)(__this, method)
