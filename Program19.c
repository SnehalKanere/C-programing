#include<stdio.h>

void DisplayExamTime(int standard)
{
    switch(standard)
    {
      case 1:
         printf("Your exam is at 8AM\n");
         break;
      case 2:
         printf("Your exam is at 9AM\n");
         break;
      case 3:
         printf("Your exam is at 10AM\n");
         break;
      case 4:
         printf("Your exam is at 11AM\n");
         break;
      case 5:
         printf("Your exam is at 12AM\n");
         break;
      default:
         printf("Wrong input...\n");
    }
}
int main()
{
    int Value1=0;
    printf("Enter your standard :\n");
    scanf("%d",&Value1);

    DisplayExamTime(Value1);

    return 0;
}