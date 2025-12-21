#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 3; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%2d", (i * j));
        }
        printf("\n");
    }
    for (i = 2; i >= 1; i--)
    { // As they share the same base
        for (j = 1; j <= i; j++)
        {
            printf("%2d", i * j);
        }
        printf("\n");
    }
    return 0;
}