/*
	Description :- Array creation, initialization, reading and storage class of array
	Author :- Pranav R Sonawane
*/

// Array
// How to create array
// How to read statement
// Storage class of array

#include<stdio.h>

int main()
{
	int no = 11;
	// no is a variable of type integer initialize with 11
	
	// Array defination
	int Arr[5]; // Array creation , auto storage class
	// Arr is one dimentional array , which contains five elements and each element is of type integer .
 
	// Array member by member initialization
	Arr[0] = 11;
	Arr[1] = 21;
	Arr[2] = 51;
	Arr[3] = 101;
	Arr[4] = 111;

	// Member initialization list
	int Brr[5] = {11,21,51,101,111}; // auto storage class
	
	int Crr[] = {11,21,51,101,111}; // auto storage class
	
	// int Drr[]; // error
	
	return 0;
}

