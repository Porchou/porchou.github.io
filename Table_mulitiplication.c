#include<stdio.h>
main()
{
	// write a program to display the muliplication table from user input
/*	int number,i,sum=0;
	printf("Enter Number : ");
	scanf("%d",&number);
	for(i=1;i<=10;i++)
	{
		sum=number*i;
		printf("%d * %d = %d \n",number,i,sum);
	}
}*/
//write a program to display muliplicastion table
/*
	int number , i,j, sum=0;
	printf("Enter Number : ");
	scanf("%d",&number);
	for (i=1;i<=number;i++)
	{
		for(j=1;j<=10;j++)
		{
			sum=number*j;
			printf("%d * %d = %d \n",i,j,sum );
		}
	printf("---------------------------------------------\n");
	}
*/
// test star in nested for loop
// star 01
	/*
		#
		##
		###
		.........(n)
	*/
/*
	int i,j;
	for (i=0;i<5;i++)
	{
		printf("#");
		for ( j=0; j<i;j++)
		{
			printf("#");
		}
	printf("\n");
	}
*/
	//star 02
	/*
		####....... i=5(i++); j--
		###
		##
		#
	*/
/*
	int i,j;
	for (i=0;i<5;i++)
	{
		printf("I");
		for (j=5;j>i;j--)
		{
			printf("J");
		}
		printf("\n");
	}
*/	
	//star 03
	/*	
			#
		   ##
		  ###
		 ####
		#####
	*/
/*
	int i , j;
	for(i=1; i<=5; i++)			//this program check 2 for loop in one time 
    {
        for(j=i; j<5; j++)		//sub condition 01
        {
            printf(" ");
        }
        for(j=1; j<=i; j++) 	//sub condition 02
        {
            printf("#");
        }
        printf("\n");
    }
*/	
	//star 04
	/*
		*----
		**
		***
		****
		*****
	*/
	int i , j ;
	for ( )
	
	
		
	//program to sum only even numvber 
	 int i ,number, sum=0;
	 printf("Enter Number: ");
	 scanf("%d", &number);
	 for (i=1;i<=number;i++)
	 {
	 	if (i%2==1)
	 	continue ; 
		// continue is use for make condition still continue in loop after check one and back to one more;
	 	//sum=sum+i;
	 	sum+=i;
	 }
	 printf("The sum of even number is : %d",sum);
	 
}





































































































































































































































	
	
	
