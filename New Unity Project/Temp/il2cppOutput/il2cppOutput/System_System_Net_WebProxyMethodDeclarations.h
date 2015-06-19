#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t1472;
// System.Uri
struct Uri_t1035;
// System.String[]
struct StringU5BU5D_t791;
// System.Net.ICredentials
struct ICredentials_t1471;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
extern "C" void WebProxy__ctor_m6960 (WebProxy_t1472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
extern "C" void WebProxy__ctor_m6961 (WebProxy_t1472 * __this, Uri_t1035 * ___address, bool ___bypassOnLocal, StringU5BU5D_t791* ___bypassList, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy__ctor_m6962 (WebProxy_t1472 * __this, SerializationInfo_t1144 * ___serializationInfo, StreamingContext_t1145  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m6963 (WebProxy_t1472 * __this, SerializationInfo_t1144 * ___serializationInfo, StreamingContext_t1145  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
extern "C" bool WebProxy_get_UseDefaultCredentials_m6964 (WebProxy_t1472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
extern "C" Uri_t1035 * WebProxy_GetProxy_m6965 (WebProxy_t1472 * __this, Uri_t1035 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
extern "C" bool WebProxy_IsBypassed_m6966 (WebProxy_t1472 * __this, Uri_t1035 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebProxy_GetObjectData_m6967 (WebProxy_t1472 * __this, SerializationInfo_t1144 * ___serializationInfo, StreamingContext_t1145  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
extern "C" void WebProxy_CheckBypassList_m6968 (WebProxy_t1472 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
