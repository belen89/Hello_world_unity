#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARManagerImpl/TrackableResultData
struct TrackableResultData_t610;
struct TrackableResultData_t610_marshaled;

void TrackableResultData_t610_marshal(const TrackableResultData_t610& unmarshaled, TrackableResultData_t610_marshaled& marshaled);
void TrackableResultData_t610_marshal_back(const TrackableResultData_t610_marshaled& marshaled, TrackableResultData_t610& unmarshaled);
void TrackableResultData_t610_marshal_cleanup(TrackableResultData_t610_marshaled& marshaled);
