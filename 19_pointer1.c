// Pointer
/*
	Description :- Create pointer and reading
	Author :- Pranav R Sonawane
*/

// create a poinetr
// Reading

#include<stdio.h>

int main()
{
	int no = 11;
	
	int *p = &no; // pointer
	// p is a pointer which holds 
	// address of integer
	// currently it holds address of no
	
	// where no is a variable
	// of type integer currently initialised with 
	// the value 11
	
	return 0;
}

/*

	no = 11
	&no = 100  // 100 is imaginary address
	p = 100    // 100 is imaginary address
	&p = 200   // 200 is imaginary address
	*p = 11
	sizeof(no) = 4 byte
	sizeof(p) = 8 byte
	sizeof(*p) = 4 byte
	
*/