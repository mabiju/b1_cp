// Program to check if a user input number is a palindrome or not
/* A palindrome number reads the same forwards and backward, like 121 or 8008,
possessing reflectional symmetry in its digits, and it's a fundamental concept
in programming and math for number reversal checks, often involving converting
to strings or mathematically reversing digits to compare.  */
#include <stdio.h>
int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Ask user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num; // Store the original number

    // Reverse the number
    while (num != 0) {
        remainder = num % 10; // Get the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10; // Remove the last digit
    }

    // Check if the original number and reversed number are the same
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}