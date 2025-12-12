// Program to reverse a multi-digit number
#include <stdio.h>
int main() {
    int num, reversed = 0, remainder;

    // Input multi-digit number from user
    printf("Enter a multi-digit number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;          // Get the last digit
        reversed = reversed * 10 + remainder; // Append it to the reversed number
        num /= 10;                     // num = num /10 Remove the last digit from the original number
    }

    // Output the reversed number
    printf("Reversed Number: %d\n", reversed);
    return 0;
}