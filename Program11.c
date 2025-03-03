#include<stdio.h>

int Cube(int iValue1)
{
    int iAns=0;
     iAns=iValue1*iValue1*iValue1;
    return iAns;

}

int main()
{
 int iNo1=0;
 int iCube=0;

printf("Enter the number\n");
scanf("%d\n",&iNo1);

iCube=Cube(iNo1);

printf("Cube is: %d\n",iCube);

}