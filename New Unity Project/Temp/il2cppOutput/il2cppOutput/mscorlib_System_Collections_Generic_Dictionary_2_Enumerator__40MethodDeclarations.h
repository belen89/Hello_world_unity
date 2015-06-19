#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>
struct Enumerator_t3664;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct Dictionary_2_t3659;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Byte>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_44.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25742_gshared (Enumerator_t3664 * __this, Dictionary_2_t3659 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25742(__this, ___dictionary, method) (( void (*) (Enumerator_t3664 *, Dictionary_2_t3659 *, const MethodInfo*))Enumerator__ctor_m25742_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25743_gshared (Enumerator_t3664 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25743(__this, method) (( Object_t * (*) (Enumerator_t3664 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25743_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1596  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25744_gshared (Enumerator_t3664 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25744(__this, method) (( DictionaryEntry_t1596  (*) (Enumerator_t3664 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25744_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25745_gshared (Enumerator_t3664 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25745(__this, method) (( Object_t * (*) (Enumerator_t3664 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25745_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25746_gshared (Enumerator_t3664 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25746(__this, method) (( Object_t * (*) (Enumerator_t3664 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25746_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25747_gshared (Enumerator_t3664 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25747(__this, method) (( bool (*) (Enumerator_t3664 *, const MethodInfo*))Enumerator_MoveNext_m25747_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_Current()
extern "C" KeyValuePair_2_t3660  Enumerator_get_Current_m25748_gshared (Enumerator_t3664 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25748(__this, method) (( KeyValuePair_2_t3660  (*) (Enumerator_t3664 *, const MethodInfo*))Enumerator_get_Current_m25748_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m25749_gshared (Enumerator_t3664 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25749(__this, method) (( Object_t * (*) (Enumerator_t3664 *, const MethodInfo*))Enumerator_get_CurrentKey_m25749_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::get_CurrentValue()
extern "C" uint8_t Enumerator_get_CurrentValue_m25750_gshared (Enumerator_t3664 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25750(__this, method) (( uint8_t (*) (Enumerator_t3664 *, const MethodInfo*))Enumerator_get_CurrentValue_m25750_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyState()
extern "C" void Enumerator_VerifyState_m25751_gshared (Enumerator_t3664 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25751(__this, method) (( void (*) (Enumerator_t3664 *, const MethodInfo*))Enumerator_VerifyState_m25751_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25752_gshared (Enumerator_t3664 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25752(__this, method) (( void (*) (Enumerator_t3664 *, const MethodInfo*))Enumerator_VerifyCurrent_m25752_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Byte>::Dispose()
extern "C" void Enumerator_Dispose_m25753_gshared (Enumerator_t3664 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25753(__this, method) (( void (*) (Enumerator_t3664 *, const MethodInfo*))Enumerator_Dispose_m25753_gshared)(__this, method)
