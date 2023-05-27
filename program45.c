#include<stdio.h>

int DisplayF(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    iCnt = 1;
    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }
    return iFact;

   
}
int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    DisplayF(iValue);

    return 0;
}