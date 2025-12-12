// Program to calculate the sum of odd numbers from 80 to 90
#include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 81; i < 90; i += 2) {
        sum += i;
    }
    printf("Sum of odd numbers from 80 to 90 is: %d\n", sum);
    return 0;
}