#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct ShimEnumerator_t3332;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct Dictionary_2_t839;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m21276_gshared (ShimEnumerator_t3332 * __this, Dictionary_2_t839 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m21276(__this, ___host, method) (( void (*) (ShimEnumerator_t3332 *, Dictionary_2_t839 *, const MethodInfo*))ShimEnumerator__ctor_m21276_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m21277_gshared (ShimEnumerator_t3332 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m21277(__this, method) (( bool (*) (ShimEnumerator_t3332 *, const MethodInfo*))ShimEnumerator_MoveNext_m21277_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Entry()
extern "C" DictionaryEntry_t1596  ShimEnumerator_get_Entry_m21278_gshared (ShimEnumerator_t3332 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m21278(__this, method) (( DictionaryEntry_t1596  (*) (ShimEnumerator_t3332 *, const MethodInfo*))ShimEnumerator_get_Entry_m21278_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m21279_gshared (ShimEnumerator_t3332 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m21279(__this, method) (( Object_t * (*) (ShimEnumerator_t3332 *, const MethodInfo*))ShimEnumerator_get_Key_m21279_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m21280_gshared (ShimEnumerator_t3332 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m21280(__this, method) (( Object_t * (*) (ShimEnumerator_t3332 *, const MethodInfo*))ShimEnumerator_get_Value_m21280_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m21281_gshared (ShimEnumerator_t3332 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m21281(__this, method) (( Object_t * (*) (ShimEnumerator_t3332 *, const MethodInfo*))ShimEnumerator_get_Current_m21281_gshared)(__this, method)
