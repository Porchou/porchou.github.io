#include<stdio.h>
main()
{
	int x1,x2;
	printf("Input x1=");
	scanf("%d",&x1);
	printf("Input x2=");
	scanf("%d",&x2);
	//first condition//
	if(x1!=x2)
	{
		printf("It not equal\n");
	
		if(x1>x2)
		{
			printf("x1 is bigger then x2"); 
		}
		else
		{
			printf("x1 is smaller then x2");
		}
	
	}
	
	else
	{
		printf("x1 = x2");
	}
	
}
