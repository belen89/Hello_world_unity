﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1900;
// Mono.Security.ASN1
struct ASN1_t1888;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t583;

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
extern "C" void ContentInfo__ctor_m10167 (ContentInfo_t1900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
extern "C" void ContentInfo__ctor_m10168 (ContentInfo_t1900 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
extern "C" void ContentInfo__ctor_m10169 (ContentInfo_t1900 * __this, ByteU5BU5D_t583* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
extern "C" void ContentInfo__ctor_m10170 (ContentInfo_t1900 * __this, ASN1_t1888 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
extern "C" ASN1_t1888 * ContentInfo_get_Content_m10171 (ContentInfo_t1900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
extern "C" void ContentInfo_set_Content_m10172 (ContentInfo_t1900 * __this, ASN1_t1888 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
extern "C" String_t* ContentInfo_get_ContentType_m10173 (ContentInfo_t1900 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
