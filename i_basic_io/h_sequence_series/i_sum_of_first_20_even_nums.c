// Program to calculate the sum of first 20 even numbers
#include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 1; i <= 20; i++) {
        sum += i * 2; // Even numbers are 2, 4, 6, ..., 40
    }
    printf("The sum of the first twenty even numbers is: %d\n", sum);
    return 0;
}