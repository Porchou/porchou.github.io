#include <stdio.h>
int main()
{
	int math, his,eng, khmer, html,sum,avg;
	//float sum, avg;
	printf("5 Subject that you input your score \n");
	printf("Math = ");
	scanf("%d",&math);
	printf("History = ");
	scanf("%d",&his);
	printf("English = ");
	scanf("%d",&eng);
	printf("Khmer = ");
	scanf("%d",&khmer);
	printf("HTML = ");
	scanf("%d",&html);
	sum= math+his+eng+khmer+html;
	avg=sum/5;
	printf("Total Score = %d",&sum);

	printf("\nAvg of score = %d  ",&avg);
	
}
