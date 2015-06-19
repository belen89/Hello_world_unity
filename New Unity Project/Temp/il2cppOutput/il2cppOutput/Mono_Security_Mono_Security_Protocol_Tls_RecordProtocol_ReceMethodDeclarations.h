#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t1747;
// System.IO.Stream
struct Stream_t1746;
// System.Byte[]
struct ByteU5BU5D_t583;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t91;
// System.Threading.WaitHandle
struct WaitHandle_t1792;
// System.AsyncCallback
struct AsyncCallback_t258;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m8482 (ReceiveRecordAsyncResult_t1747 * __this, AsyncCallback_t258 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t583* ___initialBuffer, Stream_t1746 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t1746 * ReceiveRecordAsyncResult_get_Record_m8483 (ReceiveRecordAsyncResult_t1747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t583* ReceiveRecordAsyncResult_get_ResultingBuffer_m8484 (ReceiveRecordAsyncResult_t1747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t583* ReceiveRecordAsyncResult_get_InitialBuffer_m8485 (ReceiveRecordAsyncResult_t1747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m8486 (ReceiveRecordAsyncResult_t1747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t91 * ReceiveRecordAsyncResult_get_AsyncException_m8487 (ReceiveRecordAsyncResult_t1747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m8488 (ReceiveRecordAsyncResult_t1747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1792 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m8489 (ReceiveRecordAsyncResult_t1747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m8490 (ReceiveRecordAsyncResult_t1747 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m8491 (ReceiveRecordAsyncResult_t1747 * __this, Exception_t91 * ___ex, ByteU5BU5D_t583* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m8492 (ReceiveRecordAsyncResult_t1747 * __this, Exception_t91 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m8493 (ReceiveRecordAsyncResult_t1747 * __this, ByteU5BU5D_t583* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
