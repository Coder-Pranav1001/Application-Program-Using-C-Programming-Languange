/*
	Description :- Shorthand operator increment ++
	Author :- Pranav R Sonawane
*/

// Shorthand Operator
// increment ++
// pre-increment
// post-increment

#include<stdio.h>
int main()
{
	// variable initialization
	int no1 = 10;
	int no2 = 10;
	int ans1 = 0;
	int ans2 = 0;
	
	ans1 = no1++; // post-increment
	printf("Value of ans1 : %d\n",ans1); // 10
	printf("Value of no1 : %d\n",no1); // 11
	
	ans2 = ++no2; // pre-increment
	printf("Value of ans2 : %d\n",ans2); // 11
	printf("Value of no2 : %d\n",no2); // 11
	
	return 0;
}