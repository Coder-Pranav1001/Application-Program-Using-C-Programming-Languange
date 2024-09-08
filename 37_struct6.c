/*
	Description :- Structure inside another structure (nested strucutre)
	Author :- Pranav R Sonawane
*/

// Structure
// Nested strucutre
// First way of create nested structure

#include<stdio.h>

// Structure declaration
struct Demo // Demo is naked structure
{
	int i;
	int j;
};

struct Hello // Outer strucutre
{
	int no;
	float f;
	
	// object of struct Demo
	struct Demo dobj; // Inner strucutre
};

int main()
{
	struct Hello hobj; // object of struct Hello
	// strucutre initialization
	hobj.no = 10;
	hobj.f = 11.11;
	hobj.dobj.i = 21;
	hobj.dobj.j = 51;
	
	printf("Value of i : %d\n",hobj.dobj.i); // 21
	printf("Size of hobj : %d\n",sizeof(hobj)); // 16
	
	return 0;
}