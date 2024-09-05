/*
	Description :- pointer arithmatic
	Author :- Pranav R Sonawane
*/

// pointer arithmatic
// i] pointer + number
// ii] pointer - number
// ii] pointer - pointer

#include<stdio.h> 

int main()
{
	int Arr[5] = {10,20,30,40,50}; // array initialization
	
	int *p = &(Arr[0]); // pointer points to 0 element of Arr
	
	int *q = &(Arr[4]); // pointer points to 5 element of Arr
	
	return 0;
} 

/*
	// Addition
	
	i] Pointer + Number
	
	p = 100 //imaginary value
	
	p + 3 
	p + (3*(sizeof(pointer_type)))
	p + (3*sizeof(int))
	p + (3*4)
	p + 12
	100 + 12
    112
	
	// Substraction
	
	ii] Pointer - Number
	
	q = 116 //imaginary value
	
	q - 2
	q - (2*(sizeof(pointer_type)))
	q - (2*(sizeof(int)))
	q - (2*4)
	q - 8
	116 - 8 
	108
	
	
	iii] Pointer - Pointer
	
	p = 100 //imaginary value
	q = 116 //imaginary value
	
	q - p
	(q - p)/(sizeof(pointer_type))
	(q - p)/(sizeof(int))
	(q - p)/ 4
	(116 - 100)/ 4
	16/4
	4
	
*/