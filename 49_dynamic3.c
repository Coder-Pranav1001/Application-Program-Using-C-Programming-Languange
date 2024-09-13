/*
	Description :- Dynamic Memory Allocation (realloc)
	Author :- Pranav R Sonawane
*/

// Dynamic Memory Allocation
// realloc

#include<stdio.h>  
#include<stdlib.h>
 
int main() 
{
	int *ptr = NULL;
	
	ptr = (int *)malloc(5 * sizeof(int)); 
	
	ptr = (int *)realloc(ptr, 7*sizeof(int));
	
	ptr = (int *)realloc(ptr, 3*sizeof(int));
	
	free(ptr); 

	return 0;
}