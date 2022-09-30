
#ifndef _mTYPES_
#define _mTYPES_
#include"mTypes.h"
#endif

#include<stdio.h>
#include<typeinfo>
#include<iostream>


dChar *inputCharArr() {
	dChar str[100];
	scanf_s("%s[^n]", str);
	return str;
}

void printCharArr(char* s) {
	printf("%s", s);
}

dBool2 getBool2() {
	dBool2 res = unknown;
	dChar in;
	scanf_s("%c",&in);

	if (tolower(in) == 'y')  res = True;
	if (tolower(in) == 'n')  res = False;

	return res;
}
void printBool2(dBool2 a) {
	if (a == True)
		printf("True\n");

	else if (a == False)
		printf("Flase\n");

	else
		printf("unknown");
}

dBool getBool() {
	dBool res = false;
	char in;
	scanf_s("%c", &in);

	if (tolower(in) == 'y')  res = True;

	return res;
}
dChar getChar(){
	dChar c;
	scanf_s("%c", &c);
	return c;
}
void printChar(dChar c) {
	printf("%c", c);
	
}

int main() {
	//dBool2 a = getBool2();
	//printBool2(a);
	char* s = inputCharArr();
	printCharArr(s);

	//dChar c = getChar();
	//printChar(c);

	return 0;
}