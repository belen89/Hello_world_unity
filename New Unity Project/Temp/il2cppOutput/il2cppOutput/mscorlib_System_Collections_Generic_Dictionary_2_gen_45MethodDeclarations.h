#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1532;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3783;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t3685;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t3689;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t2964;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t4147;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t4148;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t4149;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1595;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_46.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__42.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m25876_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m25876(__this, method) (( void (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2__ctor_m25876_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25877_gshared (Dictionary_2_t1532 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25877(__this, ___comparer, method) (( void (*) (Dictionary_2_t1532 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25877_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m25878_gshared (Dictionary_2_t1532 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m25878(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1532 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25878_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m25879_gshared (Dictionary_2_t1532 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m25879(__this, ___capacity, method) (( void (*) (Dictionary_2_t1532 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m25879_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m25880_gshared (Dictionary_2_t1532 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m25880(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1532 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m25880_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m25881_gshared (Dictionary_2_t1532 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m25881(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1532 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2__ctor_m25881_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25882_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25882(__this, method) (( Object_t* (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m25882_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25883_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25883(__this, method) (( Object_t* (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m25883_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m25884_gshared (Dictionary_2_t1532 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m25884(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1532 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m25884_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m25885_gshared (Dictionary_2_t1532 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m25885(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1532 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m25885_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m25886_gshared (Dictionary_2_t1532 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m25886(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1532 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m25886_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m25887_gshared (Dictionary_2_t1532 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m25887(__this, ___key, method) (( bool (*) (Dictionary_2_t1532 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m25887_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m25888_gshared (Dictionary_2_t1532 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m25888(__this, ___key, method) (( void (*) (Dictionary_2_t1532 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m25888_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25889_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25889(__this, method) (( bool (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m25889_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25890_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25890(__this, method) (( Object_t * (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m25890_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25891_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25891(__this, method) (( bool (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m25891_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25892_gshared (Dictionary_2_t1532 * __this, KeyValuePair_2_t3683  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25892(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1532 *, KeyValuePair_2_t3683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m25892_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25893_gshared (Dictionary_2_t1532 * __this, KeyValuePair_2_t3683  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25893(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1532 *, KeyValuePair_2_t3683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m25893_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25894_gshared (Dictionary_2_t1532 * __this, KeyValuePair_2U5BU5D_t4148* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25894(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1532 *, KeyValuePair_2U5BU5D_t4148*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m25894_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25895_gshared (Dictionary_2_t1532 * __this, KeyValuePair_2_t3683  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25895(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1532 *, KeyValuePair_2_t3683 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m25895_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m25896_gshared (Dictionary_2_t1532 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m25896(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1532 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m25896_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25897_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25897(__this, method) (( Object_t * (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m25897_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25898_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25898(__this, method) (( Object_t* (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m25898_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25899_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25899(__this, method) (( Object_t * (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m25899_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m25900_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m25900(__this, method) (( int32_t (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_get_Count_m25900_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m25901_gshared (Dictionary_2_t1532 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m25901(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1532 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m25901_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m25902_gshared (Dictionary_2_t1532 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m25902(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1532 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m25902_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m25903_gshared (Dictionary_2_t1532 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m25903(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1532 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m25903_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m25904_gshared (Dictionary_2_t1532 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m25904(__this, ___size, method) (( void (*) (Dictionary_2_t1532 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m25904_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m25905_gshared (Dictionary_2_t1532 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m25905(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1532 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m25905_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3683  Dictionary_2_make_pair_m25906_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m25906(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3683  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m25906_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m25907_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m25907(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m25907_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m25908_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m25908(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m25908_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m25909_gshared (Dictionary_2_t1532 * __this, KeyValuePair_2U5BU5D_t4148* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m25909(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1532 *, KeyValuePair_2U5BU5D_t4148*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m25909_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m25910_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m25910(__this, method) (( void (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_Resize_m25910_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m25911_gshared (Dictionary_2_t1532 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m25911(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1532 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m25911_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m25912_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m25912(__this, method) (( void (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_Clear_m25912_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m25913_gshared (Dictionary_2_t1532 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m25913(__this, ___key, method) (( bool (*) (Dictionary_2_t1532 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m25913_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m25914_gshared (Dictionary_2_t1532 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m25914(__this, ___value, method) (( bool (*) (Dictionary_2_t1532 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m25914_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m25915_gshared (Dictionary_2_t1532 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m25915(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1532 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2_GetObjectData_m25915_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m25916_gshared (Dictionary_2_t1532 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m25916(__this, ___sender, method) (( void (*) (Dictionary_2_t1532 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m25916_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m25917_gshared (Dictionary_2_t1532 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m25917(__this, ___key, method) (( bool (*) (Dictionary_2_t1532 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m25917_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m25918_gshared (Dictionary_2_t1532 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m25918(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1532 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m25918_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t3685 * Dictionary_2_get_Keys_m25919_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m25919(__this, method) (( KeyCollection_t3685 * (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_get_Keys_m25919_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t3689 * Dictionary_2_get_Values_m25920_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m25920(__this, method) (( ValueCollection_t3689 * (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_get_Values_m25920_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m25921_gshared (Dictionary_2_t1532 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m25921(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1532 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m25921_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m25922_gshared (Dictionary_2_t1532 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m25922(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1532 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m25922_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m25923_gshared (Dictionary_2_t1532 * __this, KeyValuePair_2_t3683  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m25923(__this, ___pair, method) (( bool (*) (Dictionary_2_t1532 *, KeyValuePair_2_t3683 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m25923_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3687  Dictionary_2_GetEnumerator_m25924_gshared (Dictionary_2_t1532 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m25924(__this, method) (( Enumerator_t3687  (*) (Dictionary_2_t1532 *, const MethodInfo*))Dictionary_2_GetEnumerator_m25924_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1596  Dictionary_2_U3CCopyToU3Em__0_m25925_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m25925(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m25925_gshared)(__this /* static, unused */, ___key, ___value, method)
