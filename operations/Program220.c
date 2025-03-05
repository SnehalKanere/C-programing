#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define BUFFERSIZE 1024
int main()
{
  char FileName[30];
  char Arr[BUFFERSIZE]={'\0'};
  int iSize=0;
  int fd=0,iRet=0;

  printf("Enter the name of file that you want to open from current directory\n");
  scanf("%s",FileName);
  
  fd=open(FileName,O_RDWR);

   if(fd==-1)
    {
        printf("Unable to open %s file \n");
    }
    else
    {
      printf("%s gets opened succesfully with file descriptor %d\n",FileName,fd);
     while((iRet=read(fd,Arr,sizeof(Arr)))!=0)
     {
        iSize=iSize+iRet;
      printf("%d bytes gets read from the file\n",iRet);
     }
  printf("File contains %d byte in it\n",iSize);
     close(fd);
    }
    return 0;
}