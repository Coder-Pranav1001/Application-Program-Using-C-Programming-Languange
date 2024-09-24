/*
	Description :- MACRO 
	Author :- Pranav R Sonawane
*/

#include<stdio.h>

#define NULL (void*)0 // NULL is predefined MICRO
#define ROI 6.5

int main()
{
	int *p = NULL; // .c file created by the programmer
	int *p = (void*)0; // .i file converted by the pre-processor
	
	return 0;
}

// #define DOZEN 12 // Macro defination statement
// # is pre-processor directive symbol
// define is pre-processor keyword
// DOZEN is name of macro
// 12 is Replacement text of Macro


// #define SHEKADA 100
// #define OVER 6