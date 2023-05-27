   

/*
Input : 
Row :  6
Col :  6

Output :
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j= 0;
   
     if(iRow != iCol)
    {
        printf("Invalid Input");
        return;
    }

   for(i=1; i<=iRow; i++)   //  outer
    {
      for(j = 1; j<=iCol; j++)     // Inner
      {
        
        if(i >= j)
        {
          printf("*\t");
        }
       
      }
     
        
     printf("\n");
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