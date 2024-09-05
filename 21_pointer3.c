/*
	Description :- concept of pointer to pointer
	Author :- Pranav R Sonawane
*/

// Pointer
// create a pointer of derived data type that is pointer
// concept of pointer to pointer

#include<stdio.h>

int main()
{
	int no = 11;
	
	int *x = &no; 
	
	int *p = &no;
	
	int **q = &p;
 
	int ***a = &q;
	
	int ****b = &a;
	
	int *****c = &b;
	
	return 0;  
}