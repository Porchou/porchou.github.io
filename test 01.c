//#include<stdio.h>
//int main()
//{
// int a = 0,b = 1,c = 2,d = 3, e = 4;
//a = b - c + d * e;
//printf("%d", a); /* will print 1-2+3*4 = 11 */   
//}
//return 0;


//
//#include <stdio.h>
//#include <math.h>
//int binary_decimal(int n);
//int decimal_binary(int n);
//void main()
//{ 
//	int n; 
//	char c;
//	printf("1. Enter alphabet 'd' to convert binary todecimal.\n");
//	printf("2. Enter alphabet 'b' to convert decimal tobinary.\n");
//	scanf("%c",&c);
//	if (c =='d' || c == 'D')
//	{ 
//		printf("Enter a binary number: ");
//		scanf("%d", &n);
//		printf("%d in binary = %d in decimal", n, binary_decimal(n)); 
//	}
//	if (c =='b' || c == 'B')
//	{ 
//		printf("Enter a decimal number: ");
//		scanf("%d", &n);
//		printf("%d in decimal in binary", n);
//		int e=decimal_binary(n);
//		printf("%d",e);
//	}
//}
//
//	int decimal_binary(int n)
//{ 
//	int rem, i=1, binary=0;
//	while (n!=0)
//	{ 
//		rem=n%2;
//		n/=2; //n=n/2; 
//		binary+=rem*i;
//		i*=10; 
//	}
//	return binary; 
//}
//
//int binary_decimal(int n)
//{ 
//	int decimal=0, i=0, rem;
//	while (n!=0)
//	{ 
//		rem = n%10;
//		n/=10;
//		decimal += rem*pow(2,i) ;
//		++i; 
//	}
//	return decimal;
//}

#include<stdio.h>
struct distancr 
{
	int feet;
	float inch;
	
} d1, d2, sum ;
int main ()
{
	printf("1st distance \n ") ;
	printf("Enter feet : ");
	scanf("%d", &d1.feet) ;
	printf("Enter inch : ") ;
	scanf("%f", &d1.inch) ;
	
	printf("2st distance \n ") ;
	printf("Enter feet : ");
	scanf("%d", &d2.feet) ;
	printf("Enter inch : ") ;
	scanf("%f", &d2.inch) ;
	
	sum.feet=d1.feet+d2.feet;
	sum.inch=d1.inch+d2.inch;
	if ( sum.inch>=12)
	{
		++sum.feet;
		sum.inch=sum.inch-12;
	}
	printf("Sum of Distance = %d'%f", sum.feet, sum.inch);
	return 0;
}



































