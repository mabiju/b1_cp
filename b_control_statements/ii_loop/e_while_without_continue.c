// A simple C program to display numbers from 30 to 2, skipping 26, using a while loop
// Write in c++ to display 30,28,24, 22..............2 using while loop.
#include <stdio.h>
int main()
{
    int a = 30;
    while (a >= 2)
    {
        if (a != 26)
        {
            printf("%d\n", a);
        }
        a = a - 2;
    }
    return 0;
}