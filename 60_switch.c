/*
	Description :- switch case
	Author :- Pranav R Sonawane
*/

// switch case

#include<stdio.h>
int main()
{
	int iStd = 0;
	
	printf("Enter your standard\n");
	scanf("%d",&iStd);
	
	switch(iStd)
	{
		case 1:
		printf("Your Exam at 8AM\n");
		break;
		
		case 2:
		printf("Your Exam at 9AM\n");
		break;
		
		case 3:
		printf("Your Exam at 10AM\n");
		break;
		
		case 4:
		printf("Your Exam at 11AM\n");
		break;
		
		case 5:
		printf("Your Exam at 12PM\n");
		break;
		 
		default:
		printf("Invalid Standard \n");
	} 
	
	return 0;
}