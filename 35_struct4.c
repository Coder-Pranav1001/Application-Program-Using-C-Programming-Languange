/*
	Description :- array of structure 
	Author :- Pranav R Sonawane
*/ 

// Structure
// Inside a structure we can create an array
// initialize array of structure
// Reading

#include<stdio.h>

// Array of structure declaration
struct Demo
{
	// members of a structure
	int Arr[3];
	float Brr[2];
};

int main()
{
	// Reading
	// obj is the object of struct Demo
	// Demo is the structure which contains 2 members.
	// first mamber is one dimentional array which contains 3 element
	// and each element is of type integer
	// second member is one dimentional array which contains 2 element
	// and each element is of type float
	struct Demo obj; // Object creation of strucutre
	
	// Array of strucutre initialization by using member by member initialization list 
	obj.Arr[0] = 11;
	obj.Arr[1] = 21;
	obj.Arr[2] = 51;
	
	obj.Brr[0] = 11.10;
	obj.Brr[1] = 21.10;
	
	printf("Value of Arr[2] : %d\n",obj.Arr[2]);
	printf("Size of Arr : %d\n",sizeof(obj.Arr));
	printf("Size of Structure : %d\n",sizeof(obj));
	
	return 0;
}