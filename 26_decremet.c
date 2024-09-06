/*
	Description :- Shorthand Operator decrement --
	Author :- Pranav R Sonawane
*/

// Shorthand Operator
// decrement --
// pre-decrement
// post-decrement

#include<stdio.h>
int main()
{
	// variable initialization
	int no1 = 10;
	int no2 = 10;
	int ans1 = 0;
	int ans2 = 0;
	
	ans1 = no1--; // post-decrement
	printf("Value of ans1 : %d\n",ans1); // 10
	printf("Value of no1 : %d\n",no1); // 9
	
	ans2 = --no2; // pre-decrement
	printf("Value of ans2 : %d\n",ans2); // 9
	printf("Value of no2 : %d\n",no2); // 9
	
	return 0;
}