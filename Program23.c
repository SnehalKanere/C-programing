#include<stdio.h>

float Average(int No1,int No2,int No3)
{
    float Ans=0.0f;
    Ans=((float)( No1+ No2+ No3)/3);
    return Ans;
   
}

int main()
{
    int Value1=0;
    int Value2=0;
    int Value3=0;
    float Ret=0;

printf("Enter first number:\n");
scanf("%d",&Value1);

printf("Enter Second number:\n");
scanf("%d",&Value2);

printf("Enter Third number:\n");
scanf("%d",&Value3);

Ret =Average(Value1,Value2,Value3);

printf("Average is: %f\n",Ret);

return 0;

}