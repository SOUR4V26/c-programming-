#include <stdio.h>
#define N 10
 int main ( )
 {
     int i,j,k;
     int array[N]; 
     printf("       input the numbers of the array   ");  printf( " \n ");printf("--------------------------------------------------------"); printf( " \n ");
    
    for( i=0; i<N; i++ )
    {
        printf( " input the array[%d] element of the array ",i); 
        scanf( "%d",&array[i]); printf( " \n ");
    }

  printf( " \n ");  printf( " \n ");  printf( " \n ");  printf( " \n ");
    printf("printing the array elements ");  printf( " \n ");printf("--------------------------------------------------------"); printf( " \n ");

    for( i=0; i<N; i++ )
    {
        printf( " the array[ %d] element of the array is %d",i,array[i]); 
         printf( " \n ");   printf( " \n ");
    }
 }
