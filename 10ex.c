#include<stdio.h>
main()
{
	/*
1. Find area of a rectangle
2. Find ASCII value of a character
3. Convert Celsius to Fahrenheit
4. Swap value of two variables
5. Check the given number is odd or even
6. Check whether a character is vowel or consonant
7. Find largest among three numbers
8. Leap year checking
9. Positive negative checking
10. Quadratic equation
	*/
/*
	// Short
	// 1. Find area of a rectangle //
	float width , longitude ,total;
	puts("Find area of a rectangle");
	printf("Enter Longitude and Width= \n");
	scanf("%f%f",&longitude,&width);
	total= longitude * width ;
	printf("Total= %f", total);
*/

/*
	// longer
	// 1. Find area of a rectangle //
	float width , longitude, total;
	puts("This find area of a rectangle");
	printf("Enter Longitude : ");
	scanf("%f", &longitude);
	printf("Enter Width : ");
	scanf("%f", &width);
	total=longitude*width;
	printf("Area of a rectangle : %f", total);
*/
/*
	//2. Find ASCII value of a character
	int number;
	char chr;
	printf("Find ASCII value of a character");
	printf("Enter Letter= ");
	scanf("%c", &chr);
	number=chr;
	printf("ASCII value of a character %c = %d",chr,number);
*/
/*
	//3. Convert Celsius to Fahrenheit
	float f;
	int c;
	printf("Convert Celsius to Fahrenheit");
	printf("Enter Celsius : ");
	scanf("%d",&c);
	f=(9/5 * c) + 32 ;
	printf("%d celsius = %f fehrenheit",c,f);
*/

/*
	// 4. Swap value of two variables
	int a , b;
	puts("Enter value A and B : ");
	scanf("%d%d", &a, &b);
	//	puts("Enter value B : ");
	//  scanf("%d", &b);
	a=b;
	b=a;
	printf("Swap value of 2 variables A= %d , B= %d",a,b); 
*/
/*
	// 5. Check the given number is odd or even
	int number,sum;
	printf("Input number for know that it is Odd or Even number : ");
	scanf("%d", &number);
	sum=number%2;
	if (sum==0)
	{
		printf("%d is even Number", number);
	}
	else
	{
		printf("%d is Odd Number", number);
	}

*/
/*
	//6. Check whether a character is vowel or consonant
 	char letter;
 	printf("Is it vowel or consinent");
 	printf("Enter : ");
 	scanf("%c", &letter);
 	if (letter=='a'||letter== 'A'||letter =='e'||letter=='E'||letter=='i'||letter=='I'||letter=='o'||letter=='O'||letter=='u'||letter=='U' )
 	{
 		printf("vowel");	
	}
	else 
	{
		printf("consinent");
	}
*/

/*
	//7. Find largest among three numbers
	char cha;
	int num1,num2,num3;
	printf("Find largest among three numbers");	
	printf("Enter 3 among");
	scanf("%d%d%d",&num1,&num2,&num3);
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
*/
	//8. Leap year checking
}
