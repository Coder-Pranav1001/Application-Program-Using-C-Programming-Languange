/*
	Description :- Dynamic Memory Allocation (calloc)
	Author :- Pranav R Sonawane
*/

// Dynamic Memory Allocation
// calloc

#include<stdio.h> 
#include<stdlib.h>
 
int main() 
{
	int Size = 0;
	int *Ptr = NULL;  

	printf("Enter number of elements : ");
	scanf("%d",&Size);
	
	Ptr = (int *)calloc(Size , sizeof(int)); // Step 1 : Allocation the memory
	if(Ptr == NULL) // == Comparison operator
	{
		printf("Unable to allocate the memory\n");
	} 
	else
	{
		printf("Memory succesfully allocated\n");
	}
	// Step 2 : Use the memory
	 
	free(Ptr); // Step 3 : Free the memory

	return 0;
}