#include <stdio.h>
#include <conio.h>
#define N 40

int main( )
{
  int A[N][N],B[N][N]; int product[N][N];
  int i,j,k,arows,acolumns,brows,bcolumns,sum=0 ;
  system("color 70");
  start:
  printf("input the number of rows of MAT  A :");scanf("%d",&arows);printf("\n");
  printf("input the number of columns of MAT  A :");scanf("%d",&acolumns);printf("\n");

  printf("input the all the element of MATRIX A \n");printf("------------------------------------------------------"); printf("\n");
  for(i=0;i<arows;i++)
  {
    for(j=0;j<acolumns;j++)
    {
      printf("input the element of [%d,%d]-->",(i+1),(j+1));
      scanf("%d",&A[i][j]);
    }  printf("\n");
  }

  printf("input the number of rows of MAT  B :");scanf("%d",&brows);printf("\n");
  printf("input the number of columns of MAT  B :");scanf("%d",&bcolumns);printf("\n");

   printf("input the all the element of MATRIX B \n");printf("------------------------------------------------------"); printf("\n");
  for(i=0;i<brows;i++)
  {
    for(j=0;j<bcolumns;j++)
    {
      printf("input the element of [%d,%d]-->",(i+1),(j+1));
      scanf("%d",&B[i][j]);
    }  printf("\n");
  }  printf("\n"); printf("\n"); printf("\n");


  if(arows!=bcolumns)
  {
    printf("sorry these two matrix cannot be multiplied together. \n[you need to know the matrix multiplication rule] ");
  }

  else
   {
     for(i=0;i<arows;i++)
     {
       for(j=0;j<bcolumns;j++)
       {
         for(k=0;k<bcolumns;k++)
         {
           sum+= A[i][k] *B[k][j];
         }
          product[i][j] = sum;
          sum=0;
       }
     }

     printf("\n \n \n");
     printf("printing the resultant matrix:\n");printf("-------------------------------------- \n");

for(i=0;i<arows;i++)
  {
   for(j=0;j<bcolumns;j++)
   {
     if(product[i][j]<10)
     {

      printf("(%d)",product[i][j]);printf("      ");
     }

     else
     {

        printf("(%d)",product[i][j]);printf("    ");
     }
   }  printf("\n");printf("\n");

   }

  }
 
      printf("\n \n \n press any key to exit the program");   printf("\n \n    sv ");    
   goto start ;      
   getch();

}
