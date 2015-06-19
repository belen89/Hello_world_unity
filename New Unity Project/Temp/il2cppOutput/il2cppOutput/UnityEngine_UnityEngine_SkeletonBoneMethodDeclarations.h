#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t1002;
struct SkeletonBone_t1002_marshaled;

void SkeletonBone_t1002_marshal(const SkeletonBone_t1002& unmarshaled, SkeletonBone_t1002_marshaled& marshaled);
void SkeletonBone_t1002_marshal_back(const SkeletonBone_t1002_marshaled& marshaled, SkeletonBone_t1002& unmarshaled);
void SkeletonBone_t1002_marshal_cleanup(SkeletonBone_t1002_marshaled& marshaled);
