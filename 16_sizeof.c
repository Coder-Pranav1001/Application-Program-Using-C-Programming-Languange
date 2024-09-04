/*
	Description :- use of sizeof operator
	Author :- Pranav R Sonawane
*/

// sizeof operator
// sizeof
// fatch the sizeof any data object 

#include<stdio.h>

int main()
{
	int no = 11;
	char ch = 'A';
	
	printf("Value of no is : %d\n",no); // 11
	
	printf("Value of ch is : %c\n",ch); // A
	
	printf("Address of no is : %u\n",&no);
	
	printf("Address of ch is : %u\n",&ch);
	
	printf("Size of no is : %d\n",sizeof(no)); // sizeof operator fatch the size 4 bytes
	
	printf("Size of ch is : %d\n",sizeof(ch)); // sizeof operator fatch the size 1 byte
	
	return 0;
}