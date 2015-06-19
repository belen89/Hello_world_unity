#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.LinkedListNode`1<System.Int32>
struct LinkedListNode_1_t786;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t627;

// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T)
extern "C" void LinkedListNode_1__ctor_m19152_gshared (LinkedListNode_1_t786 * __this, LinkedList_1_t627 * ___list, int32_t ___value, const MethodInfo* method);
#define LinkedListNode_1__ctor_m19152(__this, ___list, ___value, method) (( void (*) (LinkedListNode_1_t786 *, LinkedList_1_t627 *, int32_t, const MethodInfo*))LinkedListNode_1__ctor_m19152_gshared)(__this, ___list, ___value, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::.ctor(System.Collections.Generic.LinkedList`1<T>,T,System.Collections.Generic.LinkedListNode`1<T>,System.Collections.Generic.LinkedListNode`1<T>)
extern "C" void LinkedListNode_1__ctor_m19153_gshared (LinkedListNode_1_t786 * __this, LinkedList_1_t627 * ___list, int32_t ___value, LinkedListNode_1_t786 * ___previousNode, LinkedListNode_1_t786 * ___nextNode, const MethodInfo* method);
#define LinkedListNode_1__ctor_m19153(__this, ___list, ___value, ___previousNode, ___nextNode, method) (( void (*) (LinkedListNode_1_t786 *, LinkedList_1_t627 *, int32_t, LinkedListNode_1_t786 *, LinkedListNode_1_t786 *, const MethodInfo*))LinkedListNode_1__ctor_m19153_gshared)(__this, ___list, ___value, ___previousNode, ___nextNode, method)
// System.Void System.Collections.Generic.LinkedListNode`1<System.Int32>::Detach()
extern "C" void LinkedListNode_1_Detach_m19154_gshared (LinkedListNode_1_t786 * __this, const MethodInfo* method);
#define LinkedListNode_1_Detach_m19154(__this, method) (( void (*) (LinkedListNode_1_t786 *, const MethodInfo*))LinkedListNode_1_Detach_m19154_gshared)(__this, method)
// System.Collections.Generic.LinkedList`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_List()
extern "C" LinkedList_1_t627 * LinkedListNode_1_get_List_m19155_gshared (LinkedListNode_1_t786 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_List_m19155(__this, method) (( LinkedList_1_t627 * (*) (LinkedListNode_1_t786 *, const MethodInfo*))LinkedListNode_1_get_List_m19155_gshared)(__this, method)
// System.Collections.Generic.LinkedListNode`1<T> System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Next()
extern "C" LinkedListNode_1_t786 * LinkedListNode_1_get_Next_m4347_gshared (LinkedListNode_1_t786 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Next_m4347(__this, method) (( LinkedListNode_1_t786 * (*) (LinkedListNode_1_t786 *, const MethodInfo*))LinkedListNode_1_get_Next_m4347_gshared)(__this, method)
// T System.Collections.Generic.LinkedListNode`1<System.Int32>::get_Value()
extern "C" int32_t LinkedListNode_1_get_Value_m4210_gshared (LinkedListNode_1_t786 * __this, const MethodInfo* method);
#define LinkedListNode_1_get_Value_m4210(__this, method) (( int32_t (*) (LinkedListNode_1_t786 *, const MethodInfo*))LinkedListNode_1_get_Value_m4210_gshared)(__this, method)
