#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i < 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (((i + j) % 2) == 0)
            { // Decides on as to which digit to print.
                printf("1");
            }
            else
            {
                printf("0");
            }
            printf("\t");
        }
        printf("\n");
    }
    return 0;
}