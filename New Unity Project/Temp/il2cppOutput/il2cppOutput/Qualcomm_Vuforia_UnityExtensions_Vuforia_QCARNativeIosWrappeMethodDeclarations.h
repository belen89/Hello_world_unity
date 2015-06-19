#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARNativeIosWrapper
struct QCARNativeIosWrapper_t667;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t381;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceInitCamera(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceInitCamera_m2956 (QCARNativeIosWrapper_t667 * __this, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceDeinitCamera()
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceDeinitCamera_m2957 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceStartCamera()
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceStartCamera_m2958 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceStopCamera()
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceStopCamera_m2959 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceGetNumVideoModes()
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceGetNumVideoModes_m2960 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::CameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void QCARNativeIosWrapper_CameraDeviceGetVideoMode_m2961 (QCARNativeIosWrapper_t667 * __this, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceSelectVideoMode_m2962 (QCARNativeIosWrapper_t667 * __this, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceSetFlashTorchMode_m2963 (QCARNativeIosWrapper_t667 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceSetFocusMode_m2964 (QCARNativeIosWrapper_t667 * __this, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_CameraDeviceSetCameraConfiguration_m2965 (QCARNativeIosWrapper_t667 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_QcarSetFrameFormat_m2966 (QCARNativeIosWrapper_t667 * __this, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetExists(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_DataSetExists_m2967 (QCARNativeIosWrapper_t667 * __this, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetLoad_m2968 (QCARNativeIosWrapper_t667 * __this, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetGetNumTrackableType_m2969 (QCARNativeIosWrapper_t667 * __this, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetGetTrackablesOfType_m2970 (QCARNativeIosWrapper_t667 * __this, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_DataSetGetTrackableName_m2971 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t381 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetCreateTrackable_m2972 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t381 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_DataSetDestroyTrackable_m2973 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::DataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_DataSetHasReachedTrackableLimit_m2974 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::GetCameraThreadID()
extern "C" int32_t QCARNativeIosWrapper_GetCameraThreadID_m2975 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetBuilderBuild_m2976 (QCARNativeIosWrapper_t667 * __this, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::FrameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void QCARNativeIosWrapper_FrameCounterGetBenchmarkingData_m2977 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::ImageTargetBuilderStartScan()
extern "C" void QCARNativeIosWrapper_ImageTargetBuilderStartScan_m2978 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::ImageTargetBuilderStopScan()
extern "C" void QCARNativeIosWrapper_ImageTargetBuilderStopScan_m2979 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetBuilderGetFrameQuality()
extern "C" int32_t QCARNativeIosWrapper_ImageTargetBuilderGetFrameQuality_m2980 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::ImageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t QCARNativeIosWrapper_ImageTargetBuilderGetTrackableSource_m2981 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetCreateVirtualButton_m2982 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetDestroyVirtualButton_m2983 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::VirtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_VirtualButtonGetId_m2984 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetGetNumVirtualButtons_m2985 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetGetVirtualButtons_m2986 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ImageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_ImageTargetGetVirtualButtonName_m2987 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t381 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_CylinderTargetGetDimensions_m2988 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_CylinderTargetSetSideLength_m2989 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_CylinderTargetSetTopDiameter_m2990 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::CylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_CylinderTargetSetBottomDiameter_m2991 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTargetSetSize_m2992 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTargetGetSize_m2993 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerStart_m2994 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::ObjectTrackerStop()
extern "C" void QCARNativeIosWrapper_ObjectTrackerStop_m2995 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::ObjectTrackerCreateDataSet()
extern "C" IntPtr_t QCARNativeIosWrapper_ObjectTrackerCreateDataSet_m2996 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerDestroyDataSet_m2997 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerActivateDataSet_m2998 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerDeactivateDataSet_m2999 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerPersistExtendedTracking_m3000 (QCARNativeIosWrapper_t667 * __this, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ObjectTrackerResetExtendedTracking()
extern "C" int32_t QCARNativeIosWrapper_ObjectTrackerResetExtendedTracking_m3001 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::MarkerSetSize(System.Int32,System.Single)
extern "C" int32_t QCARNativeIosWrapper_MarkerSetSize_m3002 (QCARNativeIosWrapper_t667 * __this, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::MarkerTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_MarkerTrackerStart_m3003 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::MarkerTrackerStop()
extern "C" void QCARNativeIosWrapper_MarkerTrackerStop_m3004 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::MarkerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_MarkerTrackerCreateMarker_m3005 (QCARNativeIosWrapper_t667 * __this, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::MarkerTrackerDestroyMarker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_MarkerTrackerDestroyMarker_m3006 (QCARNativeIosWrapper_t667 * __this, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::InitPlatformNative()
extern "C" void QCARNativeIosWrapper_InitPlatformNative_m3007 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::InitFrameState(System.IntPtr)
extern "C" void QCARNativeIosWrapper_InitFrameState_m3008 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::DeinitFrameState(System.IntPtr)
extern "C" void QCARNativeIosWrapper_DeinitFrameState_m3009 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::OnSurfaceChanged(System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_OnSurfaceChanged_m3010 (QCARNativeIosWrapper_t667 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::OnPause()
extern "C" void QCARNativeIosWrapper_OnPause_m3011 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::OnResume()
extern "C" void QCARNativeIosWrapper_OnResume_m3012 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::HasSurfaceBeenRecreated()
extern "C" bool QCARNativeIosWrapper_HasSurfaceBeenRecreated_m3013 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::UpdateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_UpdateQCAR_m3014 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::RendererEnd()
extern "C" void QCARNativeIosWrapper_RendererEnd_m3015 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_QcarGetBufferSize_m3016 (QCARNativeIosWrapper_t667 * __this, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::QcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_QcarAddCameraFrame_m3017 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::RendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeIosWrapper_RendererSetVideoBackgroundCfg_m3018 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::RendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeIosWrapper_RendererGetVideoBackgroundCfg_m3019 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::RendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void QCARNativeIosWrapper_RendererGetVideoBackgroundTextureInfo_m3020 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::RendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_RendererSetVideoBackgroundTextureID_m3021 (QCARNativeIosWrapper_t667 * __this, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::RendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t QCARNativeIosWrapper_RendererIsVideoBackgroundTextureInfoAvailable_m3022 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarSetHint(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_QcarSetHint_m3023 (QCARNativeIosWrapper_t667 * __this, int32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::GetProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_GetProjectionGL_m3024 (QCARNativeIosWrapper_t667 * __this, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::SetApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_SetApplicationEnvironment_m3025 (QCARNativeIosWrapper_t667 * __this, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::SetStateBufferSize(System.Int32)
extern "C" void QCARNativeIosWrapper_SetStateBufferSize_m3026 (QCARNativeIosWrapper_t667 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_SmartTerrainTrackerStart_m3027 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerStop()
extern "C" void QCARNativeIosWrapper_SmartTerrainTrackerStop_m3028 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool QCARNativeIosWrapper_SmartTerrainTrackerSetScaleToMillimeter_m3029 (QCARNativeIosWrapper_t667 * __this, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerInitBuilder()
extern "C" bool QCARNativeIosWrapper_SmartTerrainTrackerInitBuilder_m3030 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainTrackerDeinitBuilder()
extern "C" bool QCARNativeIosWrapper_SmartTerrainTrackerDeinitBuilder_m3031 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t QCARNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromTarget_m3032 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t QCARNativeIosWrapper_SmartTerrainBuilderCreateReconstructionFromEnvironment_m3033 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_SmartTerrainBuilderAddReconstruction_m3034 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_SmartTerrainBuilderRemoveReconstruction_m3035 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::SmartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_SmartTerrainBuilderDestroyReconstruction_m3036 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionStart(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionStart_m3037 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionStop(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionStop_m3038 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionIsReconstructing(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionIsReconstructing_m3039 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionReset(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionReset_m3040 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::ReconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void QCARNativeIosWrapper_ReconstructionSetNavMeshPadding_m3041 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool QCARNativeIosWrapper_ReconstructionFromTargetSetInitializationTarget_m3042 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::ReconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_ReconstructionSetMaximumArea_m3043 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::ReconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_ReconstructioFromEnvironmentGetReconstructionState_m3044 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderStartInit(System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_TargetFinderStartInit_m3045 (QCARNativeIosWrapper_t667 * __this, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderGetInitState()
extern "C" int32_t QCARNativeIosWrapper_TargetFinderGetInitState_m3046 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderDeinit()
extern "C" int32_t QCARNativeIosWrapper_TargetFinderDeinit_m3047 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderStartRecognition()
extern "C" int32_t QCARNativeIosWrapper_TargetFinderStartRecognition_m3048 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderStop()
extern "C" int32_t QCARNativeIosWrapper_TargetFinderStop_m3049 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeIosWrapper_TargetFinderSetUIScanlineColor_m3050 (QCARNativeIosWrapper_t667 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeIosWrapper_TargetFinderSetUIPointColor_m3051 (QCARNativeIosWrapper_t667 * __this, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderUpdate(System.IntPtr)
extern "C" void QCARNativeIosWrapper_TargetFinderUpdate_m3052 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___targetFinderState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_TargetFinderGetResults_m3053 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TargetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_TargetFinderEnableTracking_m3054 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void QCARNativeIosWrapper_TargetFinderGetImageTargets_m3055 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TargetFinderClearTrackables()
extern "C" void QCARNativeIosWrapper_TargetFinderClearTrackables_m3056 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TextTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_TextTrackerStart_m3057 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TextTrackerStop()
extern "C" void QCARNativeIosWrapper_TextTrackerStop_m3058 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TextTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_TextTrackerSetRegionOfInterest_m3059 (QCARNativeIosWrapper_t667 * __this, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::TextTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" void QCARNativeIosWrapper_TextTrackerGetRegionOfInterest_m3060 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListLoadWordList(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_WordListLoadWordList_m3061 (QCARNativeIosWrapper_t667 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_WordListAddWordsFromFile_m3062 (QCARNativeIosWrapper_t667 * __this, String_t* ___path, int32_t ___storagetType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListAddWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListAddWordU_m3063 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListRemoveWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListRemoveWordU_m3064 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListContainsWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListContainsWordU_m3065 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListUnloadAllLists()
extern "C" int32_t QCARNativeIosWrapper_WordListUnloadAllLists_m3066 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListSetFilterMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_WordListSetFilterMode_m3067 (QCARNativeIosWrapper_t667 * __this, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListGetFilterMode()
extern "C" int32_t QCARNativeIosWrapper_WordListGetFilterMode_m3068 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_WordListLoadFilterList_m3069 (QCARNativeIosWrapper_t667 * __this, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListAddWordToFilterListU_m3070 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordListRemoveWordFromFilterListU_m3071 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListClearFilterList()
extern "C" int32_t QCARNativeIosWrapper_WordListClearFilterList_m3072 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordListGetFilterListWordCount()
extern "C" int32_t QCARNativeIosWrapper_WordListGetFilterListWordCount_m3073 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::WordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t QCARNativeIosWrapper_WordListGetFilterListWordU_m3074 (QCARNativeIosWrapper_t667 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordGetLetterMask_m3075 (QCARNativeIosWrapper_t667 * __this, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::WordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_WordGetLetterBoundingBoxes_m3076 (QCARNativeIosWrapper_t667 * __this, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TrackerManagerInitTracker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_TrackerManagerInitTracker_m3077 (QCARNativeIosWrapper_t667 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::TrackerManagerDeinitTracker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_TrackerManagerDeinitTracker_m3078 (QCARNativeIosWrapper_t667 * __this, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::VirtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_VirtualButtonSetEnabled_m3079 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::VirtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_VirtualButtonSetSensitivity_m3080 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::VirtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_VirtualButtonSetAreaRectangle_m3081 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarInit(System.String)
extern "C" int32_t QCARNativeIosWrapper_QcarInit_m3082 (QCARNativeIosWrapper_t667 * __this, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::QcarDeinit()
extern "C" int32_t QCARNativeIosWrapper_QcarDeinit_m3083 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::StartExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_StartExtendedTracking_m3084 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::StopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_StopExtendedTracking_m3085 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsSupportedDeviceDetected()
extern "C" bool QCARNativeIosWrapper_EyewearIsSupportedDeviceDetected_m3086 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsSeeThru()
extern "C" bool QCARNativeIosWrapper_EyewearIsSeeThru_m3087 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearGetScreenOrientation()
extern "C" int32_t QCARNativeIosWrapper_EyewearGetScreenOrientation_m3088 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsStereoCapable()
extern "C" bool QCARNativeIosWrapper_EyewearIsStereoCapable_m3089 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsStereoEnabled()
extern "C" bool QCARNativeIosWrapper_EyewearIsStereoEnabled_m3090 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearIsStereoGLOnly()
extern "C" bool QCARNativeIosWrapper_EyewearIsStereoGLOnly_m3091 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearSetStereo(System.Boolean)
extern "C" bool QCARNativeIosWrapper_EyewearSetStereo_m3092 (QCARNativeIosWrapper_t667 * __this, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearGetDefaultSceneScale(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_EyewearGetDefaultSceneScale_m3093 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_EyewearGetProjectionMatrix_m3094 (QCARNativeIosWrapper_t667 * __this, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearCPMGetMaxCount()
extern "C" int32_t QCARNativeIosWrapper_EyewearCPMGetMaxCount_m3095 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearCPMGetUsedCount()
extern "C" int32_t QCARNativeIosWrapper_EyewearCPMGetUsedCount_m3096 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMIsProfileUsed(System.Int32)
extern "C" bool QCARNativeIosWrapper_EyewearCPMIsProfileUsed_m3097 (QCARNativeIosWrapper_t667 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearCPMGetActiveProfile()
extern "C" int32_t QCARNativeIosWrapper_EyewearCPMGetActiveProfile_m3098 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMSetActiveProfile(System.Int32)
extern "C" bool QCARNativeIosWrapper_EyewearCPMSetActiveProfile_m3099 (QCARNativeIosWrapper_t667 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::EyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_EyewearCPMGetProjectionMatrix_m3100 (QCARNativeIosWrapper_t667 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_EyewearCPMSetProjectionMatrix_m3101 (QCARNativeIosWrapper_t667 * __this, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::EyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t QCARNativeIosWrapper_EyewearCPMGetProfileName_m3102 (QCARNativeIosWrapper_t667 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_EyewearCPMSetProfileName_m3103 (QCARNativeIosWrapper_t667 * __this, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearCPMClearProfile(System.Int32)
extern "C" bool QCARNativeIosWrapper_EyewearCPMClearProfile_m3104 (QCARNativeIosWrapper_t667 * __this, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool QCARNativeIosWrapper_EyewearUserCalibratorInit_m3105 (QCARNativeIosWrapper_t667 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorGetMinScaleHint()
extern "C" float QCARNativeIosWrapper_EyewearUserCalibratorGetMinScaleHint_m3106 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorGetMaxScaleHint()
extern "C" float QCARNativeIosWrapper_EyewearUserCalibratorGetMaxScaleHint_m3107 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorIsStereoStretched()
extern "C" bool QCARNativeIosWrapper_EyewearUserCalibratorIsStereoStretched_m3108 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::EyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_EyewearUserCalibratorGetProjectionMatrix_m3109 (QCARNativeIosWrapper_t667 * __this, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::smartTerrainTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_smartTerrainTrackerStart_m3110 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::smartTerrainTrackerStop()
extern "C" void QCARNativeIosWrapper_smartTerrainTrackerStop_m3111 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainTrackerSetScaleToMillimeter(System.Single)
extern "C" bool QCARNativeIosWrapper_smartTerrainTrackerSetScaleToMillimeter_m3112 (Object_t * __this /* static, unused */, float ___scaleFactor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainTrackerInitBuilder()
extern "C" bool QCARNativeIosWrapper_smartTerrainTrackerInitBuilder_m3113 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainTrackerDeinitBuilder()
extern "C" bool QCARNativeIosWrapper_smartTerrainTrackerDeinitBuilder_m3114 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromTarget()
extern "C" IntPtr_t QCARNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromTarget_m3115 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::smartTerrainBuilderCreateReconstructionFromEnvironment()
extern "C" IntPtr_t QCARNativeIosWrapper_smartTerrainBuilderCreateReconstructionFromEnvironment_m3116 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainBuilderAddReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_smartTerrainBuilderAddReconstruction_m3117 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainBuilderRemoveReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_smartTerrainBuilderRemoveReconstruction_m3118 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::smartTerrainBuilderDestroyReconstruction(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_smartTerrainBuilderDestroyReconstruction_m3119 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionStart(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionStart_m3120 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionStop(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionStop_m3121 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionIsReconstructing(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionIsReconstructing_m3122 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionReset(System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionReset_m3123 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::reconstructionSetNavMeshPadding(System.IntPtr,System.Single)
extern "C" void QCARNativeIosWrapper_reconstructionSetNavMeshPadding_m3124 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, float ___padding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionFromTargetSetInitializationTarget(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr,System.Single)
extern "C" bool QCARNativeIosWrapper_reconstructionFromTargetSetInitializationTarget_m3125 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___dataSetPtr, int32_t ___trackableId, IntPtr_t ___occluderMin, IntPtr_t ___occluderMax, IntPtr_t ___offsetToOccluder, IntPtr_t ___rotationAxisToOccluder, float ___rotationAngleToOccluder, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::reconstructionSetMaximumArea(System.IntPtr,System.IntPtr)
extern "C" bool QCARNativeIosWrapper_reconstructionSetMaximumArea_m3126 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, IntPtr_t ___maximumArea, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::reconstructioFromEnvironmentGetReconstructionState(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_reconstructioFromEnvironmentGetReconstructionState_m3127 (Object_t * __this /* static, unused */, IntPtr_t ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceInitCamera(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceInitCamera_m3128 (Object_t * __this /* static, unused */, int32_t ___camera, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceDeinitCamera()
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceDeinitCamera_m3129 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceStartCamera()
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceStartCamera_m3130 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceStopCamera()
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceStopCamera_m3131 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceGetNumVideoModes()
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceGetNumVideoModes_m3132 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::cameraDeviceGetVideoMode(System.Int32,System.IntPtr)
extern "C" void QCARNativeIosWrapper_cameraDeviceGetVideoMode_m3133 (Object_t * __this /* static, unused */, int32_t ___idx, IntPtr_t ___videoMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceSelectVideoMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceSelectVideoMode_m3134 (Object_t * __this /* static, unused */, int32_t ___idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceSetFlashTorchMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceSetFlashTorchMode_m3135 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceSetFocusMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceSetFocusMode_m3136 (Object_t * __this /* static, unused */, int32_t ___focusMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cameraDeviceSetCameraConfiguration(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_cameraDeviceSetCameraConfiguration_m3137 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarSetFrameFormat(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_qcarSetFrameFormat_m3138 (Object_t * __this /* static, unused */, int32_t ___format, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetExists(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_dataSetExists_m3139 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetLoad(System.String,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetLoad_m3140 (Object_t * __this /* static, unused */, String_t* ___relativePath, int32_t ___storageType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetGetNumTrackableType(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetGetNumTrackableType_m3141 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetGetTrackablesOfType(System.Int32,System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetGetTrackablesOfType_m3142 (Object_t * __this /* static, unused */, int32_t ___trackableType, IntPtr_t ___trackableDataArray, int32_t ___trackableDataArrayLength, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetGetTrackableName(System.IntPtr,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_dataSetGetTrackableName_m3143 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, StringBuilder_t381 * ___trackableName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetCreateTrackable(System.IntPtr,System.IntPtr,System.Text.StringBuilder,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetCreateTrackable_m3144 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, IntPtr_t ___trackableSourcePtr, StringBuilder_t381 * ___trackableName, int32_t ___nameMaxLength, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetDestroyTrackable(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_dataSetDestroyTrackable_m3145 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::dataSetHasReachedTrackableLimit(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_dataSetHasReachedTrackableLimit_m3146 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::getCameraThreadID()
extern "C" int32_t QCARNativeIosWrapper_getCameraThreadID_m3147 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetBuilderBuild(System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_imageTargetBuilderBuild_m3148 (Object_t * __this /* static, unused */, String_t* ___targetName, float ___sceenSizeWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::frameCounterGetBenchmarkingData(System.IntPtr,System.Boolean)
extern "C" void QCARNativeIosWrapper_frameCounterGetBenchmarkingData_m3149 (Object_t * __this /* static, unused */, IntPtr_t ___benchmarkingData, bool ___isStereoRendering, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::imageTargetBuilderStartScan()
extern "C" void QCARNativeIosWrapper_imageTargetBuilderStartScan_m3150 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::imageTargetBuilderStopScan()
extern "C" void QCARNativeIosWrapper_imageTargetBuilderStopScan_m3151 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetBuilderGetFrameQuality()
extern "C" int32_t QCARNativeIosWrapper_imageTargetBuilderGetFrameQuality_m3152 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::imageTargetBuilderGetTrackableSource()
extern "C" IntPtr_t QCARNativeIosWrapper_imageTargetBuilderGetTrackableSource_m3153 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetCreateVirtualButton(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_imageTargetCreateVirtualButton_m3154 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetDestroyVirtualButton(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_imageTargetDestroyVirtualButton_m3155 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::virtualButtonGetId(System.IntPtr,System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_virtualButtonGetId_m3156 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetGetNumVirtualButtons(System.IntPtr,System.String)
extern "C" int32_t QCARNativeIosWrapper_imageTargetGetNumVirtualButtons_m3157 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetGetVirtualButtons(System.IntPtr,System.IntPtr,System.Int32,System.IntPtr,System.String)
extern "C" int32_t QCARNativeIosWrapper_imageTargetGetVirtualButtons_m3158 (Object_t * __this /* static, unused */, IntPtr_t ___virtualButtonDataArray, IntPtr_t ___rectangleDataArray, int32_t ___virtualButtonDataArrayLength, IntPtr_t ___dataSetPtr, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::imageTargetGetVirtualButtonName(System.IntPtr,System.String,System.Int32,System.Text.StringBuilder,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_imageTargetGetVirtualButtonName_m3159 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, int32_t ___idx, StringBuilder_t381 * ___vbName, int32_t ___nameMaxLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cylinderTargetGetDimensions(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_cylinderTargetGetDimensions_m3160 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___dimensions, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cylinderTargetSetSideLength(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_cylinderTargetSetSideLength_m3161 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___sideLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cylinderTargetSetTopDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_cylinderTargetSetTopDiameter_m3162 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___topDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::cylinderTargetSetBottomDiameter(System.IntPtr,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_cylinderTargetSetBottomDiameter_m3163 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, float ___bottomDiameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTargetSetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTargetSetSize_m3164 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTargetGetSize(System.IntPtr,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTargetGetSize_m3165 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, IntPtr_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_objectTrackerStart_m3166 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::objectTrackerStop()
extern "C" void QCARNativeIosWrapper_objectTrackerStop_m3167 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::objectTrackerCreateDataSet()
extern "C" IntPtr_t QCARNativeIosWrapper_objectTrackerCreateDataSet_m3168 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerDestroyDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTrackerDestroyDataSet_m3169 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerActivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTrackerActivateDataSet_m3170 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerDeactivateDataSet(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_objectTrackerDeactivateDataSet_m3171 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerPersistExtendedTracking(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_objectTrackerPersistExtendedTracking_m3172 (Object_t * __this /* static, unused */, int32_t ___on, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::objectTrackerResetExtendedTracking()
extern "C" int32_t QCARNativeIosWrapper_objectTrackerResetExtendedTracking_m3173 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::markerSetSize(System.Int32,System.Single)
extern "C" int32_t QCARNativeIosWrapper_markerSetSize_m3174 (Object_t * __this /* static, unused */, int32_t ___trackableIndex, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::markerTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_markerTrackerStart_m3175 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::markerTrackerStop()
extern "C" void QCARNativeIosWrapper_markerTrackerStop_m3176 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::markerTrackerCreateMarker(System.Int32,System.String,System.Single)
extern "C" int32_t QCARNativeIosWrapper_markerTrackerCreateMarker_m3177 (Object_t * __this /* static, unused */, int32_t ___id, String_t* ___trackableName, float ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::markerTrackerDestroyMarker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_markerTrackerDestroyMarker_m3178 (Object_t * __this /* static, unused */, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::initPlatformNative()
extern "C" void QCARNativeIosWrapper_initPlatformNative_m3179 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::initFrameState(System.IntPtr)
extern "C" void QCARNativeIosWrapper_initFrameState_m3180 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::deinitFrameState(System.IntPtr)
extern "C" void QCARNativeIosWrapper_deinitFrameState_m3181 (Object_t * __this /* static, unused */, IntPtr_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::onSurfaceChanged(System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_onSurfaceChanged_m3182 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::onPause()
extern "C" void QCARNativeIosWrapper_onPause_m3183 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::onResume()
extern "C" void QCARNativeIosWrapper_onResume_m3184 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.QCARNativeIosWrapper::hasSurfaceBeenRecreated()
extern "C" bool QCARNativeIosWrapper_hasSurfaceBeenRecreated_m3185 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::updateQCAR(System.IntPtr,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_updateQCAR_m3186 (Object_t * __this /* static, unused */, IntPtr_t ___imageHeaderDataArray, int32_t ___imageHeaderArrayLength, IntPtr_t ___frameIndex, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::rendererEnd()
extern "C" void QCARNativeIosWrapper_rendererEnd_m3187 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarGetBufferSize(System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_qcarGetBufferSize_m3188 (Object_t * __this /* static, unused */, int32_t ___width, int32_t ___height, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::qcarAddCameraFrame(System.IntPtr,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_qcarAddCameraFrame_m3189 (Object_t * __this /* static, unused */, IntPtr_t ___pixels, int32_t ___width, int32_t ___height, int32_t ___format, int32_t ___stride, int32_t ___frameIdx, int32_t ___flipHorizontally, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::rendererSetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeIosWrapper_rendererSetVideoBackgroundCfg_m3190 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::rendererGetVideoBackgroundCfg(System.IntPtr)
extern "C" void QCARNativeIosWrapper_rendererGetVideoBackgroundCfg_m3191 (Object_t * __this /* static, unused */, IntPtr_t ___bgCfg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::rendererGetVideoBackgroundTextureInfo(System.IntPtr)
extern "C" void QCARNativeIosWrapper_rendererGetVideoBackgroundTextureInfo_m3192 (Object_t * __this /* static, unused */, IntPtr_t ___texInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::rendererSetVideoBackgroundTextureID(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_rendererSetVideoBackgroundTextureID_m3193 (Object_t * __this /* static, unused */, int32_t ___textureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::rendererIsVideoBackgroundTextureInfoAvailable()
extern "C" int32_t QCARNativeIosWrapper_rendererIsVideoBackgroundTextureInfoAvailable_m3194 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarInit(System.String)
extern "C" int32_t QCARNativeIosWrapper_qcarInit_m3195 (Object_t * __this /* static, unused */, String_t* ___licenseKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarSetHint(System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_qcarSetHint_m3196 (Object_t * __this /* static, unused */, int32_t ___hint, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::getProjectionGL(System.Single,System.Single,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_getProjectionGL_m3197 (Object_t * __this /* static, unused */, float ___nearClip, float ___farClip, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::setApplicationEnvironment(System.Int32,System.Int32,System.Int32)
extern "C" void QCARNativeIosWrapper_setApplicationEnvironment_m3198 (Object_t * __this /* static, unused */, int32_t ___unityVersionMajor, int32_t ___unityVersionMinor, int32_t ___unityVersionChange, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::setStateBufferSize(System.Int32)
extern "C" void QCARNativeIosWrapper_setStateBufferSize_m3199 (Object_t * __this /* static, unused */, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderStartInit(System.String,System.String)
extern "C" int32_t QCARNativeIosWrapper_targetFinderStartInit_m3200 (Object_t * __this /* static, unused */, String_t* ___userKey, String_t* ___secretKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderGetInitState()
extern "C" int32_t QCARNativeIosWrapper_targetFinderGetInitState_m3201 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderDeinit()
extern "C" int32_t QCARNativeIosWrapper_targetFinderDeinit_m3202 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderStartRecognition()
extern "C" int32_t QCARNativeIosWrapper_targetFinderStartRecognition_m3203 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderStop()
extern "C" int32_t QCARNativeIosWrapper_targetFinderStop_m3204 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderSetUIScanlineColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeIosWrapper_targetFinderSetUIScanlineColor_m3205 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderSetUIPointColor(System.Single,System.Single,System.Single)
extern "C" void QCARNativeIosWrapper_targetFinderSetUIPointColor_m3206 (Object_t * __this /* static, unused */, float ___r, float ___g, float ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderUpdate(System.IntPtr)
extern "C" void QCARNativeIosWrapper_targetFinderUpdate_m3207 (Object_t * __this /* static, unused */, IntPtr_t ___targetFinderState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderGetResults(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_targetFinderGetResults_m3208 (Object_t * __this /* static, unused */, IntPtr_t ___searchResultArray, int32_t ___searchResultArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::targetFinderEnableTracking(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_targetFinderEnableTracking_m3209 (Object_t * __this /* static, unused */, IntPtr_t ___searchResult, IntPtr_t ___trackableData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderGetImageTargets(System.IntPtr,System.Int32)
extern "C" void QCARNativeIosWrapper_targetFinderGetImageTargets_m3210 (Object_t * __this /* static, unused */, IntPtr_t ___trackableIdArray, int32_t ___trackableIdArrayLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::targetFinderClearTrackables()
extern "C" void QCARNativeIosWrapper_targetFinderClearTrackables_m3211 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::textTrackerStart()
extern "C" int32_t QCARNativeIosWrapper_textTrackerStart_m3212 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::textTrackerStop()
extern "C" void QCARNativeIosWrapper_textTrackerStop_m3213 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::textTrackerSetRegionOfInterest(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_textTrackerSetRegionOfInterest_m3214 (Object_t * __this /* static, unused */, int32_t ___detectionLeftTopX, int32_t ___detectionLeftTopY, int32_t ___detectionRightBottomX, int32_t ___detectionRightBottomY, int32_t ___trackingLeftTopX, int32_t ___trackingLeftTopY, int32_t ___trackingRightBottomX, int32_t ___trackingRightBottomY, int32_t ___upDirection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::textTrackerGetRegionOfInterest(System.IntPtr,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_textTrackerGetRegionOfInterest_m3215 (Object_t * __this /* static, unused */, IntPtr_t ___detectionROI, IntPtr_t ___trackingROI, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListLoadWordList(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_wordListLoadWordList_m3216 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListAddWordsFromFile(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_wordListAddWordsFromFile_m3217 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListAddWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListAddWordU_m3218 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListRemoveWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListRemoveWordU_m3219 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListContainsWordU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListContainsWordU_m3220 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListUnloadAllLists()
extern "C" int32_t QCARNativeIosWrapper_wordListUnloadAllLists_m3221 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListSetFilterMode(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_wordListSetFilterMode_m3222 (Object_t * __this /* static, unused */, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListGetFilterMode()
extern "C" int32_t QCARNativeIosWrapper_wordListGetFilterMode_m3223 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListAddWordToFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListAddWordToFilterListU_m3224 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListRemoveWordFromFilterListU(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordListRemoveWordFromFilterListU_m3225 (Object_t * __this /* static, unused */, IntPtr_t ___word, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListClearFilterList()
extern "C" int32_t QCARNativeIosWrapper_wordListClearFilterList_m3226 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListLoadFilterList(System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_wordListLoadFilterList_m3227 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___storageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordListGetFilterListWordCount()
extern "C" int32_t QCARNativeIosWrapper_wordListGetFilterListWordCount_m3228 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::wordListGetFilterListWordU(System.Int32)
extern "C" IntPtr_t QCARNativeIosWrapper_wordListGetFilterListWordU_m3229 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordGetLetterMask(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordGetLetterMask_m3230 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterMaskImage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::wordGetLetterBoundingBoxes(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_wordGetLetterBoundingBoxes_m3231 (Object_t * __this /* static, unused */, int32_t ___wordID, IntPtr_t ___letterBoundingBoxes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::trackerManagerInitTracker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_trackerManagerInitTracker_m3232 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::trackerManagerDeinitTracker(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_trackerManagerDeinitTracker_m3233 (Object_t * __this /* static, unused */, int32_t ___trackerType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::virtualButtonSetEnabled(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_virtualButtonSetEnabled_m3234 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::virtualButtonSetSensitivity(System.IntPtr,System.String,System.String,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_virtualButtonSetSensitivity_m3235 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, int32_t ___sensitivity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::virtualButtonSetAreaRectangle(System.IntPtr,System.String,System.String,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_virtualButtonSetAreaRectangle_m3236 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, String_t* ___trackableName, String_t* ___virtualButtonName, IntPtr_t ___rectData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::qcarDeinit()
extern "C" int32_t QCARNativeIosWrapper_qcarDeinit_m3237 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::startExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_startExtendedTracking_m3238 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::stopExtendedTracking(System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_stopExtendedTracking_m3239 (Object_t * __this /* static, unused */, IntPtr_t ___dataSetPtr, int32_t ___trackableId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsSupportedDeviceDetected()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsSupportedDeviceDetected_m3240 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsSeeThru()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsSeeThru_m3241 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearGetScreenOrientation()
extern "C" int32_t QCARNativeIosWrapper_eyewearGetScreenOrientation_m3242 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsStereoCapable()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsStereoCapable_m3243 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsStereoEnabled()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsStereoEnabled_m3244 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearIsStereoGLOnly()
extern "C" int32_t QCARNativeIosWrapper_eyewearIsStereoGLOnly_m3245 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearSetStereo(System.Boolean)
extern "C" int32_t QCARNativeIosWrapper_eyewearSetStereo_m3246 (Object_t * __this /* static, unused */, bool ___enable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearGetDefaultSceneScale(System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearGetDefaultSceneScale_m3247 (Object_t * __this /* static, unused */, IntPtr_t ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearGetProjectionMatrix_m3248 (Object_t * __this /* static, unused */, int32_t ___eyeID, int32_t ___profileID, IntPtr_t ___projMatrix, int32_t ___screenOrientation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMGetMaxCount()
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMGetMaxCount_m3249 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMGetUsedCount()
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMGetUsedCount_m3250 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMIsProfileUsed(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMIsProfileUsed_m3251 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMGetActiveProfile()
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMGetActiveProfile_m3252 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMSetActiveProfile(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMSetActiveProfile_m3253 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMGetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMGetProjectionMatrix_m3254 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMSetProjectionMatrix(System.Int32,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMSetProjectionMatrix_m3255 (Object_t * __this /* static, unused */, int32_t ___profileID, int32_t ___eyeID, IntPtr_t ___projMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Vuforia.QCARNativeIosWrapper::eyewearCPMGetProfileName(System.Int32)
extern "C" IntPtr_t QCARNativeIosWrapper_eyewearCPMGetProfileName_m3256 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMSetProfileName(System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMSetProfileName_m3257 (Object_t * __this /* static, unused */, int32_t ___profileID, IntPtr_t ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearCPMClearProfile(System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearCPMClearProfile_m3258 (Object_t * __this /* static, unused */, int32_t ___profileID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorInit(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t QCARNativeIosWrapper_eyewearUserCalibratorInit_m3259 (Object_t * __this /* static, unused */, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorGetMinScaleHint()
extern "C" float QCARNativeIosWrapper_eyewearUserCalibratorGetMinScaleHint_m3260 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorGetMaxScaleHint()
extern "C" float QCARNativeIosWrapper_eyewearUserCalibratorGetMaxScaleHint_m3261 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorIsStereoStretched()
extern "C" int32_t QCARNativeIosWrapper_eyewearUserCalibratorIsStereoStretched_m3262 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.QCARNativeIosWrapper::eyewearUserCalibratorGetProjectionMatrix(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t QCARNativeIosWrapper_eyewearUserCalibratorGetProjectionMatrix_m3263 (Object_t * __this /* static, unused */, IntPtr_t ___readingsArray, int32_t ___numReadings, IntPtr_t ___calibrationResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.QCARNativeIosWrapper::.ctor()
extern "C" void QCARNativeIosWrapper__ctor_m3264 (QCARNativeIosWrapper_t667 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
