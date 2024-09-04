/*
	Description :- fatch the address and size of the array
	Author :- Pranav R Sonawane
*/

// Array 
// fatch the address and size of the array

#include<stdio.h>

int main()
{
	int Data[7]; // array having the storage class auto
	
	printf("Address of array is : %u\n",Data); // fatch the address of array
	
	printf("Size of array is : %d\n",sizeof(Data)); // fatch the size of array 28 bytes
	
	return 0;
} 