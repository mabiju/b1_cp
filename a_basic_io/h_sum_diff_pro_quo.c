#include<stdio.h>
int main()
{
    int num1, num2;
    int sum, diff, pro, quo;
    printf("Enter first integer: ");
    scanf("%d", &num1);
    printf("Enter second integer: ");
    scanf("%d", &num2);
    
    sum = num1 + num2;
    diff = num1 - num2;
    pro = num1 * num2;
    quo = num1 / num2; // Integer division

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", pro);
    printf("Quotient: %d\n", quo);

    return 0;
}   