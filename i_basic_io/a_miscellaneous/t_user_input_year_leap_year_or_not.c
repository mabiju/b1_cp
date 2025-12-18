/* 
A year is called leap year if it is divisible by 400.
For example: 1600, 2000 etc leap year while 1500, 1700 are not leap year.
Rule 2: If year is not divisible by 400 as well as 100 but it is divisible by 4 then that year are also leap year.
For example:  2004, 2008, 1012 are leap year. */

// Program to check if a user input year is a leap year or not
#include <stdio.h>
int main() {
    int year;

    // Input year from user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}