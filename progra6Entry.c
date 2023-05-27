#include"program6Header.h"

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