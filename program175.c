#include<stdio.h>

void Frequency(char *str)
{
    int iSmallCnt = 0;
    int iCapCnt = 0;

    while (*str != 0)
    {
        if((*str >= 'a') && (*str <='z'))
        {
            iSmallCnt++;
        }
        else if ((*str >= 'A') && (*str <='Z'))
        {
            iCapCnt++;
        }
        str++;

    }
    printf("Small case ch : %d\n",iSmallCnt);
    printf("Capital case ch : %d\n",iCapCnt);
    
    
}

int main()
{
    char Arr[20];
   
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    
    Frequency(Arr);
    return 0;
}