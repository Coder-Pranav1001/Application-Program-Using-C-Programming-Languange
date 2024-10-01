/*
	Description :- Loops(while loop)
	Author :- Pranav R Sonawane
*/

// while loop
// print Hello Developer using while loop 

#include<stdio.h>
int main()
{
	int iCnt = 0; // counter
	int iNo = 0;
	
	printf("Enter the number how many time you want to Display\n");
	scanf("%d",&iNo);
	
	while(iCnt < iNo)
	{
		printf("Hello Developer\n");
		iCnt++;
	}
	
	return 0;
}