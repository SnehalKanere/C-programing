#include<stdio.h>

float CalculatePercentage(int Marks,int Total)
{
   auto float fAns=0.0f;

   if ((Marks < 0) || (Total < 0) || (Marks>Total))
   {

    printf("Invalid input\n");
     return fAns;
   }
   
   fAns=((float) Marks/(float)Total)*100;
    return fAns;

}

int main()
{
   auto int iValue1=0;
   auto int iValue2=0;
   auto  float fRet=0.0f;


    printf("Enter the marks:\n");
    scanf("%d",&iValue1);

   printf("Enter the total marks:\n");
    scanf("%d",&iValue2);

    fRet=CalculatePercentage(iValue1,iValue2);

    printf("Your percentage is :%f\n",fRet);

    return 0;
}