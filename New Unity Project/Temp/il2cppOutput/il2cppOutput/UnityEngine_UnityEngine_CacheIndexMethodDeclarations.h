#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t968;
struct CacheIndex_t968_marshaled;

void CacheIndex_t968_marshal(const CacheIndex_t968& unmarshaled, CacheIndex_t968_marshaled& marshaled);
void CacheIndex_t968_marshal_back(const CacheIndex_t968_marshaled& marshaled, CacheIndex_t968& unmarshaled);
void CacheIndex_t968_marshal_cleanup(CacheIndex_t968_marshaled& marshaled);
