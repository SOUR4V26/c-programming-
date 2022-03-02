

//part 1 introduction  to file handle 












//create a file and wirte file with character 

#include<stdio.h>
#include<string.h>

int main()
{
    char name[60]="out  sider";
    int len = strlen(name);
    int i;
    FILE *file;
    file = fopen("test.txt", "a"); //here fopen("file name ","mode "  works that way and there are so many moods of file 
    if (file == NULL)
    {
      printf("Error file not found\n");

    }
   
   else
   {
       printf("your file is opened succesfully");
       // writting the file 
       
       for ( i = 0; i <len; i++)
       {
         // writing the test.txt file 
         fputc(name[i],file);
       }
       
       fclose(file);

   }
} 
