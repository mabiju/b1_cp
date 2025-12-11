// A simple C program to check if a number is positive, negative or zero using nested if-else statements
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to check +ve, -ve or zero:");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("The number %d is a +ve integer.", num);
    }
    else if (num < 0)
    {
        printf("The number %d is a -ve integer.", num);
    }
    else
    {
        printf("This number is zero.");
    }
    return 0;
}