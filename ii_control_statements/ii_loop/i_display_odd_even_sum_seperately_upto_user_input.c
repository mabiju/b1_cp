// C program to display odd and even numbers separately up to a user input number and calculate their sums
#include <stdio.h>
int main()
{
    int n, i, even_sum = 0, odd_sum = 0;
    printf("Enter a number:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            even_sum += i;
            printf("Even number: %d\n", i);
        }
        else
        {
            odd_sum += i;
            printf("Odd number: %d\n", i);
        }
    }
    printf("Sum of even numbers: %d\n", even_sum);
    printf("Sum of odd numbers: %d\n", odd_sum);
    return 0;
}