/*
	Description :- Storage class , auto and register storage class and reading
	Author :- Pranav R Sonawane
*/

// Storage classes
// auto storage class
// register storage class
// reading

#include<stdio.h>

int X = 51; // Global Variable

void Demo()
{
	auto int no = 11 ; // auto storage class
	// no is a varibale is of type integer 
	// currently initialised with 11 
	// having the storage class auto  
	 
	auto int Data = 21; // auto storage class
	int Y; // auto storage class
	register int A = 51; // register storage class
}
 
int main()
{
	int i = 20; // auto storage class
	auto int j = 10; // auto storage class
	
	Demo(); // Function call
	
	return 0;
}