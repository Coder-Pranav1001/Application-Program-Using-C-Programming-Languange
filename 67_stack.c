#include<stdio.h>

//////////////////////////////////////////////////////
// 
//	Function name : Addition
//	Input : Two Integer
//	Outout : Integer
//	Description : It is used to perform addition
//	Author : Pranav Ravindra Sonawane
//
//////////////////////////////////////////////////////
 
int Addition(int iNo1, int iNo2)
{
	auto int iAns = 0;
	
	iAns = iNo1 + iNo2;
	return iAns;
}

//////////////////////////////////////////////////////
//   Entry point function of addition application   //
//////////////////////////////////////////////////////

int main()
{
	auto int iValue1 = 0;
	auto int iValue2 = 0;
	auto int iRet = 0;
	
	printf("Enter the first number\n");
	scanf("%d",&iValue1); 
	
	printf("Enter the Second number\n");
	scanf("%d",&iValue2);
	
	iRet = Addition(iValue1,iValue2);
	
	printf("Addition is : %d",iRet);
	
	return 0;
}