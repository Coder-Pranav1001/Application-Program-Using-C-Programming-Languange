/*
	Description :- concept of constant member of structure
	Author :- Pranav R Sonawane
*/

// constant member of structure

#include<stdio.h>

// structure diclaration
struct Demo
{
	const int iValue; // constant member
	const float fValue; // constant member
};

int main()
{
	struct Demo dobj = {11,10.11}; // Constant mamber of a structure
	
	printf("Value of iValue : %d\n",dobj.iValue);
	printf("Value of fValue : %f\n",dobj.fValue);
	
	// dobj.iValue++; // not allowed
	// dobj.fValue++; // not allowed
	
	
	return 0;
}