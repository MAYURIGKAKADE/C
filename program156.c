#include<stdio.h>
#include<stdlib.h>

bool CheckDigit(char cValue)
{
    if((cValue >= '0') && (cValue <='9'))
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enetr character : \n");
    scanf("%c",&ch);

    bRet = CheckDigit(ch);

    if(bRet == true)
    {
        printf("%c is a capital letter\n",ch);
    }
    else
    {
        printf("%c is not a capital letter\n",ch);    
    }
    return 0;
}