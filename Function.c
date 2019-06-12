#include<stdio.h>
#include<stdlib.h>
/*
C programming have 2 basic function is 
	1. Library Function 
	2. User Defined Function 
	
this is model of function

void function_name()
	{
		......................	
	}
	int main()
	{
	
	function_name() ;
	
	}
// {main(),printf(),scanf()} This is library Function 
*/
 

	// 01. Write a C program to add two integers. Make a function add to add integers and display sum inmain() function
/*Program to demonstrate the working of user defined function
#include <stdio.h>
int add(int a, int b);  //function prototype(declaration)
         
main()
{
     int num1,num2,sum;
     printf("Enters two number to add\n");
     scanf("%d %d",&num1,&num2);
     sum = add(num1,num2);         // function call 
     printf("sum=%d",sum); 
     return 0;
}
int add(int a,int b)            //function definition
{             
/* Start of function definition. 
     int add;
     add=a+b;
     return add;                  //return statement of function 
/* End of function definition.  
}       
	
*/	
		
//main()
//{
//	char input;
//	char dna,rna;
//	// take input from user
//	printf("Enter D to convert from DNA to RNA\n");
//	printf("Enter R to convert form RNA to DNA");
//	scanf("%c", &input);
//	if ( input=='d'|| input=='D')
//	{
//		error:
//		//convert
//		printf("Input DNA : ");
//		scanf("%c",&dna);
//		if ( input!='a'||'A' && input!='t'||'T' && input!='c'||'C' && input!='G'||'g')
//		{
//			printf("Have only A,T,C,G \n Enter again!!!");
//			return error;
//		}
//	}
//}	

/* Function I	
int main()
{
	
	printfSomething();
	printf_02();
	functionAdd();

	
	return 0;
}

	printfSomething()
	{
		printf("I'm a function!");
	
		
	}
	printf_02()
	{
		printf("\nI'm second Function !!");
	
	}
	functionAdd()
	{
		int a,b,c ;
		printf("\ninput 2 number : \n");
		scanf("%d%d",&a,&b);
		c=a+b;
		printf("%d",c);

	}
*/

//printSth();
int books= 23;

main()	
{
	printStarLine();
	printf("I have %d books\n", books);
	printStarLine();
}

void printStarLine()
{
	printf("*****************\n");
}
	
	
	
	
	
	
	
	
	
	
	
	

