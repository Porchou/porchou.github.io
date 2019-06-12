#include<stdio.h>
main()
{
	//write program to find the "!" of given number 
	int num,i=0,sum=1;
	printf("Number You want : ");
	scanf("%d", &num);
	while (i>=num)
	{
		sum=sum*i;
		i++;	
	}
	printf("sum= %d", sum);
}
