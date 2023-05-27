
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

if (iNo < 0)   //filter
{   
    printf("error Invalid input");
    printf("Note :Enter the positive value :\n");
    return;
}



   for(iCnt = 1; iCnt <= iNo; iCnt ++)
   {
    printf("%d\n",iCnt);
   }
}


 int main()
{
    int iValue = 0;
    printf("Enter the frequency : \n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}