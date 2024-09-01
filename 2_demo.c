/*
	Description :- Array and Pointer creation and reading
	Author :- Pranav R Sonawane
*/

#include<stdio.h>
int main()
{
	int no = 10; // variable initialization
	int Data[5]; // array creation
	//Data is a one dimentional array
	//which contains 5 elements 
	//each element is of type integer
	
	// Array initialization
	Data[0] = 11;
	Data[1] = 21;
	Data[2] = 51;
	Data[3] = 101;
	Data[4] = 111;
	
	int *p = &no;
	//p is a pointer is of type integer 
	//which holds address of no
	
	return 0;
}
