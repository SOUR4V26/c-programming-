#include <stdio.h>

int main ()
 {
   
     int row ,column,space,n;
     printf("how many row do you want to print :");
     scanf ("%d",&n);
    
    for (row=1;row<=n;row++)
    {
        for(column=row;column>=1;column++)
        {
            printf("!");
        }   printf("\n");
    }
    
 }   