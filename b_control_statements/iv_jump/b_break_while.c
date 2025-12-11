// A simple C program to demonstrate the use of break statement in a while loop
#include <stdio.h>
int main()
{
    int a = 1;
    while (a <= 10)
    {
        if (a == 4)
        {
            break;
        }
        printf("%d\n", a);
        a++;
    }
    return 0;
}