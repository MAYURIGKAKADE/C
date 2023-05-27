


/*
steps to create  the application

step 1 : Understand the problem statement
step 2 : Write the algorithm
step 3 : Decide the programming  language
step 4 : write the program
step 5 : Test the written program 

*/

// Write a program which perform addition of two numbers ?

/*
   Algorithm

   START
       Accept First Number as No1
       Accept Second Number as No2
       Create one variable as ANS
       Perform Addition of No1 and No2
       Store the Addition into variable ANS
       Display the value of ANS
    STOP
*/

#include<stdio.h>
///////////////////////////////////////////////////////////////////
// 
//   Function :    Addition
//   Input :       Unsigned integer, Unsigned integer
//   Output :      Unsigned integer
//   Description : Performs addition of 2 number
//   Author  :       Mayuri Gajanan Kakade
//   Date  :       18/04/2023
//
///////////////////////////////////////////////////////////////////

unsigned int Addition (unsigned int ivalue1 , unsigned int ivalue2)
{
    unsigned iResult = 0;
    iResult = ivalue1 + ivalue2;
    return iResult;
}


///////////////////////////////////////////////////////////////////
// Entery point function
///////////////////////////////////////////////////////////////////

int main()
{ 
    unsigned int iNo1 = 0,  iNo2 = 0,  iAns = 0;

    printf("Enter first number :");
    scanf("%d",&iNo1);


    printf("Enter Second number :");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1, iNo2);


    printf("Addition is :%d \n",iAns);
    return 0;
}