/*
	Description :- Structure inside another structure (nested strucutre)
	Author :- Pranav R Sonawane
*/

// Structure
// Nested strucutre
// Second way of create nested structure

#include<stdio.h>

// Structure declaration

struct Hello 
{
	int no;
	float f;
	struct Demo // Demo is abstracted strucutre
	{
		int i;
	    int j;
	}dobj;
};

int main()
{
	struct Hello hobj; // object of struct Hello
	// strucutre initialization
	hobj.no = 10;
	hobj.f = 10.11;
	hobj.dobj.i = 11;
	hobj.dobj.j = 21;
	
	printf("Value of i : %d\n",hobj.dobj.i); // 11
	printf("Size of hobj : %d\n",sizeof(hobj)); // 16
	
	return 0;
}