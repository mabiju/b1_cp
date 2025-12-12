// A simple C program to demonstrate the use of continue statement in a for loop
#include <stdio.h>
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}