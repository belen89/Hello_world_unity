#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.DefaultTrackableEventHandler
struct DefaultTrackableEventHandler_t16;
// Vuforia.TrackableBehaviour/Status
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"

// System.Void Vuforia.DefaultTrackableEventHandler::.ctor()
extern "C" void DefaultTrackableEventHandler__ctor_m18 (DefaultTrackableEventHandler_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::Start()
extern "C" void DefaultTrackableEventHandler_Start_m19 (DefaultTrackableEventHandler_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::OnTrackableStateChanged(Vuforia.TrackableBehaviour/Status,Vuforia.TrackableBehaviour/Status)
extern "C" void DefaultTrackableEventHandler_OnTrackableStateChanged_m20 (DefaultTrackableEventHandler_t16 * __this, int32_t ___previousStatus, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::OnTrackingFound()
extern "C" void DefaultTrackableEventHandler_OnTrackingFound_m21 (DefaultTrackableEventHandler_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.DefaultTrackableEventHandler::OnTrackingLost()
extern "C" void DefaultTrackableEventHandler_OnTrackingLost_m22 (DefaultTrackableEventHandler_t16 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
