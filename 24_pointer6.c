/*
	Description :- pointer arithmatic
	Author :- Pranav R Sonawane
*/

// pointer arithmatic
// 1] pointer + number
// 2] pointer - numbar

#include<stdio.h>

int main()
{
	int Arr[5] = {10,20,30,40,50}; // array initialization
	
	int *p = &(Arr[0]); // pointer points to 0 element of Arr
	int *q = &(Arr[4]); // pointer points to 5 element of Arr
	
	printf("Number of elements between q and p are : %d\n",q-p); // 4
	
	// Pointer + Number
	printf("Value of p = %d\n",p);
	
	p + 3;
	
	printf("Value of p = %d\n",p);
	
	p = p + 3;
	
	printf("Value of p = %d\n",p);
	
	// Pointer - Number
	
	printf("Value of q = %d\n",q);
	
	q - 3;
	
	printf("Value of q = %d\n",q);
	
	q = q - 3;
	
	printf("Value of q = %d\n",q);
		
	return 0;
}