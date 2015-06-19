#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Int32>
struct Collection_1_t3163;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Int32[]
struct Int32U5BU5D_t109;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t3791;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t3161;

// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::.ctor()
extern "C" void Collection_1__ctor_m18341_gshared (Collection_1_t3163 * __this, const MethodInfo* method);
#define Collection_1__ctor_m18341(__this, method) (( void (*) (Collection_1_t3163 *, const MethodInfo*))Collection_1__ctor_m18341_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18342_gshared (Collection_1_t3163 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18342(__this, method) (( bool (*) (Collection_1_t3163 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m18342_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m18343_gshared (Collection_1_t3163 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m18343(__this, ___array, ___index, method) (( void (*) (Collection_1_t3163 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m18343_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m18344_gshared (Collection_1_t3163 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m18344(__this, method) (( Object_t * (*) (Collection_1_t3163 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m18344_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m18345_gshared (Collection_1_t3163 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m18345(__this, ___value, method) (( int32_t (*) (Collection_1_t3163 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m18345_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m18346_gshared (Collection_1_t3163 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m18346(__this, ___value, method) (( bool (*) (Collection_1_t3163 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m18346_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m18347_gshared (Collection_1_t3163 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m18347(__this, ___value, method) (( int32_t (*) (Collection_1_t3163 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m18347_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m18348_gshared (Collection_1_t3163 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m18348(__this, ___index, ___value, method) (( void (*) (Collection_1_t3163 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m18348_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m18349_gshared (Collection_1_t3163 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m18349(__this, ___value, method) (( void (*) (Collection_1_t3163 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m18349_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m18350_gshared (Collection_1_t3163 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m18350(__this, method) (( bool (*) (Collection_1_t3163 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m18350_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m18351_gshared (Collection_1_t3163 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m18351(__this, method) (( Object_t * (*) (Collection_1_t3163 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m18351_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m18352_gshared (Collection_1_t3163 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m18352(__this, method) (( bool (*) (Collection_1_t3163 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m18352_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m18353_gshared (Collection_1_t3163 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m18353(__this, method) (( bool (*) (Collection_1_t3163 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m18353_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m18354_gshared (Collection_1_t3163 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m18354(__this, ___index, method) (( Object_t * (*) (Collection_1_t3163 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m18354_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m18355_gshared (Collection_1_t3163 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m18355(__this, ___index, ___value, method) (( void (*) (Collection_1_t3163 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m18355_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Add(T)
extern "C" void Collection_1_Add_m18356_gshared (Collection_1_t3163 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Add_m18356(__this, ___item, method) (( void (*) (Collection_1_t3163 *, int32_t, const MethodInfo*))Collection_1_Add_m18356_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Clear()
extern "C" void Collection_1_Clear_m18357_gshared (Collection_1_t3163 * __this, const MethodInfo* method);
#define Collection_1_Clear_m18357(__this, method) (( void (*) (Collection_1_t3163 *, const MethodInfo*))Collection_1_Clear_m18357_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::ClearItems()
extern "C" void Collection_1_ClearItems_m18358_gshared (Collection_1_t3163 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m18358(__this, method) (( void (*) (Collection_1_t3163 *, const MethodInfo*))Collection_1_ClearItems_m18358_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Contains(T)
extern "C" bool Collection_1_Contains_m18359_gshared (Collection_1_t3163 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Contains_m18359(__this, ___item, method) (( bool (*) (Collection_1_t3163 *, int32_t, const MethodInfo*))Collection_1_Contains_m18359_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m18360_gshared (Collection_1_t3163 * __this, Int32U5BU5D_t109* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m18360(__this, ___array, ___index, method) (( void (*) (Collection_1_t3163 *, Int32U5BU5D_t109*, int32_t, const MethodInfo*))Collection_1_CopyTo_m18360_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Int32>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m18361_gshared (Collection_1_t3163 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m18361(__this, method) (( Object_t* (*) (Collection_1_t3163 *, const MethodInfo*))Collection_1_GetEnumerator_m18361_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m18362_gshared (Collection_1_t3163 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m18362(__this, ___item, method) (( int32_t (*) (Collection_1_t3163 *, int32_t, const MethodInfo*))Collection_1_IndexOf_m18362_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m18363_gshared (Collection_1_t3163 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_Insert_m18363(__this, ___index, ___item, method) (( void (*) (Collection_1_t3163 *, int32_t, int32_t, const MethodInfo*))Collection_1_Insert_m18363_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m18364_gshared (Collection_1_t3163 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m18364(__this, ___index, ___item, method) (( void (*) (Collection_1_t3163 *, int32_t, int32_t, const MethodInfo*))Collection_1_InsertItem_m18364_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::Remove(T)
extern "C" bool Collection_1_Remove_m18365_gshared (Collection_1_t3163 * __this, int32_t ___item, const MethodInfo* method);
#define Collection_1_Remove_m18365(__this, ___item, method) (( bool (*) (Collection_1_t3163 *, int32_t, const MethodInfo*))Collection_1_Remove_m18365_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m18366_gshared (Collection_1_t3163 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m18366(__this, ___index, method) (( void (*) (Collection_1_t3163 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m18366_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m18367_gshared (Collection_1_t3163 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m18367(__this, ___index, method) (( void (*) (Collection_1_t3163 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m18367_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Int32>::get_Count()
extern "C" int32_t Collection_1_get_Count_m18368_gshared (Collection_1_t3163 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m18368(__this, method) (( int32_t (*) (Collection_1_t3163 *, const MethodInfo*))Collection_1_get_Count_m18368_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::get_Item(System.Int32)
extern "C" int32_t Collection_1_get_Item_m18369_gshared (Collection_1_t3163 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m18369(__this, ___index, method) (( int32_t (*) (Collection_1_t3163 *, int32_t, const MethodInfo*))Collection_1_get_Item_m18369_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m18370_gshared (Collection_1_t3163 * __this, int32_t ___index, int32_t ___value, const MethodInfo* method);
#define Collection_1_set_Item_m18370(__this, ___index, ___value, method) (( void (*) (Collection_1_t3163 *, int32_t, int32_t, const MethodInfo*))Collection_1_set_Item_m18370_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m18371_gshared (Collection_1_t3163 * __this, int32_t ___index, int32_t ___item, const MethodInfo* method);
#define Collection_1_SetItem_m18371(__this, ___index, ___item, method) (( void (*) (Collection_1_t3163 *, int32_t, int32_t, const MethodInfo*))Collection_1_SetItem_m18371_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m18372_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m18372(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m18372_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Int32>::ConvertItem(System.Object)
extern "C" int32_t Collection_1_ConvertItem_m18373_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m18373(__this /* static, unused */, ___item, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m18373_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Int32>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m18374_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m18374(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m18374_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m18375_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m18375(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m18375_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Int32>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m18376_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m18376(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m18376_gshared)(__this /* static, unused */, ___list, method)
