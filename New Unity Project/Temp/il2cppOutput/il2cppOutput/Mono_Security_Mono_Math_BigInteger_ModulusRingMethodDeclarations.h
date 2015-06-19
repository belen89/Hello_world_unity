#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t1675;
// Mono.Math.BigInteger
struct BigInteger_t1674;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m7992 (ModulusRing_t1675 * __this, BigInteger_t1674 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m7993 (ModulusRing_t1675 * __this, BigInteger_t1674 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1674 * ModulusRing_Multiply_m7994 (ModulusRing_t1675 * __this, BigInteger_t1674 * ___a, BigInteger_t1674 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1674 * ModulusRing_Difference_m7995 (ModulusRing_t1675 * __this, BigInteger_t1674 * ___a, BigInteger_t1674 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t1674 * ModulusRing_Pow_m7996 (ModulusRing_t1675 * __this, BigInteger_t1674 * ___a, BigInteger_t1674 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t1674 * ModulusRing_Pow_m7997 (ModulusRing_t1675 * __this, uint32_t ___b, BigInteger_t1674 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
