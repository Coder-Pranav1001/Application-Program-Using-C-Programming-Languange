/*
	Description :- concept of pointer and array
	Author :- Pranav R Sonawane
*/

// pointer and array
// create a pointer of derived data type that is array
// pointer to array

#include<stdio.h> 

int main()
{
	int Arr[5] = {10,20,30,40,50}; // array initialization
	
	int *p = &(Arr[0]); // pointer points to 0 element of Arr
	
	int *q = &(Arr[4]); // pointer points to 5 element of Arr
	
	printf("Value of Arr[0] : %d\n",Arr[0]); // 10
	printf("Value of Arr[4] : %d\n",Arr[4]); // 50
	printf("Address of Arr : %u\n",Arr);
	printf("Address of Arr[1] : %u\n",&Arr[1]);
	printf("Address of p : %u\n",&p);
	printf("Address of q : %u\n",&q);
	printf("size of Arr[4] : %d\n",sizeof(Arr[4])); // 4
	printf("size of arr : %d\n",sizeof(Arr)); // 20
	printf("size of *p : %d\n",sizeof(*p)); // 4
	printf("size of *q : %d\n",sizeof(*q)); // 4
	printf("size of p : %d\n",sizeof(p)); // 8
	printf("size of q : %d\n",sizeof(q)); // 8
	
	return 0;
} 