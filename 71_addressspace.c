/*
	Description :- Address space and Storage class ( Multiple Variable and its Memory Location )
	Author :- Pranav R Sonawane
*/

#include<stdio.h>
#include<stdlib.h>

// extern storage class
int arr[4] = {10,20,30,40}; // non bss section which is a part of data section
	
// extern storage class
int no; // bss section which is a part of data section

// extern storage class
extern int iNum = 10; // non bss section which is a part of data section

int main()
{ 
    // auto storage class  
	int brr[3] = {11,21,51}; // stack section
	
	register int x = 20; // EAX 
	
	// auto storage class
	int *p = NULL; // stack section
	
	// static storage class
	static int value = 11; // static segment which is a part of data section
	
	// Dynamic memory allocation
	p = (int*)malloc(sizeof(int)*4); // Heap section / Free Store
	
	printf("Jay Ganesh\n"); // Text Section
	
	return 0;
}