#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.Formatters.Binary.MessageFormatter
struct MessageFormatter_t2140;
// System.Object
struct Object_t;
// System.IO.BinaryReader
struct BinaryReader_t1958;
// System.Runtime.Remoting.Messaging.HeaderHandler
struct HeaderHandler_t2337;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_t2127;
// System.Runtime.Remoting.Messaging.IMethodCallMessage
struct IMethodCallMessage_t2372;
// System.Runtime.Serialization.Formatters.Binary.BinaryElement
#include "mscorlib_System_Runtime_Serialization_Formatters_Binary_Bina_0.h"

// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodCall(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodCall_m11790 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1958 * ___reader, bool ___hasHeaders, HeaderHandler_t2337 * ___headerHandler, BinaryFormatter_t2127 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.Formatters.Binary.MessageFormatter::ReadMethodResponse(System.Runtime.Serialization.Formatters.Binary.BinaryElement,System.IO.BinaryReader,System.Boolean,System.Runtime.Remoting.Messaging.HeaderHandler,System.Runtime.Remoting.Messaging.IMethodCallMessage,System.Runtime.Serialization.Formatters.Binary.BinaryFormatter)
extern "C" Object_t * MessageFormatter_ReadMethodResponse_m11791 (Object_t * __this /* static, unused */, uint8_t ___elem, BinaryReader_t1958 * ___reader, bool ___hasHeaders, HeaderHandler_t2337 * ___headerHandler, Object_t * ___methodCallMessage, BinaryFormatter_t2127 * ___formatter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
