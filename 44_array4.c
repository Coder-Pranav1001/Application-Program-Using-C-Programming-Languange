/*
	Description :- Array and Pointer correlation
	Author :- Pranav R Sonawane
*/

// Array and Pointer correlation

#include<stdio.h>

int main() 
{
	int Arr[5] = {10,20,30,40,50}; // Array initialization
	// [] Array subscript operator
	
	printf("Value of Arr[0] : %d\n",Arr[0]); // 10
	printf("Value of Arr[4] : %d\n",Arr[4]); // 50
	printf("Address of Arr : %d\n",Arr);
	printf("Address of Arr : %d\n",&Arr);
	printf("Address of Arr : %d\n",&(Arr[0]));
	printf("%d\n",Arr+1);
	printf("%d\n",Arr+2);
	printf("%d\n",(&Arr)+1);
	printf("size of Arr : %d\n",sizeof(Arr)); // 20 byte
	printf("size of Arr[2] : %d\n",sizeof(Arr[2])); // 4 byte
	printf("%d\n",Arr[2]); // 30
	printf("%d\n",*(Arr+2)); // 30
	printf("%d\n",*(2+Arr)); // 30
	printf("%d\n",2[Arr]); // 30
	   
	return 0;
} 

/*
	Imaginary base address :- 100

	Arr[2]; -> 30
	
	*(Arr+2) -> *(100+2) -> *(108) -> 30
	
	*(2+Arr) ->*(2+100) -> *(108) -> 30
	
	2[Arr] -> 30
	
*/