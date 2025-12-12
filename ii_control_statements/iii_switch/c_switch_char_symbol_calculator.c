// A simple C program to perform arithmetic operations based on a character symbol using switch-case statement
#include <stdio.h>
int main()
{
    int a, b;
    char c;
    printf("Enter first number:");
    scanf("%d", &a);
    printf("Enter seconnd number:");
    scanf("%d", &b);
    printf("Enter a symbol (+,-,*,/) for an arithmetic operation:");
    scanf(" %c", &c);
    switch (c)
    {
    case '+':
        printf("Sum = %d", (a + b));
        break;  case '-':
        printf("Difference = %d", (a - b));
        break;
    case '*':
        printf("Product = %d", (a * b));
        break;
    case '/':
        printf("Quotient = %d", (a / b));
        break;
    default:
        printf("Invalid input.");
        break;
    }
}