#include<stdio.h>

void strcpyrevX(char *src, char *dest)
{
    int iLength = 0;
    

    while (*src != '\0')
    {
        src++;
        iLength++;
    }
    src--;

    for( ; iLength != 0; iLength--)
    {

        *dest = *src;
        src--;
        dest++;
        iLength--;
    }
    *dest = '\0';
    
}

int main()
{
    char Arr[20];
    char Brr[20];
   
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    
    strcpyrevX(Arr,Brr);            //strlwrX is a inbuil structure
    printf("String after copy is : %s\n",Brr);
    return 0;
}