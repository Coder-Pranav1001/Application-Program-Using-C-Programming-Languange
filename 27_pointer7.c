/*
	Description :- pointer arithmatic using pointer
	Author :- Pranav R Sonawane
*/

// pointer arithmatic
// increment and decrement operator with pointer
// increment ++
// decrement --

#include<stdio.h>

int main()
{
	int Arr[5] = {10,20,30,40,50}; // array initialization
	
	int *p = &(Arr[0]); // pointer points to 0 element of Arr
	int *q = &(Arr[4]); // pointer points to 5 element of Arr
	
	printf("Value of p before increment is : %d\n",p);
	// increment
	p++; //p = p + 1
	/*
	p = 100 imaginary value
	p = p + 1
	p = p + 1*sizeof(pointer_type)
	p = p + 1*sizeof(int)
	p = p + 1*4
	p = p + 4
	p = 100 + 4
	p = 104
	*/
	printf("Value of p After increment is : %d\n",p);
	printf("---------------------------------------\n");
	printf("Value of q before decrement is : %d\n",q);
	// decrement
	q--; //q = q - 1
	/*
	q = 116 imaginary value
	q = q - 1 
	q = q - 1*sizeof(pointer_type)
	q = q - 1*sizeof(int)
	q = q - 1*4
	q = q - 4
	q = 116 - 4
	q = 112
	*/
	printf("Value of p After decrement is : %d\n",q);
	
	return 0;
}