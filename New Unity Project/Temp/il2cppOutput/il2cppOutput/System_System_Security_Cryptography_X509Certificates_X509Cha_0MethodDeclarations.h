﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.X509ChainElement
struct X509ChainElement_t1497;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t1487;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[]
struct X509ChainStatusU5BU5D_t1495;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
#include "System_System_Security_Cryptography_X509Certificates_X509Cha_1.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" void X509ChainElement__ctor_m7081 (X509ChainElement_t1497 * __this, X509Certificate2_t1487 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Security.Cryptography.X509Certificates.X509ChainElement::get_Certificate()
extern "C" X509Certificate2_t1487 * X509ChainElement_get_Certificate_m7082 (X509ChainElement_t1497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatus[] System.Security.Cryptography.X509Certificates.X509ChainElement::get_ChainElementStatus()
extern "C" X509ChainStatusU5BU5D_t1495* X509ChainElement_get_ChainElementStatus_m7083 (X509ChainElement_t1497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainElement::get_StatusFlags()
extern "C" int32_t X509ChainElement_get_StatusFlags_m7084 (X509ChainElement_t1497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::set_StatusFlags(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509ChainElement_set_StatusFlags_m7085 (X509ChainElement_t1497 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainElement::Count(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" int32_t X509ChainElement_Count_m7086 (X509ChainElement_t1497 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::Set(System.Security.Cryptography.X509Certificates.X509ChainStatus[],System.Int32&,System.Security.Cryptography.X509Certificates.X509ChainStatusFlags,System.Security.Cryptography.X509Certificates.X509ChainStatusFlags)
extern "C" void X509ChainElement_Set_m7087 (X509ChainElement_t1497 * __this, X509ChainStatusU5BU5D_t1495* ___status, int32_t* ___position, int32_t ___flags, int32_t ___mask, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainElement::UncompressFlags()
extern "C" void X509ChainElement_UncompressFlags_m7088 (X509ChainElement_t1497 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
