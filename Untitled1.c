//#include <stdio.h>
//int main()
//{
//   int n;
//   FILE *fptr;
//   fptr=fopen("D:\\text1.txt","w");
//   if(fptr==NULL){
//      printf("Error! File not found! You Noob!!!!!");   
//      exit(1);             
//   }
//   printf("Enter n: "); 
//   scanf("%d",&n);
//   fprintf(fptr,"This is my value %d",n);   
//   printf("File has been written successfully! YAYYYYY!!!!"); 
//   fclose(fptr);
//   return 0;
//}

// II
#include <stdio.h>
int main()
{
   int n;
   FILE *fptr;
   if ((fptr=fopen("D:\\text1.txt","r"))==NULL){
       printf("Error! opening file");
       exit(1);         /* Program exits if file pointer returns NULL. */
   }
   fscanf(fptr,"%d",&n);
   printf("Value of n=%d",n); 
   fclose(fptr);   
   return 0;
}



