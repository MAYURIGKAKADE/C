#include<stdio.h>

typedef unsigned long int ULONG;

ULONG Factorial(int iNo)
{
    
    int iCnt = 0;
    ULONG iResult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        iResult = iResult * iCnt; 
    }
    return iResult;
   
}
int main()
{
    int iValue = 0;
    ULONG iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Result id : %lud\n",iRet);

    return 0;
}

