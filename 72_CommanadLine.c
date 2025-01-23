/*
	Description :- Addition of Two Numbers using CommandLine Argument in C
	Author :- Pranav R Sonawane
*/

#include<stdio.h>
#include<stdlib.h> 

// main is function which accepts two parameter first is integer second is argv 
// which is one dimentional array where each element of that array is character pointer 
// and that funciton returns integer
int main(int argc, char *argv[]) // prototype of main function
{
	int Ans = 0;
	
	printf("Number of Executable is : %s\n",argv[0]);
	printf("Number of Command Line Argument are : %d\n",argc); // argc count of argument
	
	Ans = atoi(argv[1]) + atoi(argv[2]); // atoi ascii to integer
	printf("Addition is : %d\n",Ans);
	return 0;
}

/*
	gcc 72_CommandLine.c -o exe
	exe 11 21 
	Addition is : 32
*/