#include<stdio.h>

float Multiplication(float ivalue1, float ivalue2)
{
    float iResult = 0;
    iResult = ivalue1 * ivalue2;
    return iResult;

}
int main ()
{
    float iNo1 = 0;
    float iNo2 = 0;
    float iAns = 0;

    printf("Enter first number :  ");
    scanf("%f",&iNo1);


    printf("Enter second number :  ");
    scanf("%f",&iNo2);
      


    iAns = Multiplication(iNo1, iNo2);

    printf("Multipication is : %f",+iAns);
    return 0;
}