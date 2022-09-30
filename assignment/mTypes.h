#pragma once
#include<stdio.h>
#define dBool bool
#define dFloat float
#define dDouble double
#define dInt __int32
#define dInt8 __int8 
#define dInt16 __int16
#define dInt64 __int64 
#define dChar char
#define dChar64 char16_t
#define dChar32 char32_t

/*
typedef bool dBool
#define float dFloat
#define double dDouble
#define dInt __int32
#define dInt8 __int8
#define __int16 dInt16
#define __int64 dInt64 
#define char dChar
#define char16_t dChar64
#define char32_t dChar32
*/

enum dBool2 { False, True, unknown };

dBool2 check() {
	dBool2 res;
	res = unknown;
	return res;
}





