// A simple C program to demonstrate the use of break statement in a do-while loop
#include <stdio.h>
int main()
{
    int a = 1;
    do
    {
        if (a == 4)
        {
            break;
        }
        printf("%d\n", a);
        a++;
    } while (a <= 10);
    return 0;
}