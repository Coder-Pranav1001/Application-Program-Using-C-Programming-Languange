/*
	Description :- concept of padding
	Author :- Pranav R Sonawane
*/

#include<stdio.h>
#pragma pack(1) // Avoid padding 
// # is preprocessor directive symbol
// pragma is inbuilt MACRO
// pack(1) packing(1) byte

struct Demo
{
	char cValue;
	int iValue;
	float fValue;
	double dValue;
}; 

int main()
{
	printf("Size of structure : %d\n",sizeof(struct Demo)); // 32 Byte
	
	return 0;
}