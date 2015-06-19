#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RC2
struct RC2_t1806;
// System.String
struct String_t;

// System.Void System.Security.Cryptography.RC2::.ctor()
extern "C" void RC2__ctor_m12028 (RC2_t1806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RC2 System.Security.Cryptography.RC2::Create()
extern "C" RC2_t1806 * RC2_Create_m8863 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RC2 System.Security.Cryptography.RC2::Create(System.String)
extern "C" RC2_t1806 * RC2_Create_m12029 (Object_t * __this /* static, unused */, String_t* ___AlgName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2::get_EffectiveKeySize()
extern "C" int32_t RC2_get_EffectiveKeySize_m12030 (RC2_t1806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.RC2::get_KeySize()
extern "C" int32_t RC2_get_KeySize_m12031 (RC2_t1806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2::set_KeySize(System.Int32)
extern "C" void RC2_set_KeySize_m12032 (RC2_t1806 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
