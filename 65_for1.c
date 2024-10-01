/*
	Description :- Loops(for loop)
	Author :- Pranav R Sonawane
*/

// for loop 
// print I Love Coding using for loop  

#include<stdio.h>
int main()
{
	int iCnt = 0;
	int iNo = 0;
	
	printf("How Many Time You Want to display\n");
	scanf("%d",&iNo);
	
	for(iCnt=0; iCnt<iNo; iCnt++)
	{
		printf("I Love Coding\n");
	}
	
	return 0;
}