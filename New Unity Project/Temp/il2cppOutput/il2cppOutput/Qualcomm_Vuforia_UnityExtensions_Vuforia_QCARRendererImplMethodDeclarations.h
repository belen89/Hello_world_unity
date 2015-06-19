#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARRendererImpl
struct QCARRendererImpl_t634;
// UnityEngine.Texture2D
struct Texture2D_t223;
// Vuforia.QCARRenderer/VideoBGCfgData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoB_0.h"
// Vuforia.QCARRenderer/VideoTextureInfo
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoT.h"
// Vuforia.QCARRendererImpl/RenderEvent
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRendererImpl_Re.h"

// UnityEngine.Texture2D Vuforia.QCARRendererImpl::get_VideoBackgroundTexture()
extern "C" Texture2D_t223 * QCARRendererImpl_get_VideoBackgroundTexture_m2818 (QCARRendererImpl_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRenderer/VideoBGCfgData Vuforia.QCARRendererImpl::GetVideoBackgroundConfig()
extern "C" VideoBGCfgData_t630  QCARRendererImpl_GetVideoBackgroundConfig_m2819 (QCARRendererImpl_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRendererImpl::ClearVideoBackgroundConfig()
extern "C" void QCARRendererImpl_ClearVideoBackgroundConfig_m2820 (QCARRendererImpl_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRendererImpl::SetVideoBackgroundConfig(Vuforia.QCARRenderer/VideoBGCfgData)
extern "C" void QCARRendererImpl_SetVideoBackgroundConfig_m2821 (QCARRendererImpl_t634 * __this, VideoBGCfgData_t630  ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARRendererImpl::SetVideoBackgroundTexture(UnityEngine.Texture2D,System.Int32)
extern "C" bool QCARRendererImpl_SetVideoBackgroundTexture_m2822 (QCARRendererImpl_t634 * __this, Texture2D_t223 * ___texture, int32_t ___nativeTextureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARRendererImpl::IsVideoBackgroundInfoAvailable()
extern "C" bool QCARRendererImpl_IsVideoBackgroundInfoAvailable_m2823 (QCARRendererImpl_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRenderer/VideoTextureInfo Vuforia.QCARRendererImpl::GetVideoTextureInfo()
extern "C" VideoTextureInfo_t528  QCARRendererImpl_GetVideoTextureInfo_m2824 (QCARRendererImpl_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRendererImpl::Pause(System.Boolean)
extern "C" void QCARRendererImpl_Pause_m2825 (QCARRendererImpl_t634 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRendererImpl::UnityRenderEvent(Vuforia.QCARRendererImpl/RenderEvent)
extern "C" void QCARRendererImpl_UnityRenderEvent_m2826 (QCARRendererImpl_t634 * __this, int32_t ___renderEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRendererImpl::.ctor()
extern "C" void QCARRendererImpl__ctor_m2827 (QCARRendererImpl_t634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
