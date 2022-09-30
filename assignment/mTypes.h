#pragma once
#include<stdio.h>
#define dBool bool
#define dFloat float
#define dDouble double
#define dInt int
#define dInt8 __int8 
#define dInt16 __int16
#define dInt32 __int32
#define dInt64 __int64 
#define dChar char 

enum dBool2 { False, True, unknown };

dBool2 check() {
	dBool2 res;
	res = unknown;
	return res;
}





