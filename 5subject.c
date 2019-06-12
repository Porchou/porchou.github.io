#include<stdio.h>
/* Function to input and display a charater usting the function getchar*/

main()
{ 
 char a,b,c;
 a=getchar();
 fflush (stdin); 
 b=getchar();
 fflush (stdin); /*clear the buffer */
 c=getchar();
 fflush (stdin);
 putchar (a);
 putchar (b);
 putchar (c);
 
}
 
