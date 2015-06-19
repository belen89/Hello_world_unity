#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t2974;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t2967;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_7.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15612_gshared (Enumerator_t2974 * __this, Dictionary_2_t2967 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15612(__this, ___dictionary, method) (( void (*) (Enumerator_t2974 *, Dictionary_2_t2967 *, const MethodInfo*))Enumerator__ctor_m15612_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15613_gshared (Enumerator_t2974 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15613(__this, method) (( Object_t * (*) (Enumerator_t2974 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15613_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1596  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15614_gshared (Enumerator_t2974 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15614(__this, method) (( DictionaryEntry_t1596  (*) (Enumerator_t2974 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15614_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15615_gshared (Enumerator_t2974 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15615(__this, method) (( Object_t * (*) (Enumerator_t2974 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15615_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15616_gshared (Enumerator_t2974 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15616(__this, method) (( Object_t * (*) (Enumerator_t2974 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15616_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15617_gshared (Enumerator_t2974 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15617(__this, method) (( bool (*) (Enumerator_t2974 *, const MethodInfo*))Enumerator_MoveNext_m15617_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2968  Enumerator_get_Current_m15618_gshared (Enumerator_t2974 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15618(__this, method) (( KeyValuePair_2_t2968  (*) (Enumerator_t2974 *, const MethodInfo*))Enumerator_get_Current_m15618_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m15619_gshared (Enumerator_t2974 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15619(__this, method) (( int32_t (*) (Enumerator_t2974 *, const MethodInfo*))Enumerator_get_CurrentKey_m15619_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m15620_gshared (Enumerator_t2974 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15620(__this, method) (( Object_t * (*) (Enumerator_t2974 *, const MethodInfo*))Enumerator_get_CurrentValue_m15620_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m15621_gshared (Enumerator_t2974 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15621(__this, method) (( void (*) (Enumerator_t2974 *, const MethodInfo*))Enumerator_VerifyState_m15621_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15622_gshared (Enumerator_t2974 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15622(__this, method) (( void (*) (Enumerator_t2974 *, const MethodInfo*))Enumerator_VerifyCurrent_m15622_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m15623_gshared (Enumerator_t2974 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15623(__this, method) (( void (*) (Enumerator_t2974 *, const MethodInfo*))Enumerator_Dispose_m15623_gshared)(__this, method)
