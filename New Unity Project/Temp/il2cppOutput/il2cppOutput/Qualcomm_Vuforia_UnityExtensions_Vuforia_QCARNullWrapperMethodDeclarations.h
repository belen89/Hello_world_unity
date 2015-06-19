#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARNullWrapper
struct QCARNullWrapper_t668;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t381;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceInitCamera_m3265 (QCARNullWrapper_t668 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t QCARNullWrapper_CameraDeviceDeinitCamera_m3266 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceStartCamera()
extern "C" int32_t QCARNullWrapper_CameraDeviceStartCamera_m3267 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceStopCamera()
extern "C" int32_t QCARNullWrapper_CameraDeviceStopCamera_m3268 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t QCARNullWrapper_CameraDeviceGetNumVideoModes_m3269 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void QCARNullWrapper_CameraDeviceGetVideoMode_m3270 (QCARNullWrapper_t668 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceSelectVideoMode_m3271 (QCARNullWrapper_t668 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceSetFlashTorchMode_m3272 (QCARNullWrapper_t668 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceSetFocusMode_m3273 (QCARNullWrapper_t668 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_CameraDeviceSetCameraConfiguration_m3274 (QCARNullWrapper_t668 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_QcarSetFrameFormat_m3275 (QCARNullWrapper_t668 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_DataSetExists_m3276 (QCARNullWrapper_t668 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetLoad_m3277 (QCARNullWrapper_t668 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetGetNumTrackableType_m3278 (QCARNullWrapper_t668 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetGetTrackablesOfType_m3279 (QCARNullWrapper_t668 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNullWrapper_DataSetGetTrackableName_m3280 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t381 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetCreateTrackable_m3281 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t381 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_DataSetDestroyTrackable_m3282 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t QCARNullWrapper_DataSetHasReachedTrackableLimit_m3283 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::GetCameraThreadID()
extern "C" int32_t QCARNullWrapper_GetCameraThreadID_m3284 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t QCARNullWrapper_ImageTargetBuilderBuild_m3285 (QCARNullWrapper_t668 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void QCARNullWrapper_FrameCounterGetBenchmarkingData_m3286 (QCARNullWrapper_t668 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::ImageTargetBuilderStartScan()
extern "C" void QCARNullWrapper_ImageTargetBuilderStartScan_m3287 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::ImageTargetBuilderStopScan()
extern "C" void QCARNullWrapper_ImageTargetBuilderStopScan_m3288 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t QCARNullWrapper_ImageTargetBuilderGetFrameQuality_m3289 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t QCARNullWrapper_ImageTargetBuilderGetTrackableSource_m3290 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_ImageTargetCreateVirtualButton_m3291 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNullWrapper_ImageTargetDestroyVirtualButton_m3292 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNullWrapper_VirtualButtonGetId_m3293 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t QCARNullWrapper_ImageTargetGetNumVirtualButtons_m3294 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t QCARNullWrapper_ImageTargetGetVirtualButtons_m3295 (QCARNullWrapper_t668 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNullWrapper_ImageTargetGetVirtualButtonName_m3296 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t381 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_CylinderTargetGetDimensions_m3297 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNullWrapper_CylinderTargetSetSideLength_m3298 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNullWrapper_CylinderTargetSetTopDiameter_m3299 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNullWrapper_CylinderTargetSetBottomDiameter_m3300 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTargetSetSize_m3301 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTargetGetSize_m3302 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerStart()
extern "C" int32_t QCARNullWrapper_ObjectTrackerStart_m3303 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::ObjectTrackerStop()
extern "C" void QCARNullWrapper_ObjectTrackerStop_m3304 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t QCARNullWrapper_ObjectTrackerCreateDataSet_m3305 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTrackerDestroyDataSet_m3306 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTrackerActivateDataSet_m3307 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t QCARNullWrapper_ObjectTrackerDeactivateDataSet_m3308 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t QCARNullWrapper_ObjectTrackerPersistExtendedTracking_m3309 (QCARNullWrapper_t668 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t QCARNullWrapper_ObjectTrackerResetExtendedTracking_m3310 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::MarkerTrackerStart()
extern "C" int32_t QCARNullWrapper_MarkerTrackerStart_m3311 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::MarkerTrackerStop()
extern "C" void QCARNullWrapper_MarkerTrackerStop_m3312 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void QCARNullWrapper_OnSurfaceChanged_m3313 (QCARNullWrapper_t668 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::OnPause()
extern "C" void QCARNullWrapper_OnPause_m3314 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::OnResume()
extern "C" void QCARNullWrapper_OnResume_m3315 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::HasSurfaceBeenRecreated()
extern "C" bool QCARNullWrapper_HasSurfaceBeenRecreated_m3316 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t QCARNullWrapper_MarkerSetSize_m3317 (QCARNullWrapper_t668 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t QCARNullWrapper_MarkerTrackerCreateMarker_m3318 (QCARNullWrapper_t668 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t QCARNullWrapper_MarkerTrackerDestroyMarker_m3319 (QCARNullWrapper_t668 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::InitPlatformNative()
extern "C" void QCARNullWrapper_InitPlatformNative_m3320 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::InitFrameState(System.IntPtr)
extern "C" void QCARNullWrapper_InitFrameState_m3321 (QCARNullWrapper_t668 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::DeinitFrameState(System.IntPtr)
extern "C" void QCARNullWrapper_DeinitFrameState_m3322 (QCARNullWrapper_t668 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_UpdateQCAR_m3323 (QCARNullWrapper_t668 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::RendererEnd()
extern "C" void QCARNullWrapper_RendererEnd_m3324 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_QcarGetBufferSize_m3325 (QCARNullWrapper_t668 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void QCARNullWrapper_QcarAddCameraFrame_m3326 (QCARNullWrapper_t668 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNullWrapper_RendererSetVideoBackgroundCfg_m3327 (QCARNullWrapper_t668 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNullWrapper_RendererGetVideoBackgroundCfg_m3328 (QCARNullWrapper_t668 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void QCARNullWrapper_RendererGetVideoBackgroundTextureInfo_m3329 (QCARNullWrapper_t668 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t QCARNullWrapper_RendererSetVideoBackgroundTextureID_m3330 (QCARNullWrapper_t668 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t QCARNullWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m3331 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarSetHint(System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_QcarSetHint_m3332 (QCARNullWrapper_t668 * __this, int32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_GetProjectionGL_m3333 (QCARNullWrapper_t668 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void QCARNullWrapper_SetApplicationEnvironment_m3334 (QCARNullWrapper_t668 * __this, int32_t ___major, int32_t ___minor, int32_t ___change, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::SetStateBufferSize(System.Int32)
extern "C" void QCARNullWrapper_SetStateBufferSize_m3335 (QCARNullWrapper_t668 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::SmartTerrainTrackerStart()
extern "C" int32_t QCARNullWrapper_SmartTerrainTrackerStart_m3336 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::SmartTerrainTrackerStop()
extern "C" void QCARNullWrapper_SmartTerrainTrackerStop_m3337 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool QCARNullWrapper_SmartTerrainTrackerSetScaleToMillimeter_m3338 (QCARNullWrapper_t668 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool QCARNullWrapper_SmartTerrainTrackerInitBuilder_m3339 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool QCARNullWrapper_SmartTerrainTrackerDeinitBuilder_m3340 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t QCARNullWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m3341 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t QCARNullWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m3342 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool QCARNullWrapper_SmartTerrainBuilderAddReconstruction_m3343 (QCARNullWrapper_t668 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool QCARNullWrapper_SmartTerrainBuilderRemoveReconstruction_m3344 (QCARNullWrapper_t668 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool QCARNullWrapper_SmartTerrainBuilderDestroyReconstruction_m3345 (QCARNullWrapper_t668 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionStart_m3346 (QCARNullWrapper_t668 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionStop_m3347 (QCARNullWrapper_t668 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionIsReconstructing_m3348 (QCARNullWrapper_t668 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionReset_m3349 (QCARNullWrapper_t668 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void QCARNullWrapper_ReconstructionSetNavMeshPadding_m3350 (QCARNullWrapper_t668 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool QCARNullWrapper_ReconstructionFromTargetSetInitializationTarget_m3351 (QCARNullWrapper_t668 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool QCARNullWrapper_ReconstructionSetMaximumArea_m3352 (QCARNullWrapper_t668 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t QCARNullWrapper_ReconstructioFromEnvironmentGetReconstructionState_m3353 (QCARNullWrapper_t668 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t QCARNullWrapper_TargetFinderStartInit_m3354 (QCARNullWrapper_t668 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderGetInitState()
extern "C" int32_t QCARNullWrapper_TargetFinderGetInitState_m3355 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderDeinit()
extern "C" int32_t QCARNullWrapper_TargetFinderDeinit_m3356 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderStartRecognition()
extern "C" int32_t QCARNullWrapper_TargetFinderStartRecognition_m3357 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderStop()
extern "C" int32_t QCARNullWrapper_TargetFinderStop_m3358 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void QCARNullWrapper_TargetFinderSetUIScanlineColor_m3359 (QCARNullWrapper_t668 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void QCARNullWrapper_TargetFinderSetUIPointColor_m3360 (QCARNullWrapper_t668 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderUpdate(System.IntPtr)
extern "C" void QCARNullWrapper_TargetFinderUpdate_m3361 (QCARNullWrapper_t668 * __this, IntPtr_t ___targetFinderState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_TargetFinderGetResults_m3362 (QCARNullWrapper_t668 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNullWrapper_TargetFinderEnableTracking_m3363 (QCARNullWrapper_t668 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void QCARNullWrapper_TargetFinderGetImageTargets_m3364 (QCARNullWrapper_t668 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TargetFinderClearTrackables()
extern "C" void QCARNullWrapper_TargetFinderClearTrackables_m3365 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TextTrackerStart()
extern "C" int32_t QCARNullWrapper_TextTrackerStart_m3366 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TextTrackerStop()
extern "C" void QCARNullWrapper_TextTrackerStop_m3367 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNullWrapper_TextTrackerSetRegionOfInterest_m3368 (QCARNullWrapper_t668 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void QCARNullWrapper_TextTrackerGetRegionOfInterest_m3369 (QCARNullWrapper_t668 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_WordListLoadWordList_m3370 (QCARNullWrapper_t668 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_WordListAddWordsFromFile_m3371 (QCARNullWrapper_t668 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListAddWordU_m3372 (QCARNullWrapper_t668 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListRemoveWordU_m3373 (QCARNullWrapper_t668 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListContainsWordU_m3374 (QCARNullWrapper_t668 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListUnloadAllLists()
extern "C" int32_t QCARNullWrapper_WordListUnloadAllLists_m3375 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t QCARNullWrapper_WordListSetFilterMode_m3376 (QCARNullWrapper_t668 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListGetFilterMode()
extern "C" int32_t QCARNullWrapper_WordListGetFilterMode_m3377 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_WordListLoadFilterList_m3378 (QCARNullWrapper_t668 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListAddWordToFilterListU_m3379 (QCARNullWrapper_t668 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordListRemoveWordFromFilterListU_m3380 (QCARNullWrapper_t668 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListClearFilterList()
extern "C" int32_t QCARNullWrapper_WordListClearFilterList_m3381 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordListGetFilterListWordCount()
extern "C" int32_t QCARNullWrapper_WordListGetFilterListWordCount_m3382 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t QCARNullWrapper_WordListGetFilterListWordU_m3383 (QCARNullWrapper_t668 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordGetLetterMask_m3384 (QCARNullWrapper_t668 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_WordGetLetterBoundingBoxes_m3385 (QCARNullWrapper_t668 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t QCARNullWrapper_TrackerManagerInitTracker_m3386 (QCARNullWrapper_t668 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t QCARNullWrapper_TrackerManagerDeinitTracker_m3387 (QCARNullWrapper_t668 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_VirtualButtonSetEnabled_m3388 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNullWrapper_VirtualButtonSetSensitivity_m3389 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNullWrapper_VirtualButtonSetAreaRectangle_m3390 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarInit(System.String)
extern "C" int32_t QCARNullWrapper_QcarInit_m3391 (QCARNullWrapper_t668 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::QcarDeinit()
extern "C" int32_t QCARNullWrapper_QcarDeinit_m3392 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_StartExtendedTracking_m3393 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_StopExtendedTracking_m3394 (QCARNullWrapper_t668 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsSupportedDeviceDetected()
extern "C" bool QCARNullWrapper_EyewearIsSupportedDeviceDetected_m3395 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsSeeThru()
extern "C" bool QCARNullWrapper_EyewearIsSeeThru_m3396 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearGetScreenOrientation()
extern "C" int32_t QCARNullWrapper_EyewearGetScreenOrientation_m3397 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsStereoCapable()
extern "C" bool QCARNullWrapper_EyewearIsStereoCapable_m3398 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsStereoEnabled()
extern "C" bool QCARNullWrapper_EyewearIsStereoEnabled_m3399 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearIsStereoGLOnly()
extern "C" bool QCARNullWrapper_EyewearIsStereoGLOnly_m3400 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool QCARNullWrapper_EyewearSetStereo_m3401 (QCARNullWrapper_t668 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearGetDefaultSceneScale(System.IntPtr)
extern "C" int32_t QCARNullWrapper_EyewearGetDefaultSceneScale_m3402 (QCARNullWrapper_t668 * __this, IntPtr_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNullWrapper_EyewearGetProjectionMatrix_m3403 (QCARNullWrapper_t668 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t QCARNullWrapper_EyewearCPMGetMaxCount_m3404 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t QCARNullWrapper_EyewearCPMGetUsedCount_m3405 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool QCARNullWrapper_EyewearCPMIsProfileUsed_m3406 (QCARNullWrapper_t668 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t QCARNullWrapper_EyewearCPMGetActiveProfile_m3407 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool QCARNullWrapper_EyewearCPMSetActiveProfile_m3408 (QCARNullWrapper_t668 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNullWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNullWrapper_EyewearCPMGetProjectionMatrix_m3409 (QCARNullWrapper_t668 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool QCARNullWrapper_EyewearCPMSetProjectionMatrix_m3410 (QCARNullWrapper_t668 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNullWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t QCARNullWrapper_EyewearCPMGetProfileName_m3411 (QCARNullWrapper_t668 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool QCARNullWrapper_EyewearCPMSetProfileName_m3412 (QCARNullWrapper_t668 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool QCARNullWrapper_EyewearCPMClearProfile_m3413 (QCARNullWrapper_t668 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool QCARNullWrapper_EyewearUserCalibratorInit_m3414 (QCARNullWrapper_t668 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNullWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float QCARNullWrapper_EyewearUserCalibratorGetMinScaleHint_m3415 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNullWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float QCARNullWrapper_EyewearUserCalibratorGetMaxScaleHint_m3416 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool QCARNullWrapper_EyewearUserCalibratorIsStereoStretched_m3417 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNullWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool QCARNullWrapper_EyewearUserCalibratorGetProjectionMatrix_m3418 (QCARNullWrapper_t668 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNullWrapper::.ctor()
extern "C" void QCARNullWrapper__ctor_m3419 (QCARNullWrapper_t668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
