#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter
struct RSAPKCS1KeyExchangeFormatter_t1811;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1475;
// System.Byte[]
struct ByteU5BU5D_t583;

// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::.ctor(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter__ctor_m8886 (RSAPKCS1KeyExchangeFormatter_t1811 * __this, AsymmetricAlgorithm_t1475 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[])
extern "C" ByteU5BU5D_t583* RSAPKCS1KeyExchangeFormatter_CreateKeyExchange_m12091 (RSAPKCS1KeyExchangeFormatter_t1811 * __this, ByteU5BU5D_t583* ___rgbData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::SetRSAKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void RSAPKCS1KeyExchangeFormatter_SetRSAKey_m12092 (RSAPKCS1KeyExchangeFormatter_t1811 * __this, AsymmetricAlgorithm_t1475 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
