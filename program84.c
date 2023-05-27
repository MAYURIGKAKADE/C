#include<stdio.h>
#include<stdlib.h>

int iMin(int Arr[], int iLength)
{
   int iMin= Arr[0];
   int iCnt = 0;
   for(iCnt = 0; iCnt < iLength; iCnt++)
   {
    if(Arr[iCnt]< iMin)
    {
        iMin = Arr[iCnt];
    }
   } 
   return iMin;
   
}

int main()
{
    int iSize = 0;
    int *ptr = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of element :\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of the array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = iMin(ptr, iSize);
    printf("Smallest element is : %d is :\n",iRet);
    free(ptr);
    return 0;
}