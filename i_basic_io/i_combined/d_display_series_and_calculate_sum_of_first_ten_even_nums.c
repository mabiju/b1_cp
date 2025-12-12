// Program to display the series 1, 2, 3, ..., up to the tenth term and calculate their sum
#include <stdio.h>
int main() {
    int i, sum = 0;
    printf("Series of first ten natural numbers:\n");
    for(i = 1; i <= 10; i++) {
        printf("%d\t", i);
        sum += i;
    }
    printf("\nSum of the series: %d\n", sum);
    return 0;
}