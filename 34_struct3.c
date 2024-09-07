/*
	Description :- array of structure obj
	Author :- Pranav R Sonawane
*/

// Structure
// Array of strucutre object
// initialize array of structure 
// Reading of array

#include<stdio.h>

// structure declaration
struct Demo
{
	// members of a structure
	int iNo;
	float fValue;
	int iValue;
};

int main()
{
	// Reading
	// Arr is one dimentional array which contains 4 element
	// each element is of type struct Demo
	// where Demo is a structure which contains 3 members
	// first is integer, second is float, third is integer
	struct Demo Arr[4]; // Array Creation
	
	// Array initialization by using member by member initialization list 
	Arr[0].iNo = 11;
	Arr[0].fValue = 10.11;
	Arr[0].iValue = 21;
	
	Arr[1].iNo = 51;
	Arr[1].fValue = 20.11;
	Arr[1].iValue = 101;
	
	Arr[2].iNo = 111;
	Arr[2].fValue = 30.11;
	Arr[2].iValue = 121;
	
	Arr[3].iNo = 151;
	Arr[3].fValue = 40.11;
	Arr[3].iValue = 201;
	
	printf("Size of Arr : %d\n",sizeof(Arr)); // 48
	printf("Size of Arr[1] : %d\n",sizeof(Arr[1])); // 12
	printf("Value of Arr[0].iNo : %d\n",Arr[0].iNo); // 11
	
	return 0;
}