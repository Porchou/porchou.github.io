#include<stdio.h>

main()
{
	int a, b, c, d, e, sum, avg;
	
	printf("Input a : ");
	scanf("%d",&a);
	
	printf("Input b : ");
	scanf("%d",&b);
	
	printf("Input c : ");
	scanf("%d",&c);
	
	printf("Input d : ");
	scanf("%d",&d);
	
	printf("Input e : ");
	scanf("%d",&e);
	
	sum = a + b + c + d + e;
	avg = sum / 5;
	
	printf("The average is : %d\nThe total is   : %d", avg, sum);
}
