#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    //      1                     2         3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
    printf("%d\t",(iCnt*2));    //  4
    }
    printf("\n");
}
int main()
{
    int iFrequency = 0;

    printf("Enter the Frequency of symbol : \n");
    scanf("%d",&iFrequency);
    Display(iFrequency);

    return 0;
}