#include <stdio.h>
int main(void)
{
    int i, j;
    for (i = 1; i <= 7; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            { // Applying the condition
                printf(" 1");
            }
            else
            {
                printf(" 0");
            }
        }
        printf("\n");
    }
    for (i = 6; i >= 1; i--)
    { // As it shares the same base i=6
        for (j = 1; j <= i; j++)
        {
            if (j == 1)
            { // Applying the condition
                printf(" 1");
            }
            else
            {
                printf(" 0");
            }
        }
        printf("\n");
    }
    return 0;
}