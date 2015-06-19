#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Enumerator_t3384;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,Vuforia.WebCamProfile/ProfileData>
struct Dictionary_2_t3375;
// Vuforia.WebCamProfile/ProfileData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WebCamProfile_Profi.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m21945_gshared (Enumerator_t3384 * __this, Dictionary_2_t3375 * ___host, const MethodInfo* method);
#define Enumerator__ctor_m21945(__this, ___host, method) (( void (*) (Enumerator_t3384 *, Dictionary_2_t3375 *, const MethodInfo*))Enumerator__ctor_m21945_gshared)(__this, ___host, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m21946_gshared (Enumerator_t3384 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m21946(__this, method) (( Object_t * (*) (Enumerator_t3384 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m21946_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::Dispose()
extern "C" void Enumerator_Dispose_m21947_gshared (Enumerator_t3384 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m21947(__this, method) (( void (*) (Enumerator_t3384 *, const MethodInfo*))Enumerator_Dispose_m21947_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::MoveNext()
extern "C" bool Enumerator_MoveNext_m21948_gshared (Enumerator_t3384 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m21948(__this, method) (( bool (*) (Enumerator_t3384 *, const MethodInfo*))Enumerator_MoveNext_m21948_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Object,Vuforia.WebCamProfile/ProfileData>::get_Current()
extern "C" ProfileData_t702  Enumerator_get_Current_m21949_gshared (Enumerator_t3384 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m21949(__this, method) (( ProfileData_t702  (*) (Enumerator_t3384 *, const MethodInfo*))Enumerator_get_Current_m21949_gshared)(__this, method)
