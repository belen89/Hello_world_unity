#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DESTransform
struct DESTransform_t2173;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1700;
// System.Byte[]
struct ByteU5BU5D_t583;
// System.UInt32[]
struct UInt32U5BU5D_t1677;

// System.Void System.Security.Cryptography.DESTransform::.ctor(System.Security.Cryptography.SymmetricAlgorithm,System.Boolean,System.Byte[],System.Byte[])
extern "C" void DESTransform__ctor_m11934 (DESTransform_t2173 * __this, SymmetricAlgorithm_t1700 * ___symmAlgo, bool ___encryption, ByteU5BU5D_t583* ___key, ByteU5BU5D_t583* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::.cctor()
extern "C" void DESTransform__cctor_m11935 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Security.Cryptography.DESTransform::CipherFunct(System.UInt32,System.Int32)
extern "C" uint32_t DESTransform_CipherFunct_m11936 (DESTransform_t2173 * __this, uint32_t ___r, int32_t ___n, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::Permutation(System.Byte[],System.Byte[],System.UInt32[],System.Boolean)
extern "C" void DESTransform_Permutation_m11937 (Object_t * __this /* static, unused */, ByteU5BU5D_t583* ___input, ByteU5BU5D_t583* ___output, UInt32U5BU5D_t1677* ___permTab, bool ___preSwap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::BSwap(System.Byte[])
extern "C" void DESTransform_BSwap_m11938 (Object_t * __this /* static, unused */, ByteU5BU5D_t583* ___byteBuff, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::SetKey(System.Byte[])
extern "C" void DESTransform_SetKey_m11939 (DESTransform_t2173 * __this, ByteU5BU5D_t583* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ProcessBlock(System.Byte[],System.Byte[])
extern "C" void DESTransform_ProcessBlock_m11940 (DESTransform_t2173 * __this, ByteU5BU5D_t583* ___input, ByteU5BU5D_t583* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void DESTransform_ECB_m11941 (DESTransform_t2173 * __this, ByteU5BU5D_t583* ___input, ByteU5BU5D_t583* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t583* DESTransform_GetStrongKey_m11942 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
