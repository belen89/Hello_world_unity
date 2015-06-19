﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t1616;
struct RSAParameters_t1616_marshaled;

void RSAParameters_t1616_marshal(const RSAParameters_t1616& unmarshaled, RSAParameters_t1616_marshaled& marshaled);
void RSAParameters_t1616_marshal_back(const RSAParameters_t1616_marshaled& marshaled, RSAParameters_t1616& unmarshaled);
void RSAParameters_t1616_marshal_cleanup(RSAParameters_t1616_marshaled& marshaled);