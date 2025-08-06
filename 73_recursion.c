/*
	Description :- (Recursion) Normal and Recursive funtion in C
	Author :- Pranav R Sonawane
*/

#include<stdio.h>

void DisplayI(int no) 
{
	int i = 1;
	while(i <= no)
	{
		printf("*\n");
		i++;
	}
}

void DisplayR(int no)
{
	static int i = 1;
	if(i <= no)
	{
		printf("*\n");
		i++;
		DisplayR(no); // Recursive call 
	}
}

int main()
{
	int iValue = 4;
	// DisplayI(iValue);
	DisplayR(iValue);
	return 0;
}
