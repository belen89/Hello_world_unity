#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TextTrackerImpl
struct TextTrackerImpl_t647;
// Vuforia.WordList
struct WordList_t646;
// Vuforia.TextTrackerImpl/UpDirection
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TextTrackerImpl_UpD.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// Vuforia.RectangleIntData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleIntData.h"
// Vuforia.CameraDevice/VideoModeData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"

// Vuforia.WordList Vuforia.TextTrackerImpl::get_WordList()
extern "C" WordList_t646 * TextTrackerImpl_get_WordList_m2877 (TextTrackerImpl_t647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::Start()
extern "C" bool TextTrackerImpl_Start_m2878 (TextTrackerImpl_t647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::Stop()
extern "C" void TextTrackerImpl_Stop_m2879 (TextTrackerImpl_t647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::SetRegionOfInterest(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool TextTrackerImpl_SetRegionOfInterest_m2880 (TextTrackerImpl_t647 * __this, Rect_t71  ___detectionRegion, Rect_t71  ___trackingRegion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::GetRegionOfInterest(UnityEngine.Rect&,UnityEngine.Rect&)
extern "C" bool TextTrackerImpl_GetRegionOfInterest_m2881 (TextTrackerImpl_t647 * __this, Rect_t71 * ___detectionRegion, Rect_t71 * ___trackingRegion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.TextTrackerImpl::ScreenSpaceRectFromCamSpaceRectData(Vuforia.RectangleIntData,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" Rect_t71  TextTrackerImpl_ScreenSpaceRectFromCamSpaceRectData_m2882 (TextTrackerImpl_t647 * __this, RectangleIntData_t564  ___camSpaceRectData, Rect_t71  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t539  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TextTrackerImpl/UpDirection Vuforia.TextTrackerImpl::get_CurrentUpDirection()
extern "C" int32_t TextTrackerImpl_get_CurrentUpDirection_m2883 (TextTrackerImpl_t647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::.ctor()
extern "C" void TextTrackerImpl__ctor_m2884 (TextTrackerImpl_t647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
