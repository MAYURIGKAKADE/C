
/*
Input : 
Row :  3
Col :  5

Output :
a    a    a    a   a
b    b    b    b   b
c    c    c    c   c
*/
#include<stdio.h>

void Display(int iRow, int iCol)
{
    char ch = '\0';
    int iCnt = 0;
    int i = 0, j= 0;
    for(i=1; i<=iRow; i++)   //  outer
    {
      for(j = 1, ch = 'a'; j<=iCol; j++, ch++)     // Inner
      {
        printf("%c\t",ch);
        
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