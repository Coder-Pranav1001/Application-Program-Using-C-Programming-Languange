/*
	Description :- concept of constant object of structure
	Author :- Pranav R Sonawane
*/

// constant object of structure

#include<stdio.h>

// structure diclaration
struct Demo
{
	int iValue;
	float fValue;
};

int main()
{
	const struct Demo dobj = {11, 10.11}; // Constant object of a structure
	
	printf("Value of iValue : %d\n",dobj.iValue);
	printf("Value of fValue : %f\n",dobj.fValue);
	
	// dobj.iValue++; // not allowed
	// dobj.fValue++; // not allowed
	
	return 0;
}