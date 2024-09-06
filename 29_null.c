/*
	Description :- NULL Pointer
	Author :- Pranav R Sonawane
*/

// NULL pointer

// #define NULL (void*)0

#include<stdio.h>

int main()
{
	int *p = NULL; // NULL is a MACRO
	
	int *q; // this pointer may occre will get segmentation fault
	
	printf("%d\n",*q); 
	
	return 0;
}  
