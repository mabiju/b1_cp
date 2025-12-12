// A simple C program to demonstrate the use of continue statement in a while loop
#include <stdio.h>
int main()
{
    int a = 0;
    while (a < 10)
    {
        a++;
        if (a == 4)
        {
            continue;
        }
        else
        {
            printf("%d\n", a);
        }
    }
    return 0;
}