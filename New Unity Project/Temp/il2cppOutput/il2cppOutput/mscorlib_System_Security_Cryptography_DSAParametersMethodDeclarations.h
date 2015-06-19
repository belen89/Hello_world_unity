#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t1618;
struct DSAParameters_t1618_marshaled;

void DSAParameters_t1618_marshal(const DSAParameters_t1618& unmarshaled, DSAParameters_t1618_marshaled& marshaled);
void DSAParameters_t1618_marshal_back(const DSAParameters_t1618_marshaled& marshaled, DSAParameters_t1618& unmarshaled);
void DSAParameters_t1618_marshal_cleanup(DSAParameters_t1618_marshaled& marshaled);
