#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARRenderer/VideoBGCfgData
struct VideoBGCfgData_t630;
struct VideoBGCfgData_t630_marshaled;

void VideoBGCfgData_t630_marshal(const VideoBGCfgData_t630& unmarshaled, VideoBGCfgData_t630_marshaled& marshaled);
void VideoBGCfgData_t630_marshal_back(const VideoBGCfgData_t630_marshaled& marshaled, VideoBGCfgData_t630& unmarshaled);
void VideoBGCfgData_t630_marshal_cleanup(VideoBGCfgData_t630_marshaled& marshaled);
