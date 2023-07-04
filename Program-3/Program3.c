/*
    Check weather Given Number is Even or Odd.
*/
#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL checkEvenOdd(int iNo)
{
    if (iNo % 2 == 0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{

    int No1 = 0;
    BOOL bRet = FALSE;

    printf("Enter Number to Check : \n");
    scanf("%d", &No1);

    bRet = checkEvenOdd(No1);

    if (bRet == TRUE)
    {
        printf("Given Number is Even\n");
    }
    else
    {
        printf("Given Number is Odd\n");
    }
    return 0;
}

/**
PS A:\freshers_taiyyari\Program-3> gcc .\Program3.c -o myexe
PS A:\freshers_taiyyari\Program-3> .\myexe.exe
Enter Number to Check :
5
Given Number is Odd
PS A:\freshers_taiyyari\Program-3> .\myexe.exe
Enter Number to Check :
4
Given Number is Even
PS A:\freshers_taiyyari\Program-3> .\myexe.exe
Enter Number to Check :
1
Given Number is Odd
PS A:\freshers_taiyyari\Program-3> .\myexe.exe
Enter Number to Check :
2
Given Number is Even
*/