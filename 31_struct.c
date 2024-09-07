/*
	Description :- create structure declaration, object, initialization, reading of a structure
	Author :- Pranav R Sonawane
*/

// Structure
// create structure declaration
// Reading of structure
// create structure object
// object initialization

#include<stdio.h>

// Demo is structure which contains three member
// first is integer, second is float, third is integer 
struct Demo // Structure declaration
{    
	// member of a structure
	int iNo;
	float fValue;
	int iValue;
};
 
int main()
{
	// Structure object creation
	struct Demo obj; // the memory gets allocated
	
	// object initialization
	obj.iNo = 11;
	obj.fValue = 10.11;
	obj.iValue = 21;
	// . is direct accessing operator
	
	printf("Value of iValue : %d\n",obj.iValue); // 21
	printf("Size of obj : %d\n",sizeof(obj)); // 12
	
	return 0;
}