#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARRenderer
struct QCARRenderer_t632;
// Vuforia.QCARRendererImpl
struct QCARRendererImpl_t634;
// UnityEngine.Texture2D
struct Texture2D_t223;
// Vuforia.QCARRenderer/VideoBGCfgData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoB_0.h"
// Vuforia.QCARRenderer/VideoTextureInfo
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_VideoT.h"

// Vuforia.QCARRenderer Vuforia.QCARRenderer::get_Instance()
extern "C" QCARRenderer_t632 * QCARRenderer_get_Instance_m2814 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRendererImpl Vuforia.QCARRenderer::get_InternalInstance()
extern "C" QCARRendererImpl_t634 * QCARRenderer_get_InternalInstance_m2815 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D Vuforia.QCARRenderer::get_VideoBackgroundTexture()
// Vuforia.QCARRenderer/VideoBGCfgData Vuforia.QCARRenderer::GetVideoBackgroundConfig()
// System.Void Vuforia.QCARRenderer::ClearVideoBackgroundConfig()
// System.Void Vuforia.QCARRenderer::SetVideoBackgroundConfig(Vuforia.QCARRenderer/VideoBGCfgData)
// System.Boolean Vuforia.QCARRenderer::SetVideoBackgroundTexture(UnityEngine.Texture2D,System.Int32)
// System.Boolean Vuforia.QCARRenderer::IsVideoBackgroundInfoAvailable()
// Vuforia.QCARRenderer/VideoTextureInfo Vuforia.QCARRenderer::GetVideoTextureInfo()
// System.Void Vuforia.QCARRenderer::Pause(System.Boolean)
// System.Void Vuforia.QCARRenderer::.ctor()
extern "C" void QCARRenderer__ctor_m2816 (QCARRenderer_t632 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRenderer::.cctor()
extern "C" void QCARRenderer__cctor_m2817 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
