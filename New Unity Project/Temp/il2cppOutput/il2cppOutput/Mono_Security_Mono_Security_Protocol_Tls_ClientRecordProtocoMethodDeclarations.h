#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t1730;
// System.IO.Stream
struct Stream_t1746;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t1729;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t1748;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t1738;
// System.Byte[]
struct ByteU5BU5D_t583;
// Mono.Security.Protocol.Tls.Handshake.HandshakeType
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C" void ClientRecordProtocol__ctor_m8392 (ClientRecordProtocol_t1730 * __this, Stream_t1746 * ___innerStream, ClientContext_t1729 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t1748 * ClientRecordProtocol_GetMessage_m8393 (ClientRecordProtocol_t1730 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C" void ClientRecordProtocol_ProcessHandshakeMessage_m8394 (ClientRecordProtocol_t1730 * __this, TlsStream_t1738 * ___handMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t1748 * ClientRecordProtocol_createClientHandshakeMessage_m8395 (ClientRecordProtocol_t1730 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" HandshakeMessage_t1748 * ClientRecordProtocol_createServerHandshakeMessage_m8396 (ClientRecordProtocol_t1730 * __this, uint8_t ___type, ByteU5BU5D_t583* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
