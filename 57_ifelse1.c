/*
	Description :- if else
	Author :- Pranav R Sonawane
*/

#include<stdio.h>
int main()
{
	auto int Marks = 0;
	
	printf("Enter your Marks : \n");
	scanf("%d",&Marks);
	
	printf("your entered marks : %d\n",Marks);
	
	if(Marks >= 60)
	{
		printf("First Class\n");
	}
	else
	{
		printf("Not First Class\n");
	}
	 
	return 0;
}