﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct TlsServerCertificateRequest_t1775;
// Mono.Security.Protocol.Tls.Context
struct Context_t1723;
// System.Byte[]
struct ByteU5BU5D_t583;

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerCertificateRequest__ctor_m8769 (TlsServerCertificateRequest_t1775 * __this, Context_t1723 * ___context, ByteU5BU5D_t583* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern "C" void TlsServerCertificateRequest_Update_m8770 (TlsServerCertificateRequest_t1775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern "C" void TlsServerCertificateRequest_ProcessAsSsl3_m8771 (TlsServerCertificateRequest_t1775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
extern "C" void TlsServerCertificateRequest_ProcessAsTls1_m8772 (TlsServerCertificateRequest_t1775 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;