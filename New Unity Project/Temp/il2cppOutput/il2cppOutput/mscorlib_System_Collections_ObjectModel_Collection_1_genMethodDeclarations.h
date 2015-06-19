#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_t2883;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t368;
// System.Object[]
struct ObjectU5BU5D_t79;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t495;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1281;

// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::.ctor()
extern "C" void Collection_1__ctor_m14413_gshared (Collection_1_t2883 * __this, const MethodInfo* method);
#define Collection_1__ctor_m14413(__this, method) (( void (*) (Collection_1_t2883 *, const MethodInfo*))Collection_1__ctor_m14413_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14414_gshared (Collection_1_t2883 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14414(__this, method) (( bool (*) (Collection_1_t2883 *, const MethodInfo*))Collection_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14414_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Collection_1_System_Collections_ICollection_CopyTo_m14415_gshared (Collection_1_t2883 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_CopyTo_m14415(__this, ___array, ___index, method) (( void (*) (Collection_1_t2883 *, Array_t *, int32_t, const MethodInfo*))Collection_1_System_Collections_ICollection_CopyTo_m14415_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Collection_1_System_Collections_IEnumerable_GetEnumerator_m14416_gshared (Collection_1_t2883 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IEnumerable_GetEnumerator_m14416(__this, method) (( Object_t * (*) (Collection_1_t2883 *, const MethodInfo*))Collection_1_System_Collections_IEnumerable_GetEnumerator_m14416_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Add(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_Add_m14417_gshared (Collection_1_t2883 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Add_m14417(__this, ___value, method) (( int32_t (*) (Collection_1_t2883 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Add_m14417_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Contains(System.Object)
extern "C" bool Collection_1_System_Collections_IList_Contains_m14418_gshared (Collection_1_t2883 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Contains_m14418(__this, ___value, method) (( bool (*) (Collection_1_t2883 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Contains_m14418_gshared)(__this, ___value, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t Collection_1_System_Collections_IList_IndexOf_m14419_gshared (Collection_1_t2883 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_IndexOf_m14419(__this, ___value, method) (( int32_t (*) (Collection_1_t2883 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_IndexOf_m14419_gshared)(__this, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_Insert_m14420_gshared (Collection_1_t2883 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Insert_m14420(__this, ___index, ___value, method) (( void (*) (Collection_1_t2883 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Insert_m14420_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.Remove(System.Object)
extern "C" void Collection_1_System_Collections_IList_Remove_m14421_gshared (Collection_1_t2883 * __this, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_Remove_m14421(__this, ___value, method) (( void (*) (Collection_1_t2883 *, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_Remove_m14421_gshared)(__this, ___value, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Collection_1_System_Collections_ICollection_get_IsSynchronized_m14422_gshared (Collection_1_t2883 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_IsSynchronized_m14422(__this, method) (( bool (*) (Collection_1_t2883 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_IsSynchronized_m14422_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Collection_1_System_Collections_ICollection_get_SyncRoot_m14423_gshared (Collection_1_t2883 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_ICollection_get_SyncRoot_m14423(__this, method) (( Object_t * (*) (Collection_1_t2883 *, const MethodInfo*))Collection_1_System_Collections_ICollection_get_SyncRoot_m14423_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsFixedSize()
extern "C" bool Collection_1_System_Collections_IList_get_IsFixedSize_m14424_gshared (Collection_1_t2883 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsFixedSize_m14424(__this, method) (( bool (*) (Collection_1_t2883 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsFixedSize_m14424_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_IsReadOnly()
extern "C" bool Collection_1_System_Collections_IList_get_IsReadOnly_m14425_gshared (Collection_1_t2883 * __this, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_IsReadOnly_m14425(__this, method) (( bool (*) (Collection_1_t2883 *, const MethodInfo*))Collection_1_System_Collections_IList_get_IsReadOnly_m14425_gshared)(__this, method)
// System.Object System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * Collection_1_System_Collections_IList_get_Item_m14426_gshared (Collection_1_t2883 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_System_Collections_IList_get_Item_m14426(__this, ___index, method) (( Object_t * (*) (Collection_1_t2883 *, int32_t, const MethodInfo*))Collection_1_System_Collections_IList_get_Item_m14426_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void Collection_1_System_Collections_IList_set_Item_m14427_gshared (Collection_1_t2883 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_System_Collections_IList_set_Item_m14427(__this, ___index, ___value, method) (( void (*) (Collection_1_t2883 *, int32_t, Object_t *, const MethodInfo*))Collection_1_System_Collections_IList_set_Item_m14427_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Add(T)
extern "C" void Collection_1_Add_m14428_gshared (Collection_1_t2883 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Add_m14428(__this, ___item, method) (( void (*) (Collection_1_t2883 *, Object_t *, const MethodInfo*))Collection_1_Add_m14428_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Clear()
extern "C" void Collection_1_Clear_m14429_gshared (Collection_1_t2883 * __this, const MethodInfo* method);
#define Collection_1_Clear_m14429(__this, method) (( void (*) (Collection_1_t2883 *, const MethodInfo*))Collection_1_Clear_m14429_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::ClearItems()
extern "C" void Collection_1_ClearItems_m14430_gshared (Collection_1_t2883 * __this, const MethodInfo* method);
#define Collection_1_ClearItems_m14430(__this, method) (( void (*) (Collection_1_t2883 *, const MethodInfo*))Collection_1_ClearItems_m14430_gshared)(__this, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Contains(T)
extern "C" bool Collection_1_Contains_m14431_gshared (Collection_1_t2883 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Contains_m14431(__this, ___item, method) (( bool (*) (Collection_1_t2883 *, Object_t *, const MethodInfo*))Collection_1_Contains_m14431_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void Collection_1_CopyTo_m14432_gshared (Collection_1_t2883 * __this, ObjectU5BU5D_t79* ___array, int32_t ___index, const MethodInfo* method);
#define Collection_1_CopyTo_m14432(__this, ___array, ___index, method) (( void (*) (Collection_1_t2883 *, ObjectU5BU5D_t79*, int32_t, const MethodInfo*))Collection_1_CopyTo_m14432_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
extern "C" Object_t* Collection_1_GetEnumerator_m14433_gshared (Collection_1_t2883 * __this, const MethodInfo* method);
#define Collection_1_GetEnumerator_m14433(__this, method) (( Object_t* (*) (Collection_1_t2883 *, const MethodInfo*))Collection_1_GetEnumerator_m14433_gshared)(__this, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::IndexOf(T)
extern "C" int32_t Collection_1_IndexOf_m14434_gshared (Collection_1_t2883 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IndexOf_m14434(__this, ___item, method) (( int32_t (*) (Collection_1_t2883 *, Object_t *, const MethodInfo*))Collection_1_IndexOf_m14434_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::Insert(System.Int32,T)
extern "C" void Collection_1_Insert_m14435_gshared (Collection_1_t2883 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Insert_m14435(__this, ___index, ___item, method) (( void (*) (Collection_1_t2883 *, int32_t, Object_t *, const MethodInfo*))Collection_1_Insert_m14435_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::InsertItem(System.Int32,T)
extern "C" void Collection_1_InsertItem_m14436_gshared (Collection_1_t2883 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_InsertItem_m14436(__this, ___index, ___item, method) (( void (*) (Collection_1_t2883 *, int32_t, Object_t *, const MethodInfo*))Collection_1_InsertItem_m14436_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::Remove(T)
extern "C" bool Collection_1_Remove_m14437_gshared (Collection_1_t2883 * __this, Object_t * ___item, const MethodInfo* method);
#define Collection_1_Remove_m14437(__this, ___item, method) (( bool (*) (Collection_1_t2883 *, Object_t *, const MethodInfo*))Collection_1_Remove_m14437_gshared)(__this, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveAt(System.Int32)
extern "C" void Collection_1_RemoveAt_m14438_gshared (Collection_1_t2883 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveAt_m14438(__this, ___index, method) (( void (*) (Collection_1_t2883 *, int32_t, const MethodInfo*))Collection_1_RemoveAt_m14438_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::RemoveItem(System.Int32)
extern "C" void Collection_1_RemoveItem_m14439_gshared (Collection_1_t2883 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_RemoveItem_m14439(__this, ___index, method) (( void (*) (Collection_1_t2883 *, int32_t, const MethodInfo*))Collection_1_RemoveItem_m14439_gshared)(__this, ___index, method)
// System.Int32 System.Collections.ObjectModel.Collection`1<System.Object>::get_Count()
extern "C" int32_t Collection_1_get_Count_m14440_gshared (Collection_1_t2883 * __this, const MethodInfo* method);
#define Collection_1_get_Count_m14440(__this, method) (( int32_t (*) (Collection_1_t2883 *, const MethodInfo*))Collection_1_get_Count_m14440_gshared)(__this, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * Collection_1_get_Item_m14441_gshared (Collection_1_t2883 * __this, int32_t ___index, const MethodInfo* method);
#define Collection_1_get_Item_m14441(__this, ___index, method) (( Object_t * (*) (Collection_1_t2883 *, int32_t, const MethodInfo*))Collection_1_get_Item_m14441_gshared)(__this, ___index, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::set_Item(System.Int32,T)
extern "C" void Collection_1_set_Item_m14442_gshared (Collection_1_t2883 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define Collection_1_set_Item_m14442(__this, ___index, ___value, method) (( void (*) (Collection_1_t2883 *, int32_t, Object_t *, const MethodInfo*))Collection_1_set_Item_m14442_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::SetItem(System.Int32,T)
extern "C" void Collection_1_SetItem_m14443_gshared (Collection_1_t2883 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define Collection_1_SetItem_m14443(__this, ___index, ___item, method) (( void (*) (Collection_1_t2883 *, int32_t, Object_t *, const MethodInfo*))Collection_1_SetItem_m14443_gshared)(__this, ___index, ___item, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsValidItem(System.Object)
extern "C" bool Collection_1_IsValidItem_m14444_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_IsValidItem_m14444(__this /* static, unused */, ___item, method) (( bool (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_IsValidItem_m14444_gshared)(__this /* static, unused */, ___item, method)
// T System.Collections.ObjectModel.Collection`1<System.Object>::ConvertItem(System.Object)
extern "C" Object_t * Collection_1_ConvertItem_m14445_gshared (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method);
#define Collection_1_ConvertItem_m14445(__this /* static, unused */, ___item, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, const MethodInfo*))Collection_1_ConvertItem_m14445_gshared)(__this /* static, unused */, ___item, method)
// System.Void System.Collections.ObjectModel.Collection`1<System.Object>::CheckWritable(System.Collections.Generic.IList`1<T>)
extern "C" void Collection_1_CheckWritable_m14446_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_CheckWritable_m14446(__this /* static, unused */, ___list, method) (( void (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_CheckWritable_m14446_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsSynchronized(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsSynchronized_m14447_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsSynchronized_m14447(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsSynchronized_m14447_gshared)(__this /* static, unused */, ___list, method)
// System.Boolean System.Collections.ObjectModel.Collection`1<System.Object>::IsFixedSize(System.Collections.Generic.IList`1<T>)
extern "C" bool Collection_1_IsFixedSize_m14448_gshared (Object_t * __this /* static, unused */, Object_t* ___list, const MethodInfo* method);
#define Collection_1_IsFixedSize_m14448(__this /* static, unused */, ___list, method) (( bool (*) (Object_t * /* static, unused */, Object_t*, const MethodInfo*))Collection_1_IsFixedSize_m14448_gshared)(__this /* static, unused */, ___list, method)
