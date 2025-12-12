// A simple C program to check if a number is positive
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("The number %d is a positive integer.", num);
    }
    return 0;
}