#include<stdio.h>
main()
{
	char cha;

	int num1,num2,num3;
	printf("Number 1= \n");
	scanf("%d",&num1);
	printf("Number 2= \n");
	scanf("%d",&num2);
	printf("Number 3= \n");
	scanf("%d",&num3);
	if (num1!=cha && num2!=cha && num3!=cha)
	{
	
		if (num1==num2 && num2==num3 && num1==num3)
			printf("All Number is Equal!!!");
		else if (num1!=num2 && num2!=num3 && num1!=num3)
		{
		 	if (num1>num2 && num1>num3)
				printf("Greatest Number is Number 1=%d",num1);
			else if (num2>num1 && num2>num3)
				printf("Greatest Number is Number 2=%d",num2);
			else if (num3>num1 && num3>num2)
				printf("Greatest Number is Number 3=%d",num3);	
		}

		else 
	
			printf("Can not find the greatest Number!");
	}
	else 
		printf ("Your input is not Number!! Plz check again!!");
	
}
