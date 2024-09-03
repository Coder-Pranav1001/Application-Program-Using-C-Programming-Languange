/*
	Description :- Use of & (address operator) 
	Author :- Pranav R Sonawane
*/

// address operator
// &
// How to fatch the address of any variable

#include<stdio.h>

int main()
{
	int no = 11;
	
	char ch = 'A';
	
	printf("Value of no : %d\n",no); // %d decimal
	
	printf("Value of ch : %c\n",ch); // %c characher
	
	printf("address of no is : %u\n",&no); // %u unsigne integer

	printf("address of ch is : %u\n",&ch); // & address of operator
	
	return 0;
}