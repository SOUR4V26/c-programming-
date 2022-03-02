






//reading file form a directory using fscanf() function read it and print  the information on console :


//-->> fscanf(file_pointer,format_specifier,varriable_name)

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include <unistd.h>

int main()
{

    
   char str[5000];

    FILE *file;
    file = fopen(" log1.txt", "r");          //fopen("file name ","mode "  works that way and there are so many moods of file
                                                    
    if (file == NULL)
    {
      printf("file does not exist.. \n");
    }

   else
   {
        printf("your file is opened successfully\n\n");
        printf("reading the file........\n\n");
        
           sleep(4);

        printf("printing the file :\n\n");

        while (!feof(file))
         {
              fscanf(file,"%s",str); sleep(2);
               printf("%s ",str);
          } 
   }
  

  
   
   fclose(file);


}
