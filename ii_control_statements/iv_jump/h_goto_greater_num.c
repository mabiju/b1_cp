// A simple C program to compare two numbers and print the greater one using goto statement
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);

    if (a > b)
        goto aGreater;
    else
        goto bGreater;

aGreater:
    printf("%d is greater than %d\n", a, b);
    return 0;
bGreater:
    printf("%d is greater than %d\n", b, a);
    return 0;
}