
/*
Input : 
Row :  4
Col :  

Output :
1   &   3   &
1   &   3   &
1   &   3   &   
1   &   3   &*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j= 0;
    for(i=1; i<=iRow; i++)   //  outer
    {
      for(j = 1; j<=iCol; j++)     // Inner
      {
        if((j%2)==0)
        {
        printf("&\t");
      }
      else
      {
        printf("%d\t",j);
      }
       
    }
     printf("\n");
   
    }
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the value1 0f row :\n");
    scanf("%d",&iValue1);

    printf("Enter the value2 of column :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    
    return 0;
}