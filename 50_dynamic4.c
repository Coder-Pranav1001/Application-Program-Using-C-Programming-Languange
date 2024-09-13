/*
	Description :- Dynamic Memory Allocation (realloc)
	Author :- Pranav R Sonawane
*/

// Dynamic Memory Allocation
// realloc

#include<stdio.h>
int main()
{
	int *ptr = NULL;
	
	ptr = (int *)realloc(NULL,5*sizeof(int)); // It behaves like malloc
	
	realloc(ptr,0); // It behaves like free
	
	return 0;
} 