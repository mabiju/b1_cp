// A simple C program to demonstrate the use of continue statement in a do-while loop
#include <stdio.h>
int main()
{
    int a = 0;
    do
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

    } while (a < 10);
    return 0;
}