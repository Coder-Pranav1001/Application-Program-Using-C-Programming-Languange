/*
	Description :- traversal of a string
	Author :- Pranav R Sonawane
*/

#include<stdio.h>
int main()
{
	char Arr[7] = "Pranav";
	char *Ptr = Arr;
	
	
	while(*Ptr != '\0') 
	{
		printf("%c\n",*Ptr);
		Ptr++;
	}
	 
	return 0;
}  
