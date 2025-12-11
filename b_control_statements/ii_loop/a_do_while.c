// A simple C program to demonstrate the do-while loop by printing numbers from 1 to 10
// Syntax
// ------
// initialization;
// do
// {
//     statement to print;
//     increment/ decrement;
// } while (Condition);

#include <stdio.h>
int main()
{
    int a = 1;
    do
    {
        printf("%d\n", a);
        a++;
    } while (a <= 10);
    return 0;
}
