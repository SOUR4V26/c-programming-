
//student data entry programme source codde .

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char name[1000];
    char instute[1000];
    int mobile_number,roll;
    int n;

    


    FILE *file;
                                                     //fopen("file name ","mode "  works that way and there are so many moods of file
    if (file == NULL)
    {

    file = fopen(" log.txt", "w");
      printf("creating and opening file.. \n");
    }

   else
   {
        file = fopen(" log.txt", "a");
   }
   printf("your file is opened successfully\n\n");


        

    printf("input the data:\n=======================\n");
    printf("NOTE:Avoid space for name and institute name. -<use under score>-\n");
    printf("input your name : ");
    scanf("%s",&name);
    printf("\nenter your institute name:");
    scanf("%s",&instute);
    printf("\nenter your roll : ");
    scanf("%d",&roll);
    printf("\nenter your  mobile no : ");
    scanf("%d",&mobile_number);

                     // writting the file


       fputs("\n",file); // printing new line in every excution of code
       fputs("     NAME:\n----------------\n  ",file);
       fputs(name,file); 
       fputs(" \nInstitute Name:\n---------------------\n",file);
       fputs(instute,file);
       fputs("Roll:\n---------------------\n",file);
       fputs(roll,file);
       fputs("\nMobile No:\n---------------------\n",file);
       fputs(mobile_number,file);
       fputs("\n\n \n ",file);
       printf("\n\n");

      

               

       fclose(file);
      printf("your data has been saved successfully....\n\n\n\n");
        





}
