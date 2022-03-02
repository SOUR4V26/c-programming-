#include <stdio.h>
#include <conio.h>
int main()
{
 int r,c,i,n;
 printf("how many row do you want to print :");
 scanf("%d",&n);
 start:
 for(r=1;r<=n;r++)       //upper triangle 
 {
   for(c=1;c<=r;c++)
   {
    printf(".");//printf(" "); 
   } printf("\n");
 }

 for(r=n-1;1<=r;r--)  //lower triangle amd here n-1 deoa hoye ce repated linne aranor jnno 
 {
   for(c=1;c<=r;c++)
   {
    printf(".");// printf(" ");
   } printf("\n");
 } 
 goto start;
   return 0;
}
