




//reading file form a directory and read it and print  the information on console :

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include <unistd.h>

int main()
{

    char ch; 


    FILE *file;
                                                     //fopen("file name ","mode "  works that way and there are so many moods of file
    if (file == NULL)
    {

    file = fopen(" log.txt", "w");
      printf("creating and opening file.. \n");
    }

   else
   {
        file = fopen(" log.txt", "r"); // reading the file . mode = w
   }
   printf("your file is opened successfully\n\n");
   printf("reading the file........\n\n");

   
   printf("printing the file :\n\n");

   while (!feof(file))  // feof() --> end of file function that calculate the end of the working file 
   {
       ch=fgetc(file);// fgetc(file_pointer_name)
        
       printf("%c",ch);sleep(1);
   }
   


}
