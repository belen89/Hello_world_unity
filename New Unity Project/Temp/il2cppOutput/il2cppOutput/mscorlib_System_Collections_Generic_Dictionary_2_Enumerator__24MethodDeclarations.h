﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
struct Enumerator_t3342;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
struct Dictionary_2_t840;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_26.h"
// Vuforia.QCARManagerImpl/VirtualButtonData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Vir.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21374_gshared (Enumerator_t3342 * __this, Dictionary_2_t840 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m21374(__this, ___dictionary, method) (( void (*) (Enumerator_t3342 *, Dictionary_2_t840 *, const MethodInfo*))Enumerator__ctor_m21374_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21375_gshared (Enumerator_t3342 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21375(__this, method) (( Object_t * (*) (Enumerator_t3342 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21375_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1596  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21376_gshared (Enumerator_t3342 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21376(__this, method) (( DictionaryEntry_t1596  (*) (Enumerator_t3342 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m21376_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21377_gshared (Enumerator_t3342 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21377(__this, method) (( Object_t * (*) (Enumerator_t3342 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m21377_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21378_gshared (Enumerator_t3342 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21378(__this, method) (( Object_t * (*) (Enumerator_t3342 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m21378_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21379_gshared (Enumerator_t3342 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21379(__this, method) (( bool (*) (Enumerator_t3342 *, const MethodInfo*))Enumerator_MoveNext_m21379_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_Current()
extern "C" KeyValuePair_2_t3337  Enumerator_get_Current_m21380_gshared (Enumerator_t3342 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21380(__this, method) (( KeyValuePair_2_t3337  (*) (Enumerator_t3342 *, const MethodInfo*))Enumerator_get_Current_m21380_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m21381_gshared (Enumerator_t3342 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m21381(__this, method) (( int32_t (*) (Enumerator_t3342 *, const MethodInfo*))Enumerator_get_CurrentKey_m21381_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::get_CurrentValue()
extern "C" VirtualButtonData_t611  Enumerator_get_CurrentValue_m21382_gshared (Enumerator_t3342 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m21382(__this, method) (( VirtualButtonData_t611  (*) (Enumerator_t3342 *, const MethodInfo*))Enumerator_get_CurrentValue_m21382_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::VerifyState()
extern "C" void Enumerator_VerifyState_m21383_gshared (Enumerator_t3342 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m21383(__this, method) (( void (*) (Enumerator_t3342 *, const MethodInfo*))Enumerator_VerifyState_m21383_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m21384_gshared (Enumerator_t3342 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m21384(__this, method) (( void (*) (Enumerator_t3342 *, const MethodInfo*))Enumerator_VerifyCurrent_m21384_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,Vuforia.QCARManagerImpl/VirtualButtonData>::Dispose()
extern "C" void Enumerator_Dispose_m21385_gshared (Enumerator_t3342 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21385(__this, method) (( void (*) (Enumerator_t3342 *, const MethodInfo*))Enumerator_Dispose_m21385_gshared)(__this, method)