/*
	Description :- create the function and use the function
	Author :- Pranav R Sonawane
*/

#include<stdio.h>

// Function Defination
int Addition(int No1, int No2)//Local variable and function input argument
{ // Start Block
	int Ans = 0;// Local Variable of Addition 
	Ans = No1 + No2; // Addition by ALU (Arithmatic Logical Unit)
	
	return Ans;
} // End Block

// Entry point function 
int main() // The Code Execution start from hear 
{ // Start Block
	// Local Variable
	int A = 10; 
	int B = 11; 
	int C = 0; 
	 
	//Function call
	C = Addition(A,B);//function parameter
	
	printf("Addition of A and B is = %d",C); // Print the statement on consol
	
	return 0; // Convay to OS(Operating System) code gets successfully execution
} // End Block