#include<stdio.h>
 //check number is prime or not is mean that it is 
int check_prime(int);
 
main()
{
   int num, result;
   
   printf("Enter an integer to check whether it is prime or not.\n");
   scanf("%d",&num);
 
   result = check_prime(num);
   
   if ( result == 1 )
      printf("%d is prime.\n", num);
   else
      printf("%d isn't prime.\n", num);
   
   return 0;
}
 
int check_prime(int a)
{
   int c;
   
   for ( c = 2 ; c <= a - 1 ; c++ )
   {
      if ( a%c == 0 )
     return 0;
   }
   if ( c == a )
      return 1;
}
