// A simple C program to display even numbers from 30 to 2, skipping 26, using a while loop with continue statement
#include <stdio.h>
int main()
{
    int i = 31;
    while (i > 0)
    {
        i--;
        if (i % 2 == 1)
        {
            continue;
        }
        if (i == 26)
        {
            continue;
        }
        if (i < 2)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}