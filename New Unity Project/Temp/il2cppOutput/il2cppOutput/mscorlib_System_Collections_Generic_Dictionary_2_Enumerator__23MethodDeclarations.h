#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct Enumerator_t3326;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct Dictionary_2_t839;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"
// Vuforia.QCARManagerImpl/TrackableResultData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Tra.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21229_gshared (Enumerator_t3326 * __this, Dictionary_2_t839 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21229(__this, ___dictionary, method) (( void (*) (Enumerator_t3326 *, Dictionary_2_t839 *, const MethodInfo*))Enumerator__ctor_m21229_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21230_gshared (Enumerator_t3326 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21230(__this, method) (( Object_t * (*) (Enumerator_t3326 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21230_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1596  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21231_gshared (Enumerator_t3326 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21231(__this, method) (( DictionaryEntry_t1596  (*) (Enumerator_t3326 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21231_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21232_gshared (Enumerator_t3326 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21232(__this, method) (( Object_t * (*) (Enumerator_t3326 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21232_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21233_gshared (Enumerator_t3326 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21233(__this, method) (( Object_t * (*) (Enumerator_t3326 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21233_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21234_gshared (Enumerator_t3326 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21234(__this, method) (( bool (*) (Enumerator_t3326 *, const MethodInfo*))Enumerator_MoveNext_m21234_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Current()
extern "C" KeyValuePair_2_t3322  Enumerator_get_Current_m21235_gshared (Enumerator_t3326 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21235(__this, method) (( KeyValuePair_2_t3322  (*) (Enumerator_t3326 *, const MethodInfo*))Enumerator_get_Current_m21235_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m21236_gshared (Enumerator_t3326 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21236(__this, method) (( int32_t (*) (Enumerator_t3326 *, const MethodInfo*))Enumerator_get_CurrentKey_m21236_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_CurrentValue()
extern "C" TrackableResultData_t610  Enumerator_get_CurrentValue_m21237_gshared (Enumerator_t3326 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21237(__this, method) (( TrackableResultData_t610  (*) (Enumerator_t3326 *, const MethodInfo*))Enumerator_get_CurrentValue_m21237_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::VerifyState()
extern "C" void Enumerator_VerifyState_m21238_gshared (Enumerator_t3326 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21238(__this, method) (( void (*) (Enumerator_t3326 *, const MethodInfo*))Enumerator_VerifyState_m21238_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21239_gshared (Enumerator_t3326 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21239(__this, method) (( void (*) (Enumerator_t3326 *, const MethodInfo*))Enumerator_VerifyCurrent_m21239_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::Dispose()
extern "C" void Enumerator_Dispose_m21240_gshared (Enumerator_t3326 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21240(__this, method) (( void (*) (Enumerator_t3326 *, const MethodInfo*))Enumerator_Dispose_m21240_gshared)(__this, method)
