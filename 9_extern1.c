/*
	Description :- Storage class, extern storage class
	Author :- Pranav R Sonawane
*/

// Storage class
// extern storage class
// first file

#include<stdio.h>

extern int no; // Diclaration of variable

int main()
{	
	printf("value of no : %d\n",no);

	return 0;
}

// gcc extern1.c extern2.c -o exe