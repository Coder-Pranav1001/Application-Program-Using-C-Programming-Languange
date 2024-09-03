/*
	Description :- use of const, constant variable local constant and global constant
	Author :- Pranav R Sonawane
*/

// use of constant
// constant variable

#include<stdio.h>
const int A = 50; // Global constant

int main()
{
	int No1 = 10;
	
	const int No2 = 10;//constant variable
	
	No1++; // Allowed
	// No2++; // Not Allowed error 
	
	No1 = 20; // Allowed
	// No2 = 20; // Not Allowed error
	
	printf("%d\n",No1);
 
	return 0;
} 
