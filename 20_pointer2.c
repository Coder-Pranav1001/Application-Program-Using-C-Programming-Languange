/*
	Description :- concept of pointer which points to the primitive data type
	Author :- Pranav R Sonawane
*/

// Pointer
// create a pointer of premative data type
// concept of pointer which points to the primitive data type
// fatch the value and address of variable using pointer

#include<stdio.h>

int main()
{
	// char pointed data type
	char cValue = 'M'; // character
	char *cPtr = &cValue; // character pointer
	// char pointer type
	
	// int pointed data type
	int iValue = 21; // integer
	int *iPtr = &iValue; // integer pointer
	// int pointer type
	
	// float pointed data type
	float fValue = 10.11; // float
	float *fPtr = &fValue; // float pointer
	// float pointer type
	
	// double pointed data type
	double dValue = 20.11; // double
	double *dPtr = &dValue; // double pointer
	// double pointer type
	
	printf("-------------------------------\n");
	printf("Value of *cPtr : %c\n",*cPtr);
	printf("Address of cValue : %d\n",&cValue);
	printf("Value of cPtr : %d\n",cPtr);
	printf("Size of cValue : %d\n",sizeof(cValue));
	printf("Size of cPtr : %d\n",sizeof(cPtr));
	printf("Size of *cPtr : %d\n",sizeof(*cPtr));
	printf("-------------------------------\n");
	
	
	printf("-------------------------------\n");
	printf("Value of *iPtr : %c\n",*iPtr);
	printf("Address of iValue : %d\n",&iValue);
	printf("Value of iPtr : %d\n",iPtr);
	printf("Size of iValue : %d\n",sizeof(iValue));
	printf("Size of iPtr : %d\n",sizeof(iPtr));
	printf("Size of *iPtr : %d\n",sizeof(*iPtr));
	printf("-------------------------------\n");
	
	printf("-------------------------------\n");
	printf("Value of *fPtr : %f\n",*fPtr);
	printf("Address of fValue : %d\n",&fValue);
	printf("Value of fPtr : %d\n",fPtr);
	printf("Size of fValue : %d\n",sizeof(fValue));
	printf("Size of fPtr : %d\n",sizeof(fPtr));
	printf("Size of *fPtr : %d\n",sizeof(*fPtr));
	printf("-------------------------------\n");
	
	
	printf("-------------------------------\n");
	printf("Value of *dPtr : %lf\n",*dPtr);
	printf("Address of dValue : %d\n",&dValue);
	printf("Value of dPtr : %d\n",dPtr);
	printf("Size of dValue : %d\n",sizeof(dValue));
	printf("Size of dPtr : %d\n",sizeof(dPtr));
	printf("Size of *dPtr : %d\n",sizeof(*dPtr));
	printf("-------------------------------\n");

	return 0; 
}

