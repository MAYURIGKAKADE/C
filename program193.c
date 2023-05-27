#include<stdio.h>

void strcpyX(char *src, char *dest, int ilength)
{
    while((*src !='\0') && (ilength != 0))
    {
        *dest = *src;
        src++;
        dest++;
        ilength--;
    }
    *dest = '\0';
    
}

int main()
{
    char Arr[20];
    char Brr[20];
    int iNo = 0;
   
    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("Enetr number of character that print want to copy\n");
    scanf("%d",&iNo);
    strcpyX(Arr,Brr,iNo);            //strlwrX is a inbuil structure
    printf("String after copy is : %s\n",Brr);
    return 0;
}