/*
	Description :- find the length of string
	Author :- Pranav R Sonawane
*/

#include<stdio.h>

int strlen(char *str)
{
	int iCnt = 0;
	
	while((*str) != '\0')
	{
		iCnt++;
		str++;
	}
	return iCnt;
}
 
int main()
{
	char Arr[20] = {'\0'}; // \0 is default value of character
	int iRet = 0;
	
	printf("Enter your string \n");
	scanf("%s",Arr);
	
	printf("Entered name is : %s\n",Arr);
	
	iRet = strlen(Arr);
	
	printf("String length is : %d",iRet);
	
	return 0;
}