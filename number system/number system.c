#include<stdio.h>
#include <stdlib.h>
#define N 100

int BIN( int x)
{

    int arry[N],i=0,j=0,rem,array1[N];

   while(x>0)
   {
    rem = x%2;
     array1[i]=x;
     x= x/2;

    arry[i] = rem;
    i++;

   }
   printf(" -->you have to divide the number  %d times. ",i); printf( "\n");printf( "\n");printf( "\n");
   printf(" printing the number in BINARY format: "); printf( "\n");
   printf("-----------------------------------------------------"); printf( "\n");
   for(j=0;j<=(i-1);j++)
   {
      printf("2|%d",array1[j]);           printf("------ %d",arry[j]);printf("\n");
   }
     printf( "\n"); printf( "\n"); printf( "\n");
       for(j=(i-1);j>=0;j--)
   {
       printf(" %d",arry[j]);
   }
     return 0;
}



int OCT(int x)
{

    int arry[N],i=0,j=0,rem,array1[N];

   while(x>0)
   {
    rem = x%8;
     array1[i]=x;
     x= x/8;

    arry[i] = rem;
    i++;

   }
   printf(" -->you have to divide the number  %d times. ",i); printf( "\n");printf( "\n");printf( "\n");
   printf(" printing the number in OCTAL format: "); printf( "\n");
   printf("-----------------------------------------------------"); printf( "\n");
   for(j=0;j<=(i-1);j++)
   {
      printf("8|%d",array1[j]);           printf("------ %d",arry[j]);printf("\n");
   }
     printf( "\n"); printf( "\n"); printf( "\n");
       for(j=(i-1);j>=0;j--)
   {
       printf(" %d",arry[j]);
   }
     return 0;
}





int HEX(int x)
{

    int arry[N],i=0,j=0,rem,array1[N];

   while(x>0)
   {
    rem = x%16;
     array1[i]=x;
     x= x/16;

    arry[i] = rem;
    i++;

   }
   printf(" -->you have to divide the number  %d times. ",i); printf( "\n");printf( "\n");printf( "\n");
   printf(" printing the number in HEXADECIMAL format: "); printf( "\n");
   printf("-----------------------------------------------------"); printf( "\n");
   for(j=0;j<=(i-1);j++)
   {
      printf("16|%d",array1[j]);

       if(arry[j]==10 ) printf("-----A");

        else if(arry[j]==11) printf("-----B");


          else if(arry[j]==12) printf("-----C");

            else if(arry[j]==13) printf("-----D");

              else if(arry[j]==14) printf("-----E");

                else if(arry[j]==15) printf("-----F");

                else   printf("----- %d",arry[j]);
                        ;printf("\n");
   }
     printf( "\n"); printf( "\n"); printf( "\n");

       for(j=(i-1);j>=0;j--)
   {
              if(arry[j]==10 ) printf("A");

        else if(arry[j]==11) printf("B");


          else if(arry[j]==12) printf("C");

            else if(arry[j]==13) printf("D");

              else if(arry[j]==14) printf("E");

                else if(arry[j]==15) printf("F");

                else   printf(" %d",arry[j]);

   }
     return 0;
}


int main( )

{


     int n,number,mode,in;
     system("color 0A");

      start:

     printf("***** MODE SECTION ***** \n");
      printf("-------------------------------------------------------------------"); printf( "\n");

     printf("DECMAL TO BINARY---> [PRESS 1] ");printf( "\n");printf( "\n");

     printf("DECMAL TO OCTAL ---> [PRESS 2] ");printf( "\n");printf( "\n");

      printf("DECMAL TO HEXADECIMAL---> [PRESS 3] "); printf( "\n");printf( "\n");printf( "\n");printf( "\n");

      printf("    MODE: "); scanf("%d",&mode);printf( "\n");


     printf("input the number of n= ");

      scanf("%d",&n); printf( "\n");


      if(mode==1)
      {
           number=BIN(n);
      }

      else if(mode==2)
      {
            number=OCT(n);
      }

     else if(mode==3)
     {
         number=HEX(n);
     }

     else
     {
         printf( "  \n \n \n             =>> ARE YOU BLIND?  :)     \n \n \n                [ SELECT THE CORRECT MODE ] "); printf( "\n"); printf( "\n");

        printf("\n \n \n \n \n "); goto start;

     }

  printf("                                                                                                                                                      [sv]  (^_^)");

  printf("\n \n ");

  // printf("press any key to exit the program.");

    goto start;

}
