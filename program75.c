
#include<stdio.h>  // IO
#include<stdlib.h>    // memory Management

// void Demo (int *Arr, int iLength)
void Demo(int Arr[], int iLength)
{
    // step 5 : Perform the operation on array
}

int main()    // Entery point function
{
    int iSize = 0; // to store the size of array
    int *ptr = NULL; // To store address of array
    int iCnt = 0;  // Loop counter 

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
    Demo(ptr, iSize);     //Demo (400,4);

    // step 6 Deallocate the memory of array
    free(ptr);

    return 0;   // Returnn success to os
}