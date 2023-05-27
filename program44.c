#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    iCnt = iNo;
    while(iCnt >= 1)
    {
       iFact = iFact * iCnt;
        iCnt--;
    }
    return iFact;

   
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    Factorial(iValue);

    return 0;
}