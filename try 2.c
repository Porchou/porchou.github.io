#include<stdio.h>
 main()
{
	char num;     //int num;
	printf("Enter value A \n");
	printf("Enter value B \n");       //puts(" 1. Menu");
	printf("+ for addition \n");
	printf("- for minus \n");
	printf("* for muti \n");
	printf("/ for \n");
	printf("Put your choice \n");
	
	num = getchar();
	fflush (stdin);
	switch (num)
	{
		case '+' :
			printf("for addition -> A+B ");
			break;
		case '-' :
			printf(" For a minus -> A-B");
			break;
		case '*' :
			printf(" For a muli -> A*B");
			break;
		case '/' :
			printf(" For -> A/B ");
			break;
		default :
			printf("Error! in there have only 4 is +_*/");
			
		
			
	
	}
}
	
	

