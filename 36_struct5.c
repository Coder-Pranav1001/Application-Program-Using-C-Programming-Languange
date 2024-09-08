/*
	Description :- pointer in structure and reading
	Author :- Pranav R Sonawane
*/

// Structure
// Pointer in structure
// Reading

#include<stdio.h>

// Structure declaration
struct Demo
{
	// members of a structure
	int *iPtr;
	float *fPtr;
};
 
int main()
{
	// Reading
	// Demo is a structure which contains 2 members.
	// first is pointer which holds address of integer
	// second is pointer which holds address of float
	struct Demo obj; // Object creation of strucutre
	
	int iNo = 10;
	float fValue = 3.10;
	
	obj.iPtr = &iNo;
	obj.fPtr = &fValue;
	
	printf("Value of iPtr : %d\n",(obj.iPtr));
	printf("Value of fPtr : %d\n",(obj.fPtr));
	printf("Value of iNo : %d\n",*(obj.iPtr)); // 10
	printf("Value of fValue : %f\n",*(obj.fPtr)); // 3.10
	
	return 0;
}