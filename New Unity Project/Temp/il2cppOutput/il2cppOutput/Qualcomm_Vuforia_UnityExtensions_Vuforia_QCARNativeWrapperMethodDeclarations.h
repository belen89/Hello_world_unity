#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARNativeWrapper
struct QCARNativeWrapper_t669;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t381;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t QCARNativeWrapper_CameraDeviceInitCamera_m3420 (QCARNativeWrapper_t669 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t QCARNativeWrapper_CameraDeviceDeinitCamera_m3421 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceStartCamera()
extern "C" int32_t QCARNativeWrapper_CameraDeviceStartCamera_m3422 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceStopCamera()
extern "C" int32_t QCARNativeWrapper_CameraDeviceStopCamera_m3423 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t QCARNativeWrapper_CameraDeviceGetNumVideoModes_m3424 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void QCARNativeWrapper_CameraDeviceGetVideoMode_m3425 (QCARNativeWrapper_t669 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_CameraDeviceSelectVideoMode_m3426 (QCARNativeWrapper_t669 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_CameraDeviceSetFlashTorchMode_m3427 (QCARNativeWrapper_t669 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_CameraDeviceSetFocusMode_m3428 (QCARNativeWrapper_t669 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_CameraDeviceSetCameraConfiguration_m3429 (QCARNativeWrapper_t669 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_QcarSetFrameFormat_m3430 (QCARNativeWrapper_t669 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_DataSetExists_m3431 (QCARNativeWrapper_t669 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_DataSetLoad_m3432 (QCARNativeWrapper_t669 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_DataSetGetNumTrackableType_m3433 (QCARNativeWrapper_t669 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_DataSetGetTrackablesOfType_m3434 (QCARNativeWrapper_t669 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeWrapper_DataSetGetTrackableName_m3435 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t381 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_DataSetCreateTrackable_m3436 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t381 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_DataSetDestroyTrackable_m3437 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_DataSetHasReachedTrackableLimit_m3438 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::GetCameraThreadID()
extern "C" int32_t QCARNativeWrapper_GetCameraThreadID_m3439 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_ImageTargetBuilderBuild_m3440 (QCARNativeWrapper_t669 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void QCARNativeWrapper_FrameCounterGetBenchmarkingData_m3441 (QCARNativeWrapper_t669 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::ImageTargetBuilderStartScan()
extern "C" void QCARNativeWrapper_ImageTargetBuilderStartScan_m3442 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::ImageTargetBuilderStopScan()
extern "C" void QCARNativeWrapper_ImageTargetBuilderStopScan_m3443 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t QCARNativeWrapper_ImageTargetBuilderGetFrameQuality_m3444 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t QCARNativeWrapper_ImageTargetBuilderGetTrackableSource_m3445 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ImageTargetCreateVirtualButton_m3446 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeWrapper_ImageTargetDestroyVirtualButton_m3447 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeWrapper_VirtualButtonGetId_m3448 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t QCARNativeWrapper_ImageTargetGetNumVirtualButtons_m3449 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t QCARNativeWrapper_ImageTargetGetVirtualButtons_m3450 (QCARNativeWrapper_t669 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeWrapper_ImageTargetGetVirtualButtonName_m3451 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t381 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_CylinderTargetGetDimensions_m3452 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_CylinderTargetSetSideLength_m3453 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_CylinderTargetSetTopDiameter_m3454 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_CylinderTargetSetBottomDiameter_m3455 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ObjectTargetSetSize_m3456 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ObjectTargetGetSize_m3457 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTrackerStart()
extern "C" int32_t QCARNativeWrapper_ObjectTrackerStart_m3458 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::ObjectTrackerStop()
extern "C" void QCARNativeWrapper_ObjectTrackerStop_m3459 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t QCARNativeWrapper_ObjectTrackerCreateDataSet_m3460 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ObjectTrackerDestroyDataSet_m3461 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ObjectTrackerActivateDataSet_m3462 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ObjectTrackerDeactivateDataSet_m3463 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t QCARNativeWrapper_ObjectTrackerPersistExtendedTracking_m3464 (QCARNativeWrapper_t669 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t QCARNativeWrapper_ObjectTrackerResetExtendedTracking_m3465 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t QCARNativeWrapper_MarkerSetSize_m3466 (QCARNativeWrapper_t669 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::MarkerTrackerStart()
extern "C" int32_t QCARNativeWrapper_MarkerTrackerStart_m3467 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::MarkerTrackerStop()
extern "C" void QCARNativeWrapper_MarkerTrackerStop_m3468 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_MarkerTrackerCreateMarker_m3469 (QCARNativeWrapper_t669 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t QCARNativeWrapper_MarkerTrackerDestroyMarker_m3470 (QCARNativeWrapper_t669 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::InitPlatformNative()
extern "C" void QCARNativeWrapper_InitPlatformNative_m3471 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::InitFrameState(System.IntPtr)
extern "C" void QCARNativeWrapper_InitFrameState_m3472 (QCARNativeWrapper_t669 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::DeinitFrameState(System.IntPtr)
extern "C" void QCARNativeWrapper_DeinitFrameState_m3473 (QCARNativeWrapper_t669 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void QCARNativeWrapper_OnSurfaceChanged_m3474 (QCARNativeWrapper_t669 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::OnPause()
extern "C" void QCARNativeWrapper_OnPause_m3475 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::OnResume()
extern "C" void QCARNativeWrapper_OnResume_m3476 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::HasSurfaceBeenRecreated()
extern "C" bool QCARNativeWrapper_HasSurfaceBeenRecreated_m3477 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_UpdateQCAR_m3478 (QCARNativeWrapper_t669 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::RendererEnd()
extern "C" void QCARNativeWrapper_RendererEnd_m3479 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_QcarGetBufferSize_m3480 (QCARNativeWrapper_t669 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeWrapper_QcarAddCameraFrame_m3481 (QCARNativeWrapper_t669 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeWrapper_RendererSetVideoBackgroundCfg_m3482 (QCARNativeWrapper_t669 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeWrapper_RendererGetVideoBackgroundCfg_m3483 (QCARNativeWrapper_t669 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void QCARNativeWrapper_RendererGetVideoBackgroundTextureInfo_m3484 (QCARNativeWrapper_t669 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t QCARNativeWrapper_RendererSetVideoBackgroundTextureID_m3485 (QCARNativeWrapper_t669 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t QCARNativeWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m3486 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::QcarSetHint(System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_QcarSetHint_m3487 (QCARNativeWrapper_t669 * __this, int32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_GetProjectionGL_m3488 (QCARNativeWrapper_t669 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeWrapper_SetApplicationEnvironment_m3489 (QCARNativeWrapper_t669 * __this, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::SetStateBufferSize(System.Int32)
extern "C" void QCARNativeWrapper_SetStateBufferSize_m3490 (QCARNativeWrapper_t669 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::SmartTerrainTrackerStart()
extern "C" int32_t QCARNativeWrapper_SmartTerrainTrackerStart_m3491 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::SmartTerrainTrackerStop()
extern "C" void QCARNativeWrapper_SmartTerrainTrackerStop_m3492 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool QCARNativeWrapper_SmartTerrainTrackerSetScaleToMillimeter_m3493 (QCARNativeWrapper_t669 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool QCARNativeWrapper_SmartTerrainTrackerInitBuilder_m3494 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool QCARNativeWrapper_SmartTerrainTrackerDeinitBuilder_m3495 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t QCARNativeWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m3496 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t QCARNativeWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m3497 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool QCARNativeWrapper_SmartTerrainBuilderAddReconstruction_m3498 (QCARNativeWrapper_t669 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool QCARNativeWrapper_SmartTerrainBuilderRemoveReconstruction_m3499 (QCARNativeWrapper_t669 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool QCARNativeWrapper_SmartTerrainBuilderDestroyReconstruction_m3500 (QCARNativeWrapper_t669 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool QCARNativeWrapper_ReconstructionStart_m3501 (QCARNativeWrapper_t669 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool QCARNativeWrapper_ReconstructionStop_m3502 (QCARNativeWrapper_t669 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool QCARNativeWrapper_ReconstructionIsReconstructing_m3503 (QCARNativeWrapper_t669 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool QCARNativeWrapper_ReconstructionReset_m3504 (QCARNativeWrapper_t669 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void QCARNativeWrapper_ReconstructionSetNavMeshPadding_m3505 (QCARNativeWrapper_t669 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool QCARNativeWrapper_ReconstructionFromTargetSetInitializationTarget_m3506 (QCARNativeWrapper_t669 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool QCARNativeWrapper_ReconstructionSetMaximumArea_m3507 (QCARNativeWrapper_t669 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_ReconstructioFromEnvironmentGetReconstructionState_m3508 (QCARNativeWrapper_t669 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t QCARNativeWrapper_TargetFinderStartInit_m3509 (QCARNativeWrapper_t669 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderGetInitState()
extern "C" int32_t QCARNativeWrapper_TargetFinderGetInitState_m3510 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderDeinit()
extern "C" int32_t QCARNativeWrapper_TargetFinderDeinit_m3511 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderStartRecognition()
extern "C" int32_t QCARNativeWrapper_TargetFinderStartRecognition_m3512 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderStop()
extern "C" int32_t QCARNativeWrapper_TargetFinderStop_m3513 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeWrapper_TargetFinderSetUIScanlineColor_m3514 (QCARNativeWrapper_t669 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeWrapper_TargetFinderSetUIPointColor_m3515 (QCARNativeWrapper_t669 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TargetFinderUpdate(System.IntPtr)
extern "C" void QCARNativeWrapper_TargetFinderUpdate_m3516 (QCARNativeWrapper_t669 * __this, IntPtr_t ___targetFinderState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_TargetFinderGetResults_m3517 (QCARNativeWrapper_t669 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_TargetFinderEnableTracking_m3518 (QCARNativeWrapper_t669 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void QCARNativeWrapper_TargetFinderGetImageTargets_m3519 (QCARNativeWrapper_t669 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TargetFinderClearTrackables()
extern "C" void QCARNativeWrapper_TargetFinderClearTrackables_m3520 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TextTrackerStart()
extern "C" int32_t QCARNativeWrapper_TextTrackerStart_m3521 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TextTrackerStop()
extern "C" void QCARNativeWrapper_TextTrackerStop_m3522 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_TextTrackerSetRegionOfInterest_m3523 (QCARNativeWrapper_t669 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void QCARNativeWrapper_TextTrackerGetRegionOfInterest_m3524 (QCARNativeWrapper_t669 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_WordListLoadWordList_m3525 (QCARNativeWrapper_t669 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_WordListAddWordsFromFile_m3526 (QCARNativeWrapper_t669 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordListAddWordU_m3527 (QCARNativeWrapper_t669 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordListRemoveWordU_m3528 (QCARNativeWrapper_t669 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordListContainsWordU_m3529 (QCARNativeWrapper_t669 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListUnloadAllLists()
extern "C" int32_t QCARNativeWrapper_WordListUnloadAllLists_m3530 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_WordListSetFilterMode_m3531 (QCARNativeWrapper_t669 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListGetFilterMode()
extern "C" int32_t QCARNativeWrapper_WordListGetFilterMode_m3532 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_WordListLoadFilterList_m3533 (QCARNativeWrapper_t669 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordListAddWordToFilterListU_m3534 (QCARNativeWrapper_t669 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordListRemoveWordFromFilterListU_m3535 (QCARNativeWrapper_t669 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListClearFilterList()
extern "C" int32_t QCARNativeWrapper_WordListClearFilterList_m3536 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordListGetFilterListWordCount()
extern "C" int32_t QCARNativeWrapper_WordListGetFilterListWordCount_m3537 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t QCARNativeWrapper_WordListGetFilterListWordU_m3538 (QCARNativeWrapper_t669 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordGetLetterMask_m3539 (QCARNativeWrapper_t669 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_WordGetLetterBoundingBoxes_m3540 (QCARNativeWrapper_t669 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t QCARNativeWrapper_TrackerManagerInitTracker_m3541 (QCARNativeWrapper_t669 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t QCARNativeWrapper_TrackerManagerDeinitTracker_m3542 (QCARNativeWrapper_t669 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_VirtualButtonSetEnabled_m3543 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_VirtualButtonSetSensitivity_m3544 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_VirtualButtonSetAreaRectangle_m3545 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::QcarInit(System.String)
extern "C" int32_t QCARNativeWrapper_QcarInit_m3546 (QCARNativeWrapper_t669 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::QcarDeinit()
extern "C" int32_t QCARNativeWrapper_QcarDeinit_m3547 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_StartExtendedTracking_m3548 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_StopExtendedTracking_m3549 (QCARNativeWrapper_t669 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearIsSupportedDeviceDetected()
extern "C" bool QCARNativeWrapper_EyewearIsSupportedDeviceDetected_m3550 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearIsSeeThru()
extern "C" bool QCARNativeWrapper_EyewearIsSeeThru_m3551 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearGetScreenOrientation()
extern "C" int32_t QCARNativeWrapper_EyewearGetScreenOrientation_m3552 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearIsStereoCapable()
extern "C" bool QCARNativeWrapper_EyewearIsStereoCapable_m3553 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearIsStereoEnabled()
extern "C" bool QCARNativeWrapper_EyewearIsStereoEnabled_m3554 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearIsStereoGLOnly()
extern "C" bool QCARNativeWrapper_EyewearIsStereoGLOnly_m3555 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool QCARNativeWrapper_EyewearSetStereo_m3556 (QCARNativeWrapper_t669 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearGetDefaultSceneScale(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_EyewearGetDefaultSceneScale_m3557 (QCARNativeWrapper_t669 * __this, IntPtr_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_EyewearGetProjectionMatrix_m3558 (QCARNativeWrapper_t669 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t QCARNativeWrapper_EyewearCPMGetMaxCount_m3559 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t QCARNativeWrapper_EyewearCPMGetUsedCount_m3560 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool QCARNativeWrapper_EyewearCPMIsProfileUsed_m3561 (QCARNativeWrapper_t669 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t QCARNativeWrapper_EyewearCPMGetActiveProfile_m3562 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool QCARNativeWrapper_EyewearCPMSetActiveProfile_m3563 (QCARNativeWrapper_t669 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_EyewearCPMGetProjectionMatrix_m3564 (QCARNativeWrapper_t669 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool QCARNativeWrapper_EyewearCPMSetProjectionMatrix_m3565 (QCARNativeWrapper_t669 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t QCARNativeWrapper_EyewearCPMGetProfileName_m3566 (QCARNativeWrapper_t669 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool QCARNativeWrapper_EyewearCPMSetProfileName_m3567 (QCARNativeWrapper_t669 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool QCARNativeWrapper_EyewearCPMClearProfile_m3568 (QCARNativeWrapper_t669 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool QCARNativeWrapper_EyewearUserCalibratorInit_m3569 (QCARNativeWrapper_t669 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float QCARNativeWrapper_EyewearUserCalibratorGetMinScaleHint_m3570 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float QCARNativeWrapper_EyewearUserCalibratorGetMaxScaleHint_m3571 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool QCARNativeWrapper_EyewearUserCalibratorIsStereoStretched_m3572 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool QCARNativeWrapper_EyewearUserCalibratorGetProjectionMatrix_m3573 (QCARNativeWrapper_t669 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceInitCamera(System.Int32)
extern "C" int32_t QCARNativeWrapper_cameraDeviceInitCamera_m3574 (Object_t * __this /* static, unused */, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceDeinitCamera()
extern "C" int32_t QCARNativeWrapper_cameraDeviceDeinitCamera_m3575 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceStartCamera()
extern "C" int32_t QCARNativeWrapper_cameraDeviceStartCamera_m3576 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceStopCamera()
extern "C" int32_t QCARNativeWrapper_cameraDeviceStopCamera_m3577 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceGetNumVideoModes()
extern "C" int32_t QCARNativeWrapper_cameraDeviceGetNumVideoModes_m3578 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void QCARNativeWrapper_cameraDeviceGetVideoMode_m3579 (Object_t * __this /* static, unused */, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_cameraDeviceSelectVideoMode_m3580 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_cameraDeviceSetFlashTorchMode_m3581 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_cameraDeviceSetFocusMode_m3582 (Object_t * __this /* static, unused */, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_cameraDeviceSetCameraConfiguration_m3583 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_qcarSetFrameFormat_m3584 (Object_t * __this /* static, unused */, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetExists(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_dataSetExists_m3585 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_dataSetLoad_m3586 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_dataSetGetNumTrackableType_m3587 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_dataSetGetTrackablesOfType_m3588 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeWrapper_dataSetGetTrackableName_m3589 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t381 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_dataSetCreateTrackable_m3590 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t381 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_dataSetDestroyTrackable_m3591 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_dataSetHasReachedTrackableLimit_m3592 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::getCameraThreadID()
extern "C" int32_t QCARNativeWrapper_getCameraThreadID_m3593 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_imageTargetBuilderBuild_m3594 (Object_t * __this /* static, unused */, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::frameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void QCARNativeWrapper_frameCounterGetBenchmarkingData_m3595 (Object_t * __this /* static, unused */, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::imageTargetBuilderStartScan()
extern "C" void QCARNativeWrapper_imageTargetBuilderStartScan_m3596 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::imageTargetBuilderStopScan()
extern "C" void QCARNativeWrapper_imageTargetBuilderStopScan_m3597 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetBuilderGetFrameQuality()
extern "C" int32_t QCARNativeWrapper_imageTargetBuilderGetFrameQuality_m3598 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::imageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t QCARNativeWrapper_imageTargetBuilderGetTrackableSource_m3599 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_imageTargetCreateVirtualButton_m3600 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeWrapper_imageTargetDestroyVirtualButton_m3601 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeWrapper_virtualButtonGetId_m3602 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t QCARNativeWrapper_imageTargetGetNumVirtualButtons_m3603 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t QCARNativeWrapper_imageTargetGetVirtualButtons_m3604 (Object_t * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeWrapper_imageTargetGetVirtualButtonName_m3605 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t381 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_cylinderTargetGetDimensions_m3606 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_cylinderTargetSetSideLength_m3607 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_cylinderTargetSetTopDiameter_m3608 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_cylinderTargetSetBottomDiameter_m3609 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_objectTargetSetSize_m3610 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_objectTargetGetSize_m3611 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTrackerStart()
extern "C" int32_t QCARNativeWrapper_objectTrackerStart_m3612 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::objectTrackerStop()
extern "C" void QCARNativeWrapper_objectTrackerStop_m3613 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::objectTrackerCreateDataSet()
extern "C" IntPtr_t QCARNativeWrapper_objectTrackerCreateDataSet_m3614 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_objectTrackerDestroyDataSet_m3615 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_objectTrackerActivateDataSet_m3616 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_objectTrackerDeactivateDataSet_m3617 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t QCARNativeWrapper_objectTrackerPersistExtendedTracking_m3618 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::objectTrackerResetExtendedTracking()
extern "C" int32_t QCARNativeWrapper_objectTrackerResetExtendedTracking_m3619 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::markerSetSize(System.Int32,System.Single)
extern "C" int32_t QCARNativeWrapper_markerSetSize_m3620 (Object_t * __this /* static, unused */, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::markerTrackerStart()
extern "C" int32_t QCARNativeWrapper_markerTrackerStart_m3621 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::markerTrackerStop()
extern "C" void QCARNativeWrapper_markerTrackerStop_m3622 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::markerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t QCARNativeWrapper_markerTrackerCreateMarker_m3623 (Object_t * __this /* static, unused */, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::initPlatformNative()
extern "C" void QCARNativeWrapper_initPlatformNative_m3624 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::markerTrackerDestroyMarker(System.Int32)
extern "C" int32_t QCARNativeWrapper_markerTrackerDestroyMarker_m3625 (Object_t * __this /* static, unused */, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::initFrameState(System.IntPtr)
extern "C" void QCARNativeWrapper_initFrameState_m3626 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::deinitFrameState(System.IntPtr)
extern "C" void QCARNativeWrapper_deinitFrameState_m3627 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C" void QCARNativeWrapper_onSurfaceChanged_m3628 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::onPause()
extern "C" void QCARNativeWrapper_onPause_m3629 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::onResume()
extern "C" void QCARNativeWrapper_onResume_m3630 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::hasSurfaceBeenRecreated()
extern "C" bool QCARNativeWrapper_hasSurfaceBeenRecreated_m3631 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_updateQCAR_m3632 (Object_t * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::rendererEnd()
extern "C" void QCARNativeWrapper_rendererEnd_m3633 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_qcarGetBufferSize_m3634 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeWrapper_qcarAddCameraFrame_m3635 (Object_t * __this /* static, unused */, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeWrapper_rendererSetVideoBackgroundCfg_m3636 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeWrapper_rendererGetVideoBackgroundCfg_m3637 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void QCARNativeWrapper_rendererGetVideoBackgroundTextureInfo_m3638 (Object_t * __this /* static, unused */, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t QCARNativeWrapper_rendererSetVideoBackgroundTextureID_m3639 (Object_t * __this /* static, unused */, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t QCARNativeWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m3640 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::qcarInit(System.String)
extern "C" int32_t QCARNativeWrapper_qcarInit_m3641 (Object_t * __this /* static, unused */, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::qcarSetHint(System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_qcarSetHint_m3642 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_getProjectionGL_m3643 (Object_t * __this /* static, unused */, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeWrapper_setApplicationEnvironment_m3644 (Object_t * __this /* static, unused */, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::setStateBufferSize(System.Int32)
extern "C" void QCARNativeWrapper_setStateBufferSize_m3645 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::smartTerrainTrackerStart()
extern "C" int32_t QCARNativeWrapper_smartTerrainTrackerStart_m3646 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::smartTerrainTrackerStop()
extern "C" void QCARNativeWrapper_smartTerrainTrackerStop_m3647 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool QCARNativeWrapper_smartTerrainTrackerSetScaleToMillimeter_m3648 (Object_t * __this /* static, unused */, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::smartTerrainTrackerInitBuilder()
extern "C" bool QCARNativeWrapper_smartTerrainTrackerInitBuilder_m3649 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::smartTerrainTrackerDeinitBuilder()
extern "C" bool QCARNativeWrapper_smartTerrainTrackerDeinitBuilder_m3650 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t QCARNativeWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m3651 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t QCARNativeWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m3652 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool QCARNativeWrapper_smartTerrainBuilderAddReconstruction_m3653 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool QCARNativeWrapper_smartTerrainBuilderRemoveReconstruction_m3654 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool QCARNativeWrapper_smartTerrainBuilderDestroyReconstruction_m3655 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::reconstructionStart(System.IntPtr)
extern "C" bool QCARNativeWrapper_reconstructionStart_m3656 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::reconstructionStop(System.IntPtr)
extern "C" bool QCARNativeWrapper_reconstructionStop_m3657 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C" bool QCARNativeWrapper_reconstructionIsReconstructing_m3658 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::reconstructionReset(System.IntPtr)
extern "C" bool QCARNativeWrapper_reconstructionReset_m3659 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void QCARNativeWrapper_reconstructionSetNavMeshPadding_m3660 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool QCARNativeWrapper_reconstructionFromTargetSetInitializationTarget_m3661 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool QCARNativeWrapper_reconstructionSetMaximumArea_m3662 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_reconstructioFromEnvironmentGetReconstructionState_m3663 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderStartInit(System.String,System.String)
extern "C" int32_t QCARNativeWrapper_targetFinderStartInit_m3664 (Object_t * __this /* static, unused */, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderGetInitState()
extern "C" int32_t QCARNativeWrapper_targetFinderGetInitState_m3665 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderDeinit()
extern "C" int32_t QCARNativeWrapper_targetFinderDeinit_m3666 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderStartRecognition()
extern "C" int32_t QCARNativeWrapper_targetFinderStartRecognition_m3667 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderStop()
extern "C" int32_t QCARNativeWrapper_targetFinderStop_m3668 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::targetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeWrapper_targetFinderSetUIScanlineColor_m3669 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::targetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeWrapper_targetFinderSetUIPointColor_m3670 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::targetFinderUpdate(System.IntPtr)
extern "C" void QCARNativeWrapper_targetFinderUpdate_m3671 (Object_t * __this /* static, unused */, IntPtr_t ___targetFinderState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_targetFinderGetResults_m3672 (Object_t * __this /* static, unused */, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_targetFinderEnableTracking_m3673 (Object_t * __this /* static, unused */, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void QCARNativeWrapper_targetFinderGetImageTargets_m3674 (Object_t * __this /* static, unused */, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::targetFinderClearTrackables()
extern "C" void QCARNativeWrapper_targetFinderClearTrackables_m3675 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::textTrackerStart()
extern "C" int32_t QCARNativeWrapper_textTrackerStart_m3676 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::textTrackerStop()
extern "C" void QCARNativeWrapper_textTrackerStop_m3677 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_textTrackerSetRegionOfInterest_m3678 (Object_t * __this /* static, unused */, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_textTrackerGetRegionOfInterest_m3679 (Object_t * __this /* static, unused */, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_wordListLoadWordList_m3680 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_wordListAddWordsFromFile_m3681 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListAddWordU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordListAddWordU_m3682 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListRemoveWordU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordListRemoveWordU_m3683 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListContainsWordU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordListContainsWordU_m3684 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListUnloadAllLists()
extern "C" int32_t QCARNativeWrapper_wordListUnloadAllLists_m3685 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListSetFilterMode(System.Int32)
extern "C" int32_t QCARNativeWrapper_wordListSetFilterMode_m3686 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListGetFilterMode()
extern "C" int32_t QCARNativeWrapper_wordListGetFilterMode_m3687 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordListAddWordToFilterListU_m3688 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordListRemoveWordFromFilterListU_m3689 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListClearFilterList()
extern "C" int32_t QCARNativeWrapper_wordListClearFilterList_m3690 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_wordListLoadFilterList_m3691 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordListGetFilterListWordCount()
extern "C" int32_t QCARNativeWrapper_wordListGetFilterListWordCount_m3692 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::wordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t QCARNativeWrapper_wordListGetFilterListWordU_m3693 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordGetLetterMask_m3694 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_wordGetLetterBoundingBoxes_m3695 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::trackerManagerInitTracker(System.Int32)
extern "C" int32_t QCARNativeWrapper_trackerManagerInitTracker_m3696 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C" int32_t QCARNativeWrapper_trackerManagerDeinitTracker_m3697 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_virtualButtonSetEnabled_m3698 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeWrapper_virtualButtonSetSensitivity_m3699 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_virtualButtonSetAreaRectangle_m3700 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::qcarDeinit()
extern "C" int32_t QCARNativeWrapper_qcarDeinit_m3701 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_startExtendedTracking_m3702 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_stopExtendedTracking_m3703 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearIsSupportedDeviceDetected()
extern "C" int32_t QCARNativeWrapper_eyewearIsSupportedDeviceDetected_m3704 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearIsSeeThru()
extern "C" int32_t QCARNativeWrapper_eyewearIsSeeThru_m3705 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearGetScreenOrientation()
extern "C" int32_t QCARNativeWrapper_eyewearGetScreenOrientation_m3706 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearIsStereoCapable()
extern "C" int32_t QCARNativeWrapper_eyewearIsStereoCapable_m3707 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearIsStereoEnabled()
extern "C" int32_t QCARNativeWrapper_eyewearIsStereoEnabled_m3708 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearIsStereoGLOnly()
extern "C" int32_t QCARNativeWrapper_eyewearIsStereoGLOnly_m3709 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearSetStereo(System.Boolean)
extern "C" int32_t QCARNativeWrapper_eyewearSetStereo_m3710 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearGetDefaultSceneScale(System.IntPtr)
extern "C" int32_t QCARNativeWrapper_eyewearGetDefaultSceneScale_m3711 (Object_t * __this /* static, unused */, IntPtr_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeWrapper_eyewearGetProjectionMatrix_m3712 (Object_t * __this /* static, unused */, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMGetMaxCount()
extern "C" int32_t QCARNativeWrapper_eyewearCPMGetMaxCount_m3713 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMGetUsedCount()
extern "C" int32_t QCARNativeWrapper_eyewearCPMGetUsedCount_m3714 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C" int32_t QCARNativeWrapper_eyewearCPMIsProfileUsed_m3715 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMGetActiveProfile()
extern "C" int32_t QCARNativeWrapper_eyewearCPMGetActiveProfile_m3716 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C" int32_t QCARNativeWrapper_eyewearCPMSetActiveProfile_m3717 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_eyewearCPMGetProjectionMatrix_m3718 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_eyewearCPMSetProjectionMatrix_m3719 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t QCARNativeWrapper_eyewearCPMGetProfileName_m3720 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_eyewearCPMSetProfileName_m3721 (Object_t * __this /* static, unused */, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearCPMClearProfile(System.Int32)
extern "C" int32_t QCARNativeWrapper_eyewearCPMClearProfile_m3722 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeWrapper_eyewearUserCalibratorInit_m3723 (Object_t * __this /* static, unused */, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C" float QCARNativeWrapper_eyewearUserCalibratorGetMinScaleHint_m3724 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C" float QCARNativeWrapper_eyewearUserCalibratorGetMaxScaleHint_m3725 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C" int32_t QCARNativeWrapper_eyewearUserCalibratorIsStereoStretched_m3726 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeWrapper_eyewearUserCalibratorGetProjectionMatrix_m3727 (Object_t * __this /* static, unused */, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeWrapper::.ctor()
extern "C" void QCARNativeWrapper__ctor_m3728 (QCARNativeWrapper_t669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
