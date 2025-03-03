#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
    int fd=0;
    fd=open("Program202.c",O_RDONLY);
    if(fd==-1)
    {
        printf("Unable to open file \n");
    }
    else
    {
        printf("File is succesfully opened with :%d",fd);
    }


    return 0;
}