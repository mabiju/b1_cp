// A simple C program to demonstrate the while loop by printing even numbers from 10 to 2
// Syntax
// ------
// initialization;
// while (Condition)
// {
//     statement to print
//     increment/ decrement
// }

#include <stdio.h>
int main()
{
    int a = 10;
    while (a >= 2)
    {
        printf("%d\n", a);
        a -= 2; // a = a -2
    }
    return 0;
}
