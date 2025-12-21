#include <stdio.h>
int main()
{
    int i, j;
    for (i = 11; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == 11)
            {
                printf("7"); // Makes sure the base is printed completely
                continue;
            }
            else if (j == i)
            { // Hollows the rest
                printf("7");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}