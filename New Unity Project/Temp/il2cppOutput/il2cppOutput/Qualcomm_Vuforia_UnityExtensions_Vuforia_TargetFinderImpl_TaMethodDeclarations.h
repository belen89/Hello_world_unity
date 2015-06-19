#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TargetFinderImpl/TargetFinderState
struct TargetFinderState_t689;
struct TargetFinderState_t689_marshaled;

void TargetFinderState_t689_marshal(const TargetFinderState_t689& unmarshaled, TargetFinderState_t689_marshaled& marshaled);
void TargetFinderState_t689_marshal_back(const TargetFinderState_t689_marshaled& marshaled, TargetFinderState_t689& unmarshaled);
void TargetFinderState_t689_marshal_cleanup(TargetFinderState_t689_marshaled& marshaled);
