#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.InternalEyewearUserCalibrator
struct InternalEyewearUserCalibrator_t529;
// Vuforia.InternalEyewear/EyewearCalibrationReading[]
struct EyewearCalibrationReadingU5BU5D_t728;
// UnityEngine.Matrix4x4
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// System.Boolean Vuforia.InternalEyewearUserCalibrator::init(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" bool InternalEyewearUserCalibrator_init_m2424 (InternalEyewearUserCalibrator_t529 * __this, int32_t ___surfaceWidth, int32_t ___surfaceHeight, int32_t ___targetWidth, int32_t ___targetHeight, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.InternalEyewearUserCalibrator::getMinScaleHint()
extern "C" float InternalEyewearUserCalibrator_getMinScaleHint_m2425 (InternalEyewearUserCalibrator_t529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.InternalEyewearUserCalibrator::getMaxScaleHint()
extern "C" float InternalEyewearUserCalibrator_getMaxScaleHint_m2426 (InternalEyewearUserCalibrator_t529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewearUserCalibrator::isStereoStretched()
extern "C" bool InternalEyewearUserCalibrator_isStereoStretched_m2427 (InternalEyewearUserCalibrator_t529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.InternalEyewearUserCalibrator::getProjectionMatrix(Vuforia.InternalEyewear/EyewearCalibrationReading[],UnityEngine.Matrix4x4)
extern "C" bool InternalEyewearUserCalibrator_getProjectionMatrix_m2428 (InternalEyewearUserCalibrator_t529 * __this, EyewearCalibrationReadingU5BU5D_t728* ___readings, Matrix4x4_t112  ___projectionMatrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.InternalEyewearUserCalibrator::.ctor()
extern "C" void InternalEyewearUserCalibrator__ctor_m2429 (InternalEyewearUserCalibrator_t529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
