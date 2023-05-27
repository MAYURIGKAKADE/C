#include<stdio.h>
#include<stdlib.h>

bool CheckCapital(char cValue)
{
    if((cValue >= 65) && (cValue <=90))
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
    bool bRet = 'false';

    printf("Enetr character : \n");
    scanf("%c",&ch);

    bRet = CheckCapital(ch);

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