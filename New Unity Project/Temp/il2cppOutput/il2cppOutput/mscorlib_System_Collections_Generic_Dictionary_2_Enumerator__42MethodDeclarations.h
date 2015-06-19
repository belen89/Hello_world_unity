#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t3687;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1532;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m25956_gshared (Enumerator_t3687 * __this, Dictionary_2_t1532 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m25956(__this, ___dictionary, method) (( void (*) (Enumerator_t3687 *, Dictionary_2_t1532 *, const MethodInfo*))Enumerator__ctor_m25956_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m25957_gshared (Enumerator_t3687 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m25957(__this, method) (( Object_t * (*) (Enumerator_t3687 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m25957_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1596  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25958_gshared (Enumerator_t3687 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25958(__this, method) (( DictionaryEntry_t1596  (*) (Enumerator_t3687 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m25958_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25959_gshared (Enumerator_t3687 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25959(__this, method) (( Object_t * (*) (Enumerator_t3687 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m25959_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25960_gshared (Enumerator_t3687 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25960(__this, method) (( Object_t * (*) (Enumerator_t3687 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m25960_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m25961_gshared (Enumerator_t3687 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m25961(__this, method) (( bool (*) (Enumerator_t3687 *, const MethodInfo*))Enumerator_MoveNext_m25961_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t3683  Enumerator_get_Current_m25962_gshared (Enumerator_t3687 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m25962(__this, method) (( KeyValuePair_2_t3683  (*) (Enumerator_t3687 *, const MethodInfo*))Enumerator_get_Current_m25962_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m25963_gshared (Enumerator_t3687 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m25963(__this, method) (( int32_t (*) (Enumerator_t3687 *, const MethodInfo*))Enumerator_get_CurrentKey_m25963_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m25964_gshared (Enumerator_t3687 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m25964(__this, method) (( int32_t (*) (Enumerator_t3687 *, const MethodInfo*))Enumerator_get_CurrentValue_m25964_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m25965_gshared (Enumerator_t3687 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m25965(__this, method) (( void (*) (Enumerator_t3687 *, const MethodInfo*))Enumerator_VerifyState_m25965_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m25966_gshared (Enumerator_t3687 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m25966(__this, method) (( void (*) (Enumerator_t3687 *, const MethodInfo*))Enumerator_VerifyCurrent_m25966_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m25967_gshared (Enumerator_t3687 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m25967(__this, method) (( void (*) (Enumerator_t3687 *, const MethodInfo*))Enumerator_Dispose_m25967_gshared)(__this, method)
