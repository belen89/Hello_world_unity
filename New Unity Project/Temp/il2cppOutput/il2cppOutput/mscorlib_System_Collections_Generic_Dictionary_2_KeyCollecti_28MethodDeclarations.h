#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct KeyCollection_t3324;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
struct Dictionary_2_t839;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3791;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Int32[]
struct Int32U5BU5D_t109;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>
#include "mscorlib_System_Collections_Generic_Dictionary_2_KeyCollecti_29.h"

// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void KeyCollection__ctor_m21210_gshared (KeyCollection_t3324 * __this, Dictionary_2_t839 * ___dictionary, const MethodInfo* method);
#define KeyCollection__ctor_m21210(__this, ___dictionary, method) (( void (*) (KeyCollection_t3324 *, Dictionary_2_t839 *, const MethodInfo*))KeyCollection__ctor_m21210_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<TKey>.Add(TKey)
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21211_gshared (KeyCollection_t3324 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21211(__this, ___item, method) (( void (*) (KeyCollection_t3324 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Add_m21211_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<TKey>.Clear()
extern "C" void KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21212_gshared (KeyCollection_t3324 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21212(__this, method) (( void (*) (KeyCollection_t3324 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Clear_m21212_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<TKey>.Contains(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21213_gshared (KeyCollection_t3324 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21213(__this, ___item, method) (( bool (*) (KeyCollection_t3324 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Contains_m21213_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<TKey>.Remove(TKey)
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21214_gshared (KeyCollection_t3324 * __this, int32_t ___item, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21214(__this, ___item, method) (( bool (*) (KeyCollection_t3324 *, int32_t, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_Remove_m21214_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TKey> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.Generic.IEnumerable<TKey>.GetEnumerator()
extern "C" Object_t* KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21215_gshared (KeyCollection_t3324 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21215(__this, method) (( Object_t* (*) (KeyCollection_t3324 *, const MethodInfo*))KeyCollection_System_Collections_Generic_IEnumerableU3CTKeyU3E_GetEnumerator_m21215_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void KeyCollection_System_Collections_ICollection_CopyTo_m21216_gshared (KeyCollection_t3324 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_CopyTo_m21216(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3324 *, Array_t *, int32_t, const MethodInfo*))KeyCollection_System_Collections_ICollection_CopyTo_m21216_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21217_gshared (KeyCollection_t3324 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21217(__this, method) (( Object_t * (*) (KeyCollection_t3324 *, const MethodInfo*))KeyCollection_System_Collections_IEnumerable_GetEnumerator_m21217_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.Generic.ICollection<TKey>.get_IsReadOnly()
extern "C" bool KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21218_gshared (KeyCollection_t3324 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21218(__this, method) (( bool (*) (KeyCollection_t3324 *, const MethodInfo*))KeyCollection_System_Collections_Generic_ICollectionU3CTKeyU3E_get_IsReadOnly_m21218_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21219_gshared (KeyCollection_t3324 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21219(__this, method) (( bool (*) (KeyCollection_t3324 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_IsSynchronized_m21219_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * KeyCollection_System_Collections_ICollection_get_SyncRoot_m21220_gshared (KeyCollection_t3324 * __this, const MethodInfo* method);
#define KeyCollection_System_Collections_ICollection_get_SyncRoot_m21220(__this, method) (( Object_t * (*) (KeyCollection_t3324 *, const MethodInfo*))KeyCollection_System_Collections_ICollection_get_SyncRoot_m21220_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::CopyTo(TKey[],System.Int32)
extern "C" void KeyCollection_CopyTo_m21221_gshared (KeyCollection_t3324 * __this, Int32U5BU5D_t109* ___array, int32_t ___index, const MethodInfo* method);
#define KeyCollection_CopyTo_m21221(__this, ___array, ___index, method) (( void (*) (KeyCollection_t3324 *, Int32U5BU5D_t109*, int32_t, const MethodInfo*))KeyCollection_CopyTo_m21221_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::GetEnumerator()
extern "C" Enumerator_t3325  KeyCollection_GetEnumerator_m21222_gshared (KeyCollection_t3324 * __this, const MethodInfo* method);
#define KeyCollection_GetEnumerator_m21222(__this, method) (( Enumerator_t3325  (*) (KeyCollection_t3324 *, const MethodInfo*))KeyCollection_GetEnumerator_m21222_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Vuforia.QCARManagerImpl/TrackableResultData>::get_Count()
extern "C" int32_t KeyCollection_get_Count_m21223_gshared (KeyCollection_t3324 * __this, const MethodInfo* method);
#define KeyCollection_get_Count_m21223(__this, method) (( int32_t (*) (KeyCollection_t3324 *, const MethodInfo*))KeyCollection_get_Count_m21223_gshared)(__this, method)
