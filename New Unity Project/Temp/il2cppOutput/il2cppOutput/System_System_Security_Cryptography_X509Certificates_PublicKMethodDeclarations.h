#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1478;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t1476;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1475;
// System.Security.Cryptography.Oid
struct Oid_t1477;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1486;
// System.Byte[]
struct ByteU5BU5D_t583;
// System.Security.Cryptography.DSA
struct DSA_t1597;
// System.Security.Cryptography.RSA
struct RSA_t1598;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m6979 (PublicKey_t1478 * __this, X509Certificate_t1486 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t1476 * PublicKey_get_EncodedKeyValue_m6980 (PublicKey_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t1476 * PublicKey_get_EncodedParameters_m6981 (PublicKey_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1475 * PublicKey_get_Key_m6982 (PublicKey_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t1477 * PublicKey_get_Oid_m6983 (PublicKey_t1478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t583* PublicKey_GetUnsignedBigInteger_m6984 (Object_t * __this /* static, unused */, ByteU5BU5D_t583* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1597 * PublicKey_DecodeDSA_m6985 (Object_t * __this /* static, unused */, ByteU5BU5D_t583* ___rawPublicKey, ByteU5BU5D_t583* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1598 * PublicKey_DecodeRSA_m6986 (Object_t * __this /* static, unused */, ByteU5BU5D_t583* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
