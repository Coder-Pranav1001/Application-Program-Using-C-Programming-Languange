/*
	Description :- Understand Function's every words
	Author :- Pranav R Sonawane
*/

#include<stdio.h>
//Addition is function name
int Addition(int No1, int No2)//No1,No2 are function argument
//int is Datatype of return value
{
	int Ans = 0; // Local Variable
	Ans = No1 + No2; // Statement / Expression
	
	return Ans;// return statement
	// Ans is a return value
}
 
int main()
{
	int Ret = 0; // Local Variable
	//Function call
	Ret = Additon(10,11);//Function parameters
	//Ret to collect the return value
	return 0;
}
 