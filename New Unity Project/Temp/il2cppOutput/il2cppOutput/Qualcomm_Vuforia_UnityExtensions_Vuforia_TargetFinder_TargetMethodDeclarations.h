#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.TargetFinder/TargetSearchResult
struct TargetSearchResult_t688;
struct TargetSearchResult_t688_marshaled;

void TargetSearchResult_t688_marshal(const TargetSearchResult_t688& unmarshaled, TargetSearchResult_t688_marshaled& marshaled);
void TargetSearchResult_t688_marshal_back(const TargetSearchResult_t688_marshaled& marshaled, TargetSearchResult_t688& unmarshaled);
void TargetSearchResult_t688_marshal_cleanup(TargetSearchResult_t688_marshaled& marshaled);
