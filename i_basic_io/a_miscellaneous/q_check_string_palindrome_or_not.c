// Program to check if a user input string is a palindrome or not
/* A palindrome string reads the same forwards and backward, like "radar" or "level"*/
#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0, isPalindrome = 1;

    // Ask user for input
    printf("Enter a string: ");
    scanf("%s", str);

    // Calculate the length of the string
    while (str[length] != '\0') {
        length++;
    }

    // Check if the string is a palindrome
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0; // Not a palindrome
            break;
        }
    }

    // Output the result
    if (isPalindrome) {
        printf("\"%s\" is a palindrome.\n", str);
    } else {
        printf("\"%s\" is not a palindrome.\n", str);
    }

    return 0;
}