/*
	Description :- Constant and Pointer and Reading
	Author :- Pranav R Sonawane
*/

#include<stdio.h>
int main()
{
	int no = 10;
	
	int *p = &no;
	// p is a pointer which holds address of integer
	
	const int *p = &no;
	// p is pointer which holds address of integer constant
	
	int *const p = &no;
	// p is a constant pointer which holds address of integer
	
	const int *const p = &no;
	int const *const p = &no;
	// p is a constant pointer which holds address of integer constant
	
	return 0;
}

/* 
----------------------------------------------------
	
	int no = 11;
	int i = 51;
	int *p = &no;
	
	no++; // Allowed
	
	p++; // Allowed
	
	(*p)++; // Allowed
	
	no = 21; // Allowed
	
	p = &i; // Allowed
	
----------------------------------------------------

	const int no = 11;
	int i = 51;
	const int *p = &no;
	
	no++; // Not Allowed
	
	p++; // Allowed 
	
	(*p)++; // Not Allowed
	
	no = 21; // Not Allowed
	
	p = &i; // Allowed
	
----------------------------------------------------
	
	int no = 11;
	int i = 51;
	int *const p = &no;
	
	no++; // Allowed
	
	p++; // Not Allowed
	
	(*p)++; // Allowed
	
	no = 21; // Allowed
	
	p = &i; // Not Allowed
	
----------------------------------------------------
	
	const int no = 11;
	int i = 51;
	const int *const p = &no
	
	no++; // Not Allowed
	
	p++; // Not Allowed
	
	(*p)++; // Not Allowed
	
	no = 21; // Not Allowed
	
	p = &i; // Not Allowed
	
----------------------------------------------------	
*/