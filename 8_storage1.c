/*
	Description :- Storage class, static storage class
	Author :- Pranav R Sonawane
*/

// Storage Class
// Static Storage Class

#include<stdio.h>

void Demo()// user define function
{
	auto int A = 10; //auto storage class
	A++; // ++ Value incremant by 1
	printf("%d\n",A); // Print Value of A
}
// %d d for decimal
 
void Hello()//user define function
{
	static int A = 10; //static storage class
	// value preserve because of static
	A++; //++ value increment by 1
	printf("%d\n",A); // Print Value of A
}

int main()// Entry point function
{
	Demo(); //Function call
	Demo(); //Function call
	
	Hello();// Function call	
	Hello();// Function call
	
	return 0;
}