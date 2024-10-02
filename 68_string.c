/*
	Description :- string
	Author :- Pranav R Sonawane
*/ 
 
// ways of string creation 
  
 #include<stdio.h>
 #include<string.h> 
 
 int main()  
 {
	// First Way
	char Arr[5] = {'A','B','C','D','\0'};
	 
	// Second Way
	char Brr[5] = "ABCD";
	 
	printf("%s\n",Arr);
	
	printf("%s\n",Brr);
	
	printf("%c\n",Arr[0]); // A
	printf("%c\n",Arr[1]); // B
	printf("%c\n",Arr[2]); // C
	printf("%c\n",Arr[3]); // D
	
	printf("Size of Arr : %d\n",sizeof(Arr)); // 5
	printf("Size of Brr : %d\n",sizeof(Brr)); // 5
	
	printf("Length of string is %d\n",strlen(Arr)); // 4
	printf("Length of string is %d\n",strlen(Brr)); // 4
	
	return 0;
 }