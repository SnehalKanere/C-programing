#include<stdio.h>

float Maximum(int No1,int No2,int No3)
{
    if ((No1 > No2) && (No1 > No3))
    {
        return No1;
    }

   if ((No2 > No1) && (No2 > No3))
    {
        return No2;
    }
   if ((No3 > No1) && (No3 > No2))
    {
        return No3;
    }
}

int main()
{
    int Value1=0;
    int Value2=0;
    int Value3=0;
    int Ret=0;

printf("Enter first number:\n");
scanf("%d",&Value1);

printf("Enter Second number:\n");
scanf("%d",&Value2);

printf("Enter Third number:\n");
scanf("%d",&Value3);

Ret =Maximum(Value1,Value2,Value3);

printf("Maximum number is: %d\n",Ret);

return 0;

}