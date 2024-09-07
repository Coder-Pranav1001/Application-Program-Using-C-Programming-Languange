/*
	Description :- ways of create structure object initialization, reading
	Author :- Pranav R Sonawane
*/

// Structure
// create structure declaration
// Reading of structure
// ways of create structure object
// type of object initialization

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
	struct Demo obj1 = {11,10.11,21}; // member initialize list
	
	// Structure object creation
	struct Demo obj2; // the memory gets allocated
	
	// member by member initialization using direct accessing operator
	obj2.iNo = 51;
	obj2.fValue = 10.11;
	obj2.iValue = 21;
	// . is direct accessing operator
	
	printf("Value of iValue : %d\n",obj1.iValue); // 21
	printf("Size of obj1 : %d\n",sizeof(obj1)); // 12
	printf("Value of iValue : %d\n",obj2.iNo); // 51
	printf("Size of obj2 : %d\n",sizeof(obj2)); // 12
	
	return 0;
}