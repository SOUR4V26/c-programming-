#include <stdio.h>

int main ()
 {
   
     int row ,column,n,i,j;
     printf("how many row do you want to print :");
     scanf ("%d",&n);
     start:
     for(row=1;row<=n;row++) 
     {
         for(i=0;i<=(n-row);i++ )
         {
             printf(" ");
         }
         for(column=1;column<=row;column++)
         {
             printf("_");
         }printf("\n");
     }
     goto start;
 }   