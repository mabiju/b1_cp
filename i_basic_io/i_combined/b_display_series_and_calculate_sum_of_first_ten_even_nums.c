// program to display the series of first ten even numbers and calculate their sum
#include <stdio.h>
int main() {
    int i, sum = 0;
    printf("Series of first ten even numbers:\n");
    for(i = 1; i <= 10; i++) {
        printf("%d\t", 2 * i);
        sum += 2 * i;
    }
    printf("\nSum of the series: %d\n", sum);
    return 0;
}