// A simple C program to take two user input numbers, add them, and print the result
#include <stdio.h>
int main()
{
    int a, b, sum;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter second number:");
    scanf("%d", &b);
    sum = a + b;
    printf("The sum = %d", sum);
    return 0;
}