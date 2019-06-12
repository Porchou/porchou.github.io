#include<stdio.h>
#include <stdlib.h>
main()
{
	int i=0,scoreP=0,scoreC=0,computer[]={};
	char choice[]={},yesNo[]={};
	//char k{"rps"};
	char c[3]={"rsp"};
	
	do
	{
		
		start : 
		
		printf("Player: %d\t\t\t\t\t",scoreP);
		printf("Computer: %d ",scoreC);
		printf("\nEnter Your Choice (R/P/S ?) = ");
		scanf("%c", &choice[i]);
		fflush(stdin);
		if( ( choice[i]!='R'&& choice[i]!='r') && (choice[i]!='P'&& choice[i]!='p') && (choice[i]!='S'&&choice[i]!='s') )
		{
			printf("Can input only R/P/S !!!");
		}
		else
		{
		
			srand(time(0)) ;
			computer[i]= rand()%3 ;
			printf("\nComputer= %c", computer[c]);
			if ( computer[c]= choice[i] )
			{
				printf("\nYou Win!!!");
			}
			else
			{
				printf("\nYou Lose!!!");
			}
		
			
    	}
			printf("\nPlay again(Y/N) : ");
			scanf("%c", &yesNo[i]);
		i++ ;
	}while(yesNo[i]=='y'||yesNo[i]=='Y');
	
	
	
	
	
	
	
	
	
	
	
	
	
}
