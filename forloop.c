#include<stdio.h>
main()
{
	int number,i,sum=1;
	printf("Enter the Number You want= ");
	scanf("%d",&number);
	for ( i=1;i<=number;i++)
	{
		//total=total*i;
		sum=sum*i;
		
	}
	printf("total= %d", sum);
}
