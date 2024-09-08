/*
	Description :- can't create object of same strucutre inside the strucutre
	Author :- Pranav R Sonawane
*/

#include<stdio.h>

struct Demo
{
	int i;
	int j;
	//struct Demo obj; // error
};

int main()
{
	struct Demo dobj;
	
	return 0;
} 