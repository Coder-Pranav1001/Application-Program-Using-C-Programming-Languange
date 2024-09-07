/*
	Description :- pointer of a structure using indirect accessing operator 
	Author :- Pranav R Sonawane
*/

// structure
// create a pointer of a structure
// structure initialization using indirect accessing operator 
 
#include<stdio.h>

// Structure Diclaration
struct Demo
{
	int iValue;
	float fValue;
	int iNo;
};
 
int main()
{
	// structure object creation
	struct Demo obj1;                                                                                          
	
	// struct Demo p* = &obj1; // its also allow
	
	struct Demo *p = NULL; 
	// p is a pointer which holds address of struct Demo
	//  currently its holds nothing
	
	// now the p pointer is pointing to address of obj1
	p = &obj1;
	
	// structure initialization using indirect accessing operator
	p -> iValue = 11;
	p -> fValue = 10.11;
	p -> iNo = 21;
	// -> indirect accessing operator
	
	printf("Address of obj1 : %d\n",&obj1);
	printf("Value of iValue : %d\n",p->iValue); // 11
	printf("Value of iNo : %d\n",obj1.iNo); // 21
	printf("Address of obj1 : %d\n",p);
	
	return 0;
}