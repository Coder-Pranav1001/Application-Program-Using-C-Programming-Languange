/*
	Description :- create a pointer of same structure inside the structure
	Author :- Pranav R Sonawane
*/

// if a structure contains a pointer of same type then it is called as a 
// self referential structure

#include<stdio.h>
struct Demo
{
	int i;
	struct Demo *ptr;
};

int main()
{
	struct Demo obj1;
	struct Demo obj2;
	struct Demo obj3;
	struct Demo *p = &obj1;
	
	obj1.i = 21;
	obj1.ptr = &obj2;
	
	obj2.i = 51;
	obj2.ptr = &obj3;
	
	obj3.i = 101;
	obj3.ptr = NULL;
	
	printf("size of structure : %d\n",sizeof(obj1));
	printf("Value of obj3.i : %d\n",(obj1.ptr->ptr->i));
	
	return 0;
}
