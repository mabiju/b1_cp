// A simple C program to demonstrate nested if statements
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number less than 100:");
    scanf("%d", &num);
    if (num < 100)
    {
        if (num < 50)
        {
            printf("The number is less than 50");
        }
        if (num > 50)
        {
            printf("The number is greater than 50");
        }
        if (num == 50)
        {
            printf("The number is 50");
        }
    }
    return 0;
}