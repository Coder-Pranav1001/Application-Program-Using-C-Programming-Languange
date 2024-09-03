/*
	Description :- Storage class, Global static storage class
	Author :- Pranav R Sonawane
*/

// Storage class
// Global static
// first file

#include<stdio.h>

extern int no; // error

int main()
{
	printf("value of no : %d\n",no);
	
	return 0;
}

// gcc static1.c static2.c -o exe