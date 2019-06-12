#include<stdio.h>
main()
{
	int i , a[5] ;
	printf("Enter value of array : ");
	for(i=0;i<5;i++)
	{
		scanf("%d", &a[i]);
	}
	printf("The array value are : ");
	for (i=0;i<5;i++)
	{
		printf("%d \n ", a[i]);
	}
	
}
