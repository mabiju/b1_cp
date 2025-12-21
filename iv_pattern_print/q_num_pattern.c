#include <stdio.h>
int main()
{
    int i, j, a = 0, b = 1, temp = 1;
    for (i = 1; i <= 4; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 1 && j == 1)
            { // Prints the '0' individually first
                printf("0");
                continue;
            }
            printf("%d ", temp); // Prints the next digit in the series
            // Computes the series
            temp = a + b;
            a = b;
            b = temp;
            if (i == 4 && j == 3)
            { // Skips the 4th character of the base
                break;
            }
        }
        printf("\n");
    }
    return 0;
}