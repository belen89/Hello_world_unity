#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Vuforia.QCARManagerImpl/WordResultData
struct WordResultData_t614;
struct WordResultData_t614_marshaled;

void WordResultData_t614_marshal(const WordResultData_t614& unmarshaled, WordResultData_t614_marshaled& marshaled);
void WordResultData_t614_marshal_back(const WordResultData_t614_marshaled& marshaled, WordResultData_t614& unmarshaled);
void WordResultData_t614_marshal_cleanup(WordResultData_t614_marshaled& marshaled);
