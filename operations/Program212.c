#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
  char FileName[30];
  int fd=0;

  printf("Enter the name of file that you want to create from current directory\n");
  scanf("%s",FileName);
  
  fd=creat(FileName,0777);

   if(fd==-1)
    {
        printf("Unable to open %s file \n");
    }
    else
    {
      printf("%s gets create succesfully with file descriptor %d\n",FileName,fd);
     
    }
    return 0;
}