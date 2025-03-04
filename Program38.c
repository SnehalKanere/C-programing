#include<stdio.h>
#include<stdbool.h>

void DisplayFactor(int iNo)
{
    int i=0;

printf("Factors of %d are:\n",iNo);

    for(int i=1;i<iNo;i++)
    
     if((iNo % i)==0)

    {
        printf("%d \n",i);
    }

}

int main()
{
    int iValue=0;
    
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

   
    return 0;
}