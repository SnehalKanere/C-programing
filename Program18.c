#include<stdio.h>

//Logical OR || ->If any of the condition is TRUE then it enters inside the if
//Logical AND && ->If all of the conditin are TRUE then it entes inside the if

void DisplayClass(float Marks)
{
    if((Marks < 0.00)||(Marks>100.00))     
    {
        printf("Invalid Marks..\n");
    }
    if((Marks>=0) && (Marks<35.00))
    {
        printf("You are fail..\n");
    }
    else if((Marks>=35.00) && (Marks<50.00))
    {
        printf("Your class is Pass class\n");
    }
  else if((Marks>=50.00) && (Marks<60.00))
    {
        printf("Your class is Second class\n");
    }
  else if((Marks>=60.00) && (Marks<75.00))
    {
        printf("Your class is First class\n");
    }
  else if((Marks>=75.00) && (Marks<=100.00))
    {
        printf("Your class is First class with Distinction\n");
    }

}


int main()
{
    float Value1=0.0f;

    printf("Enter your percentage:\n");
    scanf("%f",&Value1);

    DisplayClass(Value1);


    return 0;
}