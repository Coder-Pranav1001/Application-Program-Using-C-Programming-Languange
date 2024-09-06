/*
	Description :- function pointer, prototype, reading 
	Author :- Pranav R Sonawane
*/

// pointer
// function pointer
// function pointer creation
// prototype
// function pointer reading

#include<stdio.h>

// Addition is a funciton
// which accepts 2 parameters 
// first is integer and second is integer
// and that function returns integer.
int Addition(int no1, int no2)
{
	int Ans = 0;
	Ans = no1 + no2;
	return Ans;
}

int main()
{
	auto int iNum1 = 10;
	auto int iNum2 = 20;
	auto int ret = 0;
	
	// ret = Addition(iNum1,iNum2); // normal function call
	int (*fptr)(int,int); // prototype
	// fptr is a pointer which points to the function 
	// which accepts 2 parameters first is integer and second is integer
	// and that function returns integer.
	
	fptr = Addition; // store the address
	
	printf("Address of Addition Function is : %d\n",Addition);
	
	ret = fptr(iNum1,iNum2); // call with the function pointer
	
	printf("Addition is : %d\n",ret); // 30
	
	return 0;
}

