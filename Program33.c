#include<stdio.h>

void Display(int iValue)
{
    int i=0;
   for(int i=1;i<=iValue;i++)
    printf("%d\n",i);
}
int main()
{

int iNo=0;

    printf("Enter no of times you want to display  numbers on screen:\n ");
    scanf("%d",&iNo);
   
   Display(iNo);

    return 0;
}