

//part 1 introduction  to file handle 












//create a file 

#include<stdio.h>

int main()
{
    FILE *file;
    file = fopen("test.txt", "w"); //here fopen("file name ","mode "  works that way and there are so many moods of file 
    if (file == NULL)
    {
      printf("Error file not found\n");

    }
   
   else printf("your file is opened succesfully");
}