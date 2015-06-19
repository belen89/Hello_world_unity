﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>
struct Enumerator_t3553;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.Object>
struct Dictionary_2_t3547;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.UInt64,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_36.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m24354_gshared (Enumerator_t3553 * __this, Dictionary_2_t3547 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m24354(__this, ___dictionary, method) (( void (*) (Enumerator_t3553 *, Dictionary_2_t3547 *, const MethodInfo*))Enumerator__ctor_m24354_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m24355_gshared (Enumerator_t3553 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m24355(__this, method) (( Object_t * (*) (Enumerator_t3553 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m24355_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1596  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24356_gshared (Enumerator_t3553 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24356(__this, method) (( DictionaryEntry_t1596  (*) (Enumerator_t3553 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m24356_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24357_gshared (Enumerator_t3553 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24357(__this, method) (( Object_t * (*) (Enumerator_t3553 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m24357_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24358_gshared (Enumerator_t3553 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24358(__this, method) (( Object_t * (*) (Enumerator_t3553 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m24358_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m24359_gshared (Enumerator_t3553 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m24359(__this, method) (( bool (*) (Enumerator_t3553 *, const MethodInfo*))Enumerator_MoveNext_m24359_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3548  Enumerator_get_Current_m24360_gshared (Enumerator_t3553 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m24360(__this, method) (( KeyValuePair_2_t3548  (*) (Enumerator_t3553 *, const MethodInfo*))Enumerator_get_Current_m24360_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m24361_gshared (Enumerator_t3553 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m24361(__this, method) (( uint64_t (*) (Enumerator_t3553 *, const MethodInfo*))Enumerator_get_CurrentKey_m24361_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m24362_gshared (Enumerator_t3553 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m24362(__this, method) (( Object_t * (*) (Enumerator_t3553 *, const MethodInfo*))Enumerator_get_CurrentValue_m24362_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m24363_gshared (Enumerator_t3553 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m24363(__this, method) (( void (*) (Enumerator_t3553 *, const MethodInfo*))Enumerator_VerifyState_m24363_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m24364_gshared (Enumerator_t3553 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m24364(__this, method) (( void (*) (Enumerator_t3553 *, const MethodInfo*))Enumerator_VerifyCurrent_m24364_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.UInt64,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m24365_gshared (Enumerator_t3553 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m24365(__this, method) (( void (*) (Enumerator_t3553 *, const MethodInfo*))Enumerator_Dispose_m24365_gshared)(__this, method)