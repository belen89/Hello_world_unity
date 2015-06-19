#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t2996;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1134;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t3783;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t3002;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t3006;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t2998;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t3798;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3799;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t3800;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1595;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__6.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m15874_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m15874(__this, method) (( void (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2__ctor_m15874_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15875_gshared (Dictionary_2_t2996 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15875(__this, ___comparer, method) (( void (*) (Dictionary_2_t2996 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15875_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m15876_gshared (Dictionary_2_t2996 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m15876(__this, ___dictionary, method) (( void (*) (Dictionary_2_t2996 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15876_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m15877_gshared (Dictionary_2_t2996 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m15877(__this, ___capacity, method) (( void (*) (Dictionary_2_t2996 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m15877_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m15878_gshared (Dictionary_2_t2996 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m15878(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t2996 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m15878_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m15879_gshared (Dictionary_2_t2996 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m15879(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2996 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2__ctor_m15879_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15880_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15880(__this, method) (( Object_t* (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m15880_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15881_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15881(__this, method) (( Object_t* (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m15881_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m15882_gshared (Dictionary_2_t2996 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m15882(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2996 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m15882_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m15883_gshared (Dictionary_2_t2996 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m15883(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2996 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m15883_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m15884_gshared (Dictionary_2_t2996 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m15884(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2996 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m15884_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m15885_gshared (Dictionary_2_t2996 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m15885(__this, ___key, method) (( bool (*) (Dictionary_2_t2996 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m15885_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m15886_gshared (Dictionary_2_t2996 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m15886(__this, ___key, method) (( void (*) (Dictionary_2_t2996 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m15886_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15887_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15887(__this, method) (( bool (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m15887_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15888_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15888(__this, method) (( Object_t * (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m15888_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15889_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15889(__this, method) (( bool (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m15889_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15890_gshared (Dictionary_2_t2996 * __this, KeyValuePair_2_t3000  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15890(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t2996 *, KeyValuePair_2_t3000 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m15890_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15891_gshared (Dictionary_2_t2996 * __this, KeyValuePair_2_t3000  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15891(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2996 *, KeyValuePair_2_t3000 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m15891_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15892_gshared (Dictionary_2_t2996 * __this, KeyValuePair_2U5BU5D_t3799* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15892(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2996 *, KeyValuePair_2U5BU5D_t3799*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m15892_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15893_gshared (Dictionary_2_t2996 * __this, KeyValuePair_2_t3000  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15893(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t2996 *, KeyValuePair_2_t3000 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m15893_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m15894_gshared (Dictionary_2_t2996 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m15894(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2996 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m15894_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15895_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15895(__this, method) (( Object_t * (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m15895_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15896_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15896(__this, method) (( Object_t* (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m15896_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15897_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15897(__this, method) (( Object_t * (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m15897_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m15898_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m15898(__this, method) (( int32_t (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_get_Count_m15898_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m15899_gshared (Dictionary_2_t2996 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m15899(__this, ___key, method) (( int32_t (*) (Dictionary_2_t2996 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m15899_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m15900_gshared (Dictionary_2_t2996 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m15900(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2996 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m15900_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m15901_gshared (Dictionary_2_t2996 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m15901(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t2996 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m15901_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m15902_gshared (Dictionary_2_t2996 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m15902(__this, ___size, method) (( void (*) (Dictionary_2_t2996 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m15902_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m15903_gshared (Dictionary_2_t2996 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m15903(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2996 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m15903_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t3000  Dictionary_2_make_pair_m15904_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m15904(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t3000  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m15904_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m15905_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m15905(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m15905_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m15906_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m15906(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m15906_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m15907_gshared (Dictionary_2_t2996 * __this, KeyValuePair_2U5BU5D_t3799* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m15907(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t2996 *, KeyValuePair_2U5BU5D_t3799*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m15907_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m15908_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m15908(__this, method) (( void (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_Resize_m15908_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m15909_gshared (Dictionary_2_t2996 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m15909(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t2996 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m15909_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m15910_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m15910(__this, method) (( void (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_Clear_m15910_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m15911_gshared (Dictionary_2_t2996 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m15911(__this, ___key, method) (( bool (*) (Dictionary_2_t2996 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m15911_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m15912_gshared (Dictionary_2_t2996 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m15912(__this, ___value, method) (( bool (*) (Dictionary_2_t2996 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m15912_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m15913_gshared (Dictionary_2_t2996 * __this, SerializationInfo_t1144 * ___info, StreamingContext_t1145  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m15913(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t2996 *, SerializationInfo_t1144 *, StreamingContext_t1145 , const MethodInfo*))Dictionary_2_GetObjectData_m15913_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m15914_gshared (Dictionary_2_t2996 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m15914(__this, ___sender, method) (( void (*) (Dictionary_2_t2996 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m15914_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m15915_gshared (Dictionary_2_t2996 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m15915(__this, ___key, method) (( bool (*) (Dictionary_2_t2996 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m15915_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m15916_gshared (Dictionary_2_t2996 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m15916(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t2996 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m15916_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t3002 * Dictionary_2_get_Keys_m15917_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m15917(__this, method) (( KeyCollection_t3002 * (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_get_Keys_m15917_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t3006 * Dictionary_2_get_Values_m15918_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m15918(__this, method) (( ValueCollection_t3006 * (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_get_Values_m15918_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m15919_gshared (Dictionary_2_t2996 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m15919(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t2996 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m15919_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m15920_gshared (Dictionary_2_t2996 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m15920(__this, ___value, method) (( int32_t (*) (Dictionary_2_t2996 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m15920_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m15921_gshared (Dictionary_2_t2996 * __this, KeyValuePair_2_t3000  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m15921(__this, ___pair, method) (( bool (*) (Dictionary_2_t2996 *, KeyValuePair_2_t3000 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m15921_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t3004  Dictionary_2_GetEnumerator_m15922_gshared (Dictionary_2_t2996 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m15922(__this, method) (( Enumerator_t3004  (*) (Dictionary_2_t2996 *, const MethodInfo*))Dictionary_2_GetEnumerator_m15922_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1596  Dictionary_2_U3CCopyToU3Em__0_m15923_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m15923(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1596  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m15923_gshared)(__this /* static, unused */, ___key, ___value, method)
