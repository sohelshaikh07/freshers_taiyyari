/**
 * Question :- Print Hello World 5 times on screen.
 */

#include <stdio.h>

int main()
{
    int n = 5, i = 1;

    // using do-while loop

    do
    {
        printf("Hello World\n");
        i++;
    } while (i <= n);

    return 0;
}
