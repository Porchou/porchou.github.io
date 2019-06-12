#include<stdio.h>
main()
{
	int num;
	printf("Enter value A");
	Printf("Enter value B");       //puts(" 1. Menu");
	Printf("+ for addition");
	Printf("- for minus");
	Printf("* for muti");
	Printf("/ for ");
	printf("Put your choice");
	scanf("%d",&num);
//	num = getchar();
	fflush (stdin);
	switch (num)
	{
		case '+':
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
