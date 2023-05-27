
#include<stdio.h>  // IO
#include<stdlib.h>    // memory Management

float Average(int Arr[], int iLength)
{
    int iCnt = 0;
    int iSum = 0;
    // step 5 : Perform the operation on array
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iSum = iSum +Arr[iCnt];
       }
      
}
 return ((float)iSum/ (float)iLength);
    
}

int main()    // Entery point function
{
    int iSize = 0; // to store the size of array
    int *ptr = NULL; // To store address of array
    int iCnt = 0;  // Loop counter 
    float fRet = 0.0f;
    

    // step 1 : Accept the  number of elements from user
    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    // step 2 : Allocate memory dynamically
    ptr = (int *)malloc(iSize * sizeof(int));

    // step3 : Accept the values from user
    printf("Enter the elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
     
     // step : print the values of Array
     printf("Elements of array are : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    // step 4 pass the array to the function
     fRet = Average(ptr, iSize);     //Demo (400,4);
    printf("Average is : %f \n", fRet);

    // step 6 Deallocate the memory of array
    free(ptr);

    return 0;   // Returnn success to os
}