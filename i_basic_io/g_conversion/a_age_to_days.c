// A simple C program to convert age in years to days
#include <stdio.h>
int main()
{
    int age, days;
    printf("Enter your age in years: ");
    scanf("%d", &age);
    days = age * 365;
    printf("Your age in days is: %d\n", days);
    return 0;
}