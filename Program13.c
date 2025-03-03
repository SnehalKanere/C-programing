#include<stdio.h>
#include<stdbool.h>

bool Oddeven(int No)
{
    if((No %2)==0)
    return true;

    else
{
   return false;
}
}


int main()
{
 int Value=0;
 bool Ret=false;

 printf("Enter the number:\n");
 scanf("%d",&Value);

 Ret=Oddeven(Value);
 if (Ret==true)
 {
    printf("%d is an even number\n",Value);
 }

 else
 {
    printf("%d is an odd number\n",Value);
 }

return 0;

}