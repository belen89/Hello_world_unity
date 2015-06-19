#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARRuntimeUtilities
struct QCARRuntimeUtilities_t97;
// System.String
struct String_t;
// UnityEngine.ScreenOrientation
#include "UnityEngine_UnityEngine_ScreenOrientation.h"
// Vuforia.QCARRenderer/Vec2I
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARRenderer_Vec2I.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// Vuforia.CameraDevice/VideoModeData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
// Vuforia.OrientedBoundingBox
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox.h"

// System.String Vuforia.QCARRuntimeUtilities::StripFileNameFromPath(System.String)
extern "C" String_t* QCARRuntimeUtilities_StripFileNameFromPath_m3958 (Object_t * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.QCARRuntimeUtilities::StripExtensionFromPath(System.String)
extern "C" String_t* QCARRuntimeUtilities_StripExtensionFromPath_m3959 (Object_t * __this /* static, unused */, String_t* ___fullPath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScreenOrientation Vuforia.QCARRuntimeUtilities::get_ScreenOrientation()
extern "C" int32_t QCARRuntimeUtilities_get_ScreenOrientation_m3960 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARRuntimeUtilities::get_IsLandscapeOrientation()
extern "C" bool QCARRuntimeUtilities_get_IsLandscapeOrientation_m3961 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARRuntimeUtilities::get_IsPortraitOrientation()
extern "C" bool QCARRuntimeUtilities_get_IsPortraitOrientation_m3962 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::ForceDisableTrackables()
extern "C" void QCARRuntimeUtilities_ForceDisableTrackables_m3963 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARRuntimeUtilities::IsPlayMode()
extern "C" bool QCARRuntimeUtilities_IsPlayMode_m191 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARRuntimeUtilities::IsQCAREnabled()
extern "C" bool QCARRuntimeUtilities_IsQCAREnabled_m180 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.QCARRenderer/Vec2I Vuforia.QCARRuntimeUtilities::ScreenSpaceToCameraFrameCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" Vec2I_t631  QCARRuntimeUtilities_ScreenSpaceToCameraFrameCoordinates_m3964 (Object_t * __this /* static, unused */, Vector2_t184  ___screenSpaceCoordinate, Rect_t71  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t539  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.QCARRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(UnityEngine.Vector2,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" Vector2_t184  QCARRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m3965 (Object_t * __this /* static, unused */, Vector2_t184  ___cameraFrameCoordinate, Rect_t71  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t539  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox Vuforia.QCARRuntimeUtilities::CameraFrameToScreenSpaceCoordinates(Vuforia.OrientedBoundingBox,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" OrientedBoundingBox_t565  QCARRuntimeUtilities_CameraFrameToScreenSpaceCoordinates_m3966 (Object_t * __this /* static, unused */, OrientedBoundingBox_t565  ___cameraFrameObb, Rect_t71  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t539  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::SelectRectTopLeftAndBottomRightForLandscapeLeft(UnityEngine.Rect,System.Boolean,UnityEngine.Vector2&,UnityEngine.Vector2&)
extern "C" void QCARRuntimeUtilities_SelectRectTopLeftAndBottomRightForLandscapeLeft_m3967 (Object_t * __this /* static, unused */, Rect_t71  ___screenSpaceRect, bool ___isMirrored, Vector2_t184 * ___topLeft, Vector2_t184 * ___bottomRight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.QCARRuntimeUtilities::CalculateRectFromLandscapeLeftCorners(UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" Rect_t71  QCARRuntimeUtilities_CalculateRectFromLandscapeLeftCorners_m3968 (Object_t * __this /* static, unused */, Vector2_t184  ___topLeft, Vector2_t184  ___bottomRight, bool ___isMirrored, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::DisableSleepMode()
extern "C" void QCARRuntimeUtilities_DisableSleepMode_m3969 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::ResetSleepMode()
extern "C" void QCARRuntimeUtilities_ResetSleepMode_m3970 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::PrepareCoordinateConversion(System.Boolean,System.Single&,System.Single&,System.Single&,System.Single&,System.Boolean&)
extern "C" void QCARRuntimeUtilities_PrepareCoordinateConversion_m3971 (Object_t * __this /* static, unused */, bool ___isTextureMirrored, float* ___prefixX, float* ___prefixY, float* ___inversionMultiplierX, float* ___inversionMultiplierY, bool* ___isPortrait, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::.ctor()
extern "C" void QCARRuntimeUtilities__ctor_m3972 (QCARRuntimeUtilities_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARRuntimeUtilities::.cctor()
extern "C" void QCARRuntimeUtilities__cctor_m3973 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
