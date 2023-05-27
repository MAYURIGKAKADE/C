#include<stdio.h>
#include<stdbool.h>

unsigned long int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long int iResult = 1;

    for (iCnt = 1; iCnt <=iNo; iCnt++)
    {
        iResult = iResult * iCnt; 
    }
    return iResult;
   
}
int main()
{
    int iValue = 0;
    unsigned long int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Result id : %d\n",iRet);

    return 0;
}