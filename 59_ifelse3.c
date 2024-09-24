/*
	Description :- if else if
	Author :- Pranav R Sonawane
*/

// if else if lader

#include<stdio.h>
int main()
{
	auto int iStd = 0;
	 
	printf("Enter your standard \n");
	scanf("%d",&iStd);
	
	if(iStd == 1)
	{
		printf("Your Exam at 8 AM \n");
	}
	else if(iStd == 2)
	{
		printf("Your Exam at 9 AM \n");
	}
	else if(iStd == 3)
	{
		printf("Your Exam at 10 AM \n");
	}
	else if(iStd == 4)
	{
		printf("Your Exam at 11 AM \n");
	}
	else if(iStd == 5)
	{
		printf("Your Exam at 12 PM \n");
	}
	else
	{
		printf("Invalid Standard\n");
	}
	
	return 0;
}