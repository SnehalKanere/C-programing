#include<stdio.h>
#include<stdbool.h>

bool Checkfactor(int iNo1,int iNo2)
{
   if((iNo1 % iNo2)==0)
    {
        return true;
    }
   else
   {
    return false;
   }

}

int main()
{
    int iValue1=0,iValue2=0;
    bool bRet=false;                       //false is taken cause
                                            //false is considers as false=0
        printf("Enter first no:");
        scanf("%d",&iValue1);

        printf("Enter Second no:");
        scanf("%d",&iValue2);

       bRet = Checkfactor(iValue1,iValue2);

    if(bRet==true)
    {
        printf("%d is a factor of %d\n",iValue1,iValue2);
    }
     else
    {
        printf("%d is a not factor of %d\n",iValue1,iValue2);
    }

    return 0;
}