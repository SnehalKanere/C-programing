#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#define BUFFERSIZE 1024
int main()
{
    int fdread=0,fdwrite=0,iRet=0;
    char Buffer[BUFFERSIZE]={'\0'};
    char FnameSrc[30];
    char FnameDest[30];

    printf("Enter the name of existing file : \n");
    scanf("%s",FnameSrc);

     printf("Enter the name new file  that you want to copy: \n");
    scanf("%s",FnameDest);

    fdread=open(FnameSrc,O_RDONLY);
    fdwrite=creat(FnameDest,0777);

    if(fdread==-1)
    {
        printf("Failure in opening existing file\n");
         return -1;
    }
    if(fdwrite==-1)
    {
        printf("Failure in creating new file\n");
        return -1;
    }
     while((iRet=read(fdread,Buffer,sizeof(Buffer)))!=0)
     {
        write(fdwrite,Buffer,iRet);
     }

    close(fdread);
    close(fdwrite);
    printf("File copy succesfully...\n");

    return 0;
}