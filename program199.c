#include<stdio.h>
#include<stdbool.h>

// str1     DeMo
//str2      dEMo
bool stricmpX(char *str1, char *str2)
{
    while((*str1 !='\0') && (*str2 != '\0'))              // letter are different
    {
        if(*str1 != *str2)
        {
            
           if ((*str1 >= 'a') && (*str1 <= 'z'))           // first letter is small
           {
               if(*str1 != (*str2+32))
               {
                break;
               }
           }
           else if((*str1 >= 'A') && (*str1 <= 'Z'))    // first letter is capital
           {
             if(*str1 != (*str2-32))
               {
                break;
               }
           }
           else                                 //special symbol and digits
           {
                break;
            }
        }
       str1++;
        str2++;
    }
    if((*str1 =='\0') && (*str2 == '\0'))
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
    char Arr[20];
    char Brr[20];
    bool bRet = false;

    printf("Enetr first string : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter secound string : \n");
    scanf(" %[^'\n']s",Brr);

    bRet = stricmpX(Arr,Brr);

    if(bRet == true)
    {
        printf("Both the strings are identical\n");
    }
    else
    {
        printf("Both the strings are different\n");
    }
    return 0;
}