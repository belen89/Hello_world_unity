#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpWebRequest
struct HttpWebRequest_t1461;
// System.Uri
struct Uri_t1035;
// System.Net.ServicePoint
struct ServicePoint_t1460;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1144;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m6873 (HttpWebRequest_t1461 * __this, Uri_t1035 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m6874 (HttpWebRequest_t1461 * __this, SerializationInfo_t1144 * ___serializationInfo, StreamingContext_t1145  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m6875 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m6876 (HttpWebRequest_t1461 * __this, SerializationInfo_t1144 * ___serializationInfo, StreamingContext_t1145  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t1035 * HttpWebRequest_get_Address_m6877 (HttpWebRequest_t1461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t1460 * HttpWebRequest_get_ServicePoint_m6878 (HttpWebRequest_t1461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t1460 * HttpWebRequest_GetServicePoint_m6879 (HttpWebRequest_t1461 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m6880 (HttpWebRequest_t1461 * __this, SerializationInfo_t1144 * ___serializationInfo, StreamingContext_t1145  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
