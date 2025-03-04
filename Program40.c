#include<stdio.h>
 #include<stdbool.h>

 int SumFactor(int iNo)
 {
    int i=0;
    int iSum=0;

    for(int i=1;i<=(iNo/2);i++)             
    
     if((iNo % i)==0)
     {
     iSum=iSum+i;
     }

     return iSum;
 }

 int main()
 {
     int iValue=0;
     int iRet=0;

     printf("Enter the number :\n");
     scanf("%d",&iValue);

     iRet=SumFactor(iValue);
     printf("Sum of factors is %d:",iRet);

  
    return 0;
 }