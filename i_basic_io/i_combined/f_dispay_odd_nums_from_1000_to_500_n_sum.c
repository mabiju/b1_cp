// Program to display odd numbers from 1000 to 500 and calculate their sum
#include <stdio.h>
int main() {
    int num;
    int sum = 0;

    printf("Odd numbers from 1000 to 500 are:\n");
    for (num = 1000; num >= 500; num--) {
        if (num % 2 != 0) { // Check if the number is odd
            printf("%d\n", num);
            sum += num; // Add to sum
        }
    }

    printf("The sum of odd numbers from 1000 to 500 is: %d\n", sum);

    return 0;
}