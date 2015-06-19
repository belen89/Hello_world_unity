#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t3004;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2996;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15954_gshared (Enumerator_t3004 * __this, Dictionary_2_t2996 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15954(__this, ___dictionary, method) (( void (*) (Enumerator_t3004 *, Dictionary_2_t2996 *, const MethodInfo*))Enumerator__ctor_m15954_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15955_gshared (Enumerator_t3004 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15955(__this, method) (( Object_t * (*) (Enumerator_t3004 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15955_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1596  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15956_gshared (Enumerator_t3004 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15956(__this, method) (( DictionaryEntry_t1596  (*) (Enumerator_t3004 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15956_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15957_gshared (Enumerator_t3004 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15957(__this, method) (( Object_t * (*) (Enumerator_t3004 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15957_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15958_gshared (Enumerator_t3004 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15958(__this, method) (( Object_t * (*) (Enumerator_t3004 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15958_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15959_gshared (Enumerator_t3004 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15959(__this, method) (( bool (*) (Enumerator_t3004 *, const MethodInfo*))Enumerator_MoveNext_m15959_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t3000  Enumerator_get_Current_m15960_gshared (Enumerator_t3004 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15960(__this, method) (( KeyValuePair_2_t3000  (*) (Enumerator_t3004 *, const MethodInfo*))Enumerator_get_Current_m15960_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m15961_gshared (Enumerator_t3004 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15961(__this, method) (( Object_t * (*) (Enumerator_t3004 *, const MethodInfo*))Enumerator_get_CurrentKey_m15961_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m15962_gshared (Enumerator_t3004 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15962(__this, method) (( int32_t (*) (Enumerator_t3004 *, const MethodInfo*))Enumerator_get_CurrentValue_m15962_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m15963_gshared (Enumerator_t3004 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15963(__this, method) (( void (*) (Enumerator_t3004 *, const MethodInfo*))Enumerator_VerifyState_m15963_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15964_gshared (Enumerator_t3004 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15964(__this, method) (( void (*) (Enumerator_t3004 *, const MethodInfo*))Enumerator_VerifyCurrent_m15964_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m15965_gshared (Enumerator_t3004 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15965(__this, method) (( void (*) (Enumerator_t3004 *, const MethodInfo*))Enumerator_Dispose_m15965_gshared)(__this, method)
