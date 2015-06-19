﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t3030;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t3025;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16286_gshared (Enumerator_t3030 * __this, Dictionary_2_t3025 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16286(__this, ___dictionary, method) (( void (*) (Enumerator_t3030 *, Dictionary_2_t3025 *, const MethodInfo*))Enumerator__ctor_m16286_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16287_gshared (Enumerator_t3030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16287(__this, method) (( Object_t * (*) (Enumerator_t3030 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16287_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1596  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16288_gshared (Enumerator_t3030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16288(__this, method) (( DictionaryEntry_t1596  (*) (Enumerator_t3030 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16288_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16289_gshared (Enumerator_t3030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16289(__this, method) (( Object_t * (*) (Enumerator_t3030 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16289_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16290_gshared (Enumerator_t3030 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16290(__this, method) (( Object_t * (*) (Enumerator_t3030 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16290_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16291_gshared (Enumerator_t3030 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16291(__this, method) (( bool (*) (Enumerator_t3030 *, const MethodInfo*))Enumerator_MoveNext_m16291_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t3026  Enumerator_get_Current_m16292_gshared (Enumerator_t3030 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16292(__this, method) (( KeyValuePair_2_t3026  (*) (Enumerator_t3030 *, const MethodInfo*))Enumerator_get_Current_m16292_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16293_gshared (Enumerator_t3030 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16293(__this, method) (( Object_t * (*) (Enumerator_t3030 *, const MethodInfo*))Enumerator_get_CurrentKey_m16293_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m16294_gshared (Enumerator_t3030 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16294(__this, method) (( Object_t * (*) (Enumerator_t3030 *, const MethodInfo*))Enumerator_get_CurrentValue_m16294_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m16295_gshared (Enumerator_t3030 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16295(__this, method) (( void (*) (Enumerator_t3030 *, const MethodInfo*))Enumerator_VerifyState_m16295_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16296_gshared (Enumerator_t3030 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16296(__this, method) (( void (*) (Enumerator_t3030 *, const MethodInfo*))Enumerator_VerifyCurrent_m16296_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m16297_gshared (Enumerator_t3030 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16297(__this, method) (( void (*) (Enumerator_t3030 *, const MethodInfo*))Enumerator_Dispose_m16297_gshared)(__this, method)
