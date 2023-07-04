// Write a program which accepts the marks and display the class accordingly
//  0 to 34         Fail
//  35 to 49        Pass Class
//  50 to 59        Second Class
//  60 to 74        First Class
// 75 to 100        First Class with Deistinction
#include <stdio.h>

void DisplayClass(float percentage)
{
    if (percentage >= 0 && percentage <= 34)
    {
        printf("\nFail\n");
    }
    else
    {
        if (percentage >= 35 && percentage <= 49)
        {
            printf("\nPass Class\n");
        }
        else
        {
            if (percentage >= 50 && percentage <= 59)
            {
                printf("\nSecond Class\n");
            }
            else
            {
                if (percentage >= 60 && percentage <= 74)
                {
                    printf("\nFirst Class\n");
                }
                else
                {
                    printf("\nFirst Class with Deistinction\n");
                }
            }
        }
    }
}

int main()
{
    float fNum = 0.0f;

    printf("Ente Your Percentage : \n");
    scanf("%f", &fNum);

    DisplayClass(fNum);
    return 0;
}
