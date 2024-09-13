/*
	Description :- Union
	Author :- Pranav R Sonawane
*/

#include<stdio.h>

// strucutre diclaration
struct Demo
{
	int iNo;
	int iValue;
	float fValue
};

// union diclaration
union Hello 
{
	int iNo;
	int iValue;
	float fValue;
};

int main()
{
	struct Demo dobj; // struct object creation
	union Hello hobj; // union object creation 
	
	dobj.iNo = 11;
	dobj.iValue = 21;
	
	hobj.iNo = 11;
	hobj.iValue = 21;
	
	printf("Size of dobj : %d\n",sizeof(dobj)); // 12 Byte
	printf("Size of hobj : %d\n",sizeof(hobj)); // 4 Byte
	
	printf("Value of iNo of Demo : %d\n",dobj.iNo); // 11
	printf("Value of iValue of Demo : %d\n",dobj.iValue); // 21
	printf("Value of iNo of Hello : %d\n",hobj.iNo); // 21
	printf("Value of iValue of Hello : %d\n",hobj.iValue); // 21
	
	return 0;
}

