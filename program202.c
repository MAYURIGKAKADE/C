#include<stdio.h>
#include<stdbool.h>

bool Checkpallindrome(char *str)
{
    char *start = NULL;
    char *end = NULL;
   
    start = str;
    end = str;

    while(*end !='\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        if(*start != *end)
        {
            break;
        }
        start++;
        end--;
    }
    if(start < end)
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
    bool bRet = false;

    printf("Enetr  string : \n");
    scanf("%[^'\n']s",Arr);

    bRet = Checkpallindrome(Arr);
  
    if(bRet == true)
    {
      printf("String is pallindrome \n");
    }
    else
    {
      printf("String is not pallindrome \n");
    }



    return 0;
}