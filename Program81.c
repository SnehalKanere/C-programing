//Input :4
//output : A  B  C  D
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    char ch ='\0';

     for(int iCnt= 1,ch='A';iCnt <= iNo; iCnt++,ch++)
    {
        printf("%c\t",ch);
      
    }
    printf("\n");
}
int main()
{
    int iValue=0;
    printf("Enter the count : ");
    scanf("%d",&iValue);

   Display(iValue);

    return 0;
}