#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int iRet=0;
    int fd=0;
    char Arr[]="Angular Web development";

    fd=open("Marvellous.txt",O_RDWR | O_APPEND);
    if(fd==-1)
    {
        printf("Unable to open file \n");
    }
    else
    {
      iRet=write(fd,Arr,23);
      printf("%d bytes gets succesfully written into file\n",iRet);
      close(fd);
    }

    return 0;
}