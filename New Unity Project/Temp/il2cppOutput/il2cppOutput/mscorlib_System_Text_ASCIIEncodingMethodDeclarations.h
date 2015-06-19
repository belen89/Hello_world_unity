#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.ASCIIEncoding
struct ASCIIEncoding_t2221;
// System.Char[]
struct CharU5BU5D_t265;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t583;
// System.Text.EncoderFallbackBuffer
struct EncoderFallbackBuffer_t2232;
// System.Text.DecoderFallbackBuffer
struct DecoderFallbackBuffer_t2223;
// System.Text.Decoder
struct Decoder_t1957;

// System.Void System.Text.ASCIIEncoding::.ctor()
extern "C" void ASCIIEncoding__ctor_m12283 (ASCIIEncoding_t2221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m12284 (ASCIIEncoding_t2221 * __this, CharU5BU5D_t265* ___chars, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.String)
extern "C" int32_t ASCIIEncoding_GetByteCount_m12285 (ASCIIEncoding_t2221 * __this, String_t* ___chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m12286 (ASCIIEncoding_t2221 * __this, CharU5BU5D_t265* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t583* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char[],System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m12287 (ASCIIEncoding_t2221 * __this, CharU5BU5D_t265* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t583* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2232 ** ___buffer, CharU5BU5D_t265** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m12288 (ASCIIEncoding_t2221 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t583* ___bytes, int32_t ___byteIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.String,System.Int32,System.Int32,System.Byte[],System.Int32,System.Text.EncoderFallbackBuffer&,System.Char[]&)
extern "C" int32_t ASCIIEncoding_GetBytes_m12289 (ASCIIEncoding_t2221 * __this, String_t* ___chars, int32_t ___charIndex, int32_t ___charCount, ByteU5BU5D_t583* ___bytes, int32_t ___byteIndex, EncoderFallbackBuffer_t2232 ** ___buffer, CharU5BU5D_t265** ___fallback_chars, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetCharCount(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t ASCIIEncoding_GetCharCount_m12290 (ASCIIEncoding_t2221 * __this, ByteU5BU5D_t583* ___bytes, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t ASCIIEncoding_GetChars_m12291 (ASCIIEncoding_t2221 * __this, ByteU5BU5D_t583* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t265* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32,System.Text.DecoderFallbackBuffer&)
extern "C" int32_t ASCIIEncoding_GetChars_m12292 (ASCIIEncoding_t2221 * __this, ByteU5BU5D_t583* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t265* ___chars, int32_t ___charIndex, DecoderFallbackBuffer_t2223 ** ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxByteCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxByteCount_m12293 (ASCIIEncoding_t2221 * __this, int32_t ___charCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetMaxCharCount(System.Int32)
extern "C" int32_t ASCIIEncoding_GetMaxCharCount_m12294 (ASCIIEncoding_t2221 * __this, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Text.ASCIIEncoding::GetString(System.Byte[],System.Int32,System.Int32)
extern "C" String_t* ASCIIEncoding_GetString_m12295 (ASCIIEncoding_t2221 * __this, ByteU5BU5D_t583* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetBytes(System.Char*,System.Int32,System.Byte*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetBytes_m12296 (ASCIIEncoding_t2221 * __this, uint16_t* ___chars, int32_t ___charCount, uint8_t* ___bytes, int32_t ___byteCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.ASCIIEncoding::GetByteCount(System.Char*,System.Int32)
extern "C" int32_t ASCIIEncoding_GetByteCount_m12297 (ASCIIEncoding_t2221 * __this, uint16_t* ___chars, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Decoder System.Text.ASCIIEncoding::GetDecoder()
extern "C" Decoder_t1957 * ASCIIEncoding_GetDecoder_m12298 (ASCIIEncoding_t2221 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
