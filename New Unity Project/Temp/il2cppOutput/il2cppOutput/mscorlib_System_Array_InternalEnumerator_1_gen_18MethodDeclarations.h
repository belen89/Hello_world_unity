#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct InternalEnumerator_1_t3001;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_8.h"

// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m15924_gshared (InternalEnumerator_1_t3001 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m15924(__this, ___array, method) (( void (*) (InternalEnumerator_1_t3001 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m15924_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15925_gshared (InternalEnumerator_1_t3001 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15925(__this, method) (( Object_t * (*) (InternalEnumerator_1_t3001 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m15925_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m15926_gshared (InternalEnumerator_1_t3001 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m15926(__this, method) (( void (*) (InternalEnumerator_1_t3001 *, const MethodInfo*))InternalEnumerator_1_Dispose_m15926_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m15927_gshared (InternalEnumerator_1_t3001 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m15927(__this, method) (( bool (*) (InternalEnumerator_1_t3001 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m15927_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Current()
extern "C" KeyValuePair_2_t3000  InternalEnumerator_1_get_Current_m15928_gshared (InternalEnumerator_1_t3001 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m15928(__this, method) (( KeyValuePair_2_t3000  (*) (InternalEnumerator_1_t3001 *, const MethodInfo*))InternalEnumerator_1_get_Current_m15928_gshared)(__this, method)
