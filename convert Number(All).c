/*
#include<stdio.h>
int main()
{
	int     number,index,i;
    int     bin[32];
 
    printf("Enter decimal number: ");
    scanf("%d",&number);
 
    index=0;              //initialize index to zero
    while(number>0)
    {
        bin[cnt]=number%2;
        number=number/2;
        index++;
    }
 
    //print value in reverse order
    printf("Binary value is: ");
    for(i=(cnt-1); i>=0;i--)
        printf("%d",bin[i]);
 
    return 0;	
}
*/
/*C program to convert number from decimal to octal*/
/*
#include <stdio.h>
 
int main()
{
    int     number,cnt,i;
    int     oct[32];
 
    printf("Enter decimal number: ");
    scanf("%d",&number);
 
     
    cnt=0;              //initialize index to zero
    while(number>0)
    {
        oct[cnt]=number%8;
        number=number/8;
        cnt++;
    }
 
    //print value in reverse order
    printf("Octal value is: ");
    for(i=(cnt-1); i>=0;i--)
        printf("%d",oct[i]);
 
    return 0;
}
*/
/*C program to convert number from decimal to hexadecimal*/
/*
#include <stdio.h>
 
int main()
{
    int number,cnt,i;
    char    hex[32];    //bcoz it contains characters A to F
 
    printf("Enter decimal number: ");
    scanf("%d",&number);
 
     
    cnt=0;              //initialize index to zero
    while(number>0)
    {
        switch(number%16)
        {
            case 10:
                hex[cnt]='A'; break;
            case 11:
                hex[cnt]='B'; break;
            case 12:
                hex[cnt]='C'; break;
            case 13:
                hex[cnt]='D'; break;
            case 14:
                hex[cnt]='E'; break;
            case 15:
                hex[cnt]='F'; break;
            default:
                hex[cnt]=(number%16)+0x30;  //converted into char value
        }
        number=number/16;
        cnt++;
    }
 
    //print value in reverse order
    printf("Hexadecimal value is: ");
    for(i=(cnt-1); i>=0;i--)
        printf("%c",hex[i]);
 
    return 0;
}
  */
/*
  //C program to convert number from binary to decimal
 
#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    char bin[32]={0};
    int  dec,i;
    int  cnt;   //for power index
 
    printf("Enter binary value: ");
    gets(bin);
 
    cnt=0;
    dec=0;
    for(i=(strlen(bin)-1);i>=0;i--)
    {
        dec=dec+(bin[i]-0x30)*pow((double)2,(double)cnt);
        cnt++;
    }
 
    printf("DECIMAL value is: %d",dec);
 
    return 0;
} 
*/

/*
//C program to convert number from octal to decimal
 
#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    char oct[32]={0};
    int  dec,i;
    int  cnt;   //for power index
 
    printf("Enter octal value: ");
    gets(oct);
 
    cnt=0;
    dec=0;
    for(i=(strlen(oct)-1);i>=0;i--)
    {
        dec= dec+ (oct[i]-0x30)*pow((double)8,(double)cnt);
        cnt++;
    }
 
    printf("DECIMAL value is: %d",dec);
 
    return 0;
}
*/
/*
//program to convert number from hexadecimal to decimal
 
#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    char hex[32]={0};
    int  dec,i;
    int  cnt;   //for power index
    int  dig;   //to store digit
 
    printf("Enter hex value: ");
    gets(hex);
 
    cnt=0;
    dec=0;
    for(i=(strlen(hex)-1);i>=0;i--)
    {
        switch(hex[i])
        {
            case 'A':
                dig=10; break;
            case 'B':
                dig=11; break;
            case 'C':
                dig=12; break;
            case 'D':
                dig=13; break;
            case 'E':
                dig=14; break;
            case 'F':
                dig=15; break;
            default:
                dig=hex[i]-0x30;
        }
        dec= dec+ (dig)*pow((double)16,(double)cnt);
        cnt++;
    }
 
    printf("DECIMAL value is: %d",dec);
    return 0;
}
*/

/**
 * C program to create simple calculator using switch case and functions
 */

#include <stdio.h>


/** 
 * Function declarations for calculator
 */
float add(float num1, float num2); // return_type function_name (arguments or parameters);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);



int main()
{
    char op;
    float num1, num2, result=0.0f;

    /* Print welcome message */
    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----------------------------\n");
    printf("Enter [number 1] [+ - * /] [number 2]\n");

    /* Input two number and operator from user */
    scanf("%f %c %f", &num1, &op, &num2);

    switch(op)
    {
        case '+': 
            result = add(num1, num2); //function call
            break;

        case '-': 
            result = sub(num1, num2);
            break;

        case '*': 
            result = mult(num1, num2);
            break;

        case '/': 
            result = div(num1, num2);
            break;

        default: 
            printf("Invalid operator");
    }

    /* Print the result */
    printf("%.2f %c %.2f = %.2f", num1, op, num2, result);

    return 0;
}


/**
 * Function to add two numbers
 */
float add(float num1, float num2)
{
    return num1 + num2;
}

/**
 * Function to subtract two numbers
 */
float sub(float num1, float num2)
{
    return num1 - num2;
}

/**
 * Function to multiply two numbers
 */
float mult(float num1, float num2)
{
    return num1 * num2;
}

/**
 * Function to divide two numbers
 */
float div(float num1, float num2)
{
    return num1 / num2;
}

















