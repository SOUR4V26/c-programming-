

//part 1 introduction  to file handle 












//create a file and wirte file with fputs() function 

#include<stdio.h>
#include<string.h>

int main()
{
    char name[100000];
    printf("input some thing to write on the file : \n");
    gets(name);
    
    FILE *file;
    file = fopen("test.txt", "w"); //here fopen("file name ","mode "  works that way and there are so many moods of file 
    if (file == NULL)
    {
      printf("Error file not found\n");

    }
   
   else
   {
       printf("your file is opened succesfully\n\n");
       // writting the file 
       
       fputs(name, file);
       
       fclose(file);
    printf("your file is written succesfully");
   }
} 
