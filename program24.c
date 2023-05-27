#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt<=(iNo/2); iCnt++)    // 0(N / 2)
    {
       if((iNo % iCnt) == 0)
       {
        printf("%d\n",iCnt);
       }    
    }


}
int main()a
{
    int iValue = 0;

    printf("Enter the Number :\n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}


// Time complexity : 0(N)
//where N is 
/*

  iNo = 8;


  iNo % 1 == 0       for (iCnt = 1; iCnt<=8; iCnt++)
  iNo % 2 == 0       {         (1 to 8)iCnt
  iNo % 3 == 0          if(iNo % ______ == 0 )
  iNo % 4 == 0        {printf("%d",iCnt);}
  iNo % 5 == 0       }
  iNo % 6 == 0
  iNo % 7 == 0
  iNo % 8 == 0



*/