#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Enumerator_t3381;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t3375;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,Vuforia.WebCamProfile/ProfileData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_28.h"
// Vuforia.WebCamProfile/ProfileData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21915_gshared (Enumerator_t3381 * __this, Dictionary_2_t3375 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21915(__this, ___dictionary, method) (( void (*) (Enumerator_t3381 *, Dictionary_2_t3375 *, const MethodInfo*))Enumerator__ctor_m21915_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21916_gshared (Enumerator_t3381 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21916(__this, method) (( Object_t * (*) (Enumerator_t3381 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21916_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1596  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21917_gshared (Enumerator_t3381 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21917(__this, method) (( DictionaryEntry_t1596  (*) (Enumerator_t3381 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21917_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21918_gshared (Enumerator_t3381 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21918(__this, method) (( Object_t * (*) (Enumerator_t3381 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21918_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21919_gshared (Enumerator_t3381 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21919(__this, method) (( Object_t * (*) (Enumerator_t3381 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21919_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21920_gshared (Enumerator_t3381 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21920(__this, method) (( bool (*) (Enumerator_t3381 *, const MethodInfo*))Enumerator_MoveNext_m21920_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Current()
extern "C" KeyValuePair_2_t3376  Enumerator_get_Current_m21921_gshared (Enumerator_t3381 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21921(__this, method) (( KeyValuePair_2_t3376  (*) (Enumerator_t3381 *, const MethodInfo*))Enumerator_get_Current_m21921_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m21922_gshared (Enumerator_t3381 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21922(__this, method) (( Object_t * (*) (Enumerator_t3381 *, const MethodInfo*))Enumerator_get_CurrentKey_m21922_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_CurrentValue()
extern "C" ProfileData_t702  Enumerator_get_CurrentValue_m21923_gshared (Enumerator_t3381 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21923(__this, method) (( ProfileData_t702  (*) (Enumerator_t3381 *, const MethodInfo*))Enumerator_get_CurrentValue_m21923_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::VerifyState()
extern "C" void Enumerator_VerifyState_m21924_gshared (Enumerator_t3381 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21924(__this, method) (( void (*) (Enumerator_t3381 *, const MethodInfo*))Enumerator_VerifyState_m21924_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21925_gshared (Enumerator_t3381 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21925(__this, method) (( void (*) (Enumerator_t3381 *, const MethodInfo*))Enumerator_VerifyCurrent_m21925_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::Dispose()
extern "C" void Enumerator_Dispose_m21926_gshared (Enumerator_t3381 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21926(__this, method) (( void (*) (Enumerator_t3381 *, const MethodInfo*))Enumerator_Dispose_m21926_gshared)(__this, method)
