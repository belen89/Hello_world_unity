#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.WebCamTexAdaptorImpl
struct WebCamTexAdaptorImpl_t651;
// UnityEngine.Texture
struct Texture_t276;
// System.String
struct String_t;
// Vuforia.QCARRenderer/Vec2I
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_Vec2I.h"

// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_DidUpdateThisFrame()
extern "C" bool WebCamTexAdaptorImpl_get_DidUpdateThisFrame_m2887 (WebCamTexAdaptorImpl_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WebCamTexAdaptorImpl::get_IsPlaying()
extern "C" bool WebCamTexAdaptorImpl_get_IsPlaying_m2888 (WebCamTexAdaptorImpl_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture Vuforia.WebCamTexAdaptorImpl::get_Texture()
extern "C" Texture_t276 * WebCamTexAdaptorImpl_get_Texture_m2889 (WebCamTexAdaptorImpl_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::.ctor(System.String,System.Int32,Vuforia.QCARRenderer/Vec2I)
extern "C" void WebCamTexAdaptorImpl__ctor_m2890 (WebCamTexAdaptorImpl_t651 * __this, String_t* ___deviceName, int32_t ___requestedFPS, Vec2I_t631  ___requestedTextureSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Play()
extern "C" void WebCamTexAdaptorImpl_Play_m2891 (WebCamTexAdaptorImpl_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WebCamTexAdaptorImpl::Stop()
extern "C" void WebCamTexAdaptorImpl_Stop_m2892 (WebCamTexAdaptorImpl_t651 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
