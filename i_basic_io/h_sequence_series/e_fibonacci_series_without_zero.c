// program to display Fibonacci series 1, 1, 2, 3, 5, 8 upto 10th terms.
#include <stdio.h>
int main() {
    int n, first = 1, second = 1, next, c;

    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for (c = 0; c < n; c++) {
        if (c < 2)
            next = 1;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }
    return 0;
}