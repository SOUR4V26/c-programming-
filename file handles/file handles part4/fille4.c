




//create a file and wirte file with fprintf(*file pointer,"format specefier",varriables name ) function 

#include<stdio.h>
#include<string.h>

int main()
{
    char name[100000];
    char company[100000];
    int salary,age;
    printf("input your name : ");
    gets(name);
    printf("enter your age : ");
    scanf("%d",&age);
    printf("enter your company name:");
    scanf("%s",&company);
    printf("enter your salary : ");
    scanf("%d",&salary);
    
    
    FILE *file;
    file = fopen("candidate info.txt", "a"); //here fopen("file name ","mode "  works that way and there are so many moods of file 
    if (file == NULL)
    {
      printf("Error file not found\n");

    }
   
   else
   {  
       printf("your file is opened succesfully\n\n");
       // writting the file 
       
       fputs("\n",file); // printing new line in every excution of code 
       fputs("THE INFORMATION FOR THE CANDIATE: \n------------------------------------\n",file);
       fprintf(file," name: %s\n age=%d\n company name:%s\n salary=%d $\n",name,age,company,salary);
       fputs("\n\n \n ",file);
       
       fclose(file);
    printf("your file is written succesfully");
   }
} 
