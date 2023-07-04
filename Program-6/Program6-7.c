/**
 * Question :- Print Hello World n times on screen.
 * here n is user enterd number
 */

#include <stdio.h>

void Display(int n)
{
    if (n < 0) // Updator
    {
        n = -n;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("Hello World\n");
    }
}

int main()
{
    int n = 0;

    printf("Enter Number\n");
    scanf("%d", &n);
    // using for loop
    Display(n);

    return 0;
}
