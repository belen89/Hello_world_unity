#pragma once
#include <stdint.h>
// System.String
struct String_t;
// Vuforia.Image
struct Image_t582;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t652;
// Vuforia.TrackableImpl
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableImpl.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// Vuforia.QCARManagerImpl/ImageHeaderData
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_QCARManagerImpl_Ima.h"
// Vuforia.WordImpl
struct  WordImpl_t653  : public TrackableImpl_t544
{
	// System.String Vuforia.WordImpl::mText
	String_t* ___mText_2;
	// UnityEngine.Vector2 Vuforia.WordImpl::mSize
	Vector2_t184  ___mSize_3;
	// Vuforia.Image Vuforia.WordImpl::mLetterMask
	Image_t582 * ___mLetterMask_4;
	// Vuforia.QCARManagerImpl/ImageHeaderData Vuforia.WordImpl::mLetterImageHeader
	ImageHeaderData_t616  ___mLetterImageHeader_5;
	// Vuforia.RectangleData[] Vuforia.WordImpl::mLetterBoundingBoxes
	RectangleDataU5BU5D_t652* ___mLetterBoundingBoxes_6;
};
