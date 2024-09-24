/*
	Description :- if else if
	Author :- Pranav R Sonawane
*/

// if else if alder

#include<stdio.h>
int main()
{
	int iAge = 0;
	
	printf("Enter your age : \n");
	scanf("%d",&iAge);
	
	printf("your entered age : %d\n",iAge);
	
	if((iAge >= 0) && (iAge <= 10))
	{
		printf("Your ticket Amount is : 100\n");
	}
	else if((iAge >= 11) && (iAge <= 40))
	{
		printf("Your ticket Amount is : 500\n");
	}
	else if(iAge > 40)
	{
		printf("Your ticket Amount is : 300");
	}
	
	return 0;
}