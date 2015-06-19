#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t3515;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t3509;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_34.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m23918_gshared (Enumerator_t3515 * __this, Dictionary_2_t3509 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m23918(__this, ___dictionary, method) (( void (*) (Enumerator_t3515 *, Dictionary_2_t3509 *, const MethodInfo*))Enumerator__ctor_m23918_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m23919_gshared (Enumerator_t3515 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m23919(__this, method) (( Object_t * (*) (Enumerator_t3515 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m23919_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1596  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23920_gshared (Enumerator_t3515 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23920(__this, method) (( DictionaryEntry_t1596  (*) (Enumerator_t3515 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m23920_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23921_gshared (Enumerator_t3515 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23921(__this, method) (( Object_t * (*) (Enumerator_t3515 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m23921_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23922_gshared (Enumerator_t3515 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23922(__this, method) (( Object_t * (*) (Enumerator_t3515 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m23922_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m23923_gshared (Enumerator_t3515 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m23923(__this, method) (( bool (*) (Enumerator_t3515 *, const MethodInfo*))Enumerator_MoveNext_m23923_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t3510  Enumerator_get_Current_m23924_gshared (Enumerator_t3515 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m23924(__this, method) (( KeyValuePair_2_t3510  (*) (Enumerator_t3515 *, const MethodInfo*))Enumerator_get_Current_m23924_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m23925_gshared (Enumerator_t3515 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m23925(__this, method) (( Object_t * (*) (Enumerator_t3515 *, const MethodInfo*))Enumerator_get_CurrentKey_m23925_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m23926_gshared (Enumerator_t3515 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m23926(__this, method) (( int64_t (*) (Enumerator_t3515 *, const MethodInfo*))Enumerator_get_CurrentValue_m23926_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m23927_gshared (Enumerator_t3515 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m23927(__this, method) (( void (*) (Enumerator_t3515 *, const MethodInfo*))Enumerator_VerifyState_m23927_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m23928_gshared (Enumerator_t3515 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m23928(__this, method) (( void (*) (Enumerator_t3515 *, const MethodInfo*))Enumerator_VerifyCurrent_m23928_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m23929_gshared (Enumerator_t3515 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m23929(__this, method) (( void (*) (Enumerator_t3515 *, const MethodInfo*))Enumerator_Dispose_m23929_gshared)(__this, method)
