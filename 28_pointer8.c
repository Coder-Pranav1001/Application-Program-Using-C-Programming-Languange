/*
	Description :- pointer which points to any type of data type, typecasting
	Author :- Pranav R Sonawane
*/

// void pointer
// create void pointer which points to any type of datatype
// create NULL pointer
// typecasting

#include<stdio.h>
int main()
{
	int iValue = 11;
	char cValue = 'A';
	float fValue = 10.11;
	double dValue = 20.11;
	
	void *ptr = NULL; // void pointer
	
	ptr = &iValue;
	printf("%d\n",*(int*)ptr); //int* is typecasting
	
	ptr = NULL;
	ptr = &fValue; 
	
	printf("%f\n",*(float*)ptr);
	
	ptr = NULL;
	ptr = &cValue;
	
	printf("%c\n",*(char*)ptr);
	
	ptr = NULL;
	ptr = &dValue;
	
	printf("%lf\n",*(double*)ptr);
	
	return 0;
}
