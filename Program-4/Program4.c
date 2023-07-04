/*
    Check weather Given Number is divisible by 3 and 5.
*/
#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL checkEvenOdd(int iNo)
{
    if ((iNo % 3 == 0) && (iNo % 5 == 0))
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
        printf("Given Number (%d) is Divisible by 3 and  5 \n", No1);
    }
    else
    {
        printf("Given Number (%d) is Not Divisible by 3 and  5 \n", No1);
    }
    return 0;
}

/*
OUTPUT :-


Enter Number to Check :
3
Given Number (3) is Not Divisible by 3 and  5
PS A:\freshers_taiyyari\Program-4> .\myexe.exe
Enter Number to Check :
15
Given Number (15) is Divisible by 3 and  5
*/