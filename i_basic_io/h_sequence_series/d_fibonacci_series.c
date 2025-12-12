// program to print the Fibonacci series
/* The Fibonacci sequence is a series where each number is the sum of the two preceding ones,
starting from 0 and 1 (0, 1, 1, 2, 3, 5, 8...), appearing widely in nature, art, and finance,
and closely linked to the Golden Ratio (approx. 1.618). It's defined by \(F_{0}=0\), \(F_{1}=1\),
and \(F_{n}=F_{n-1}+F_{n-2}\) for \(n>1\).  */
#include <stdio.h>
int main() {
    int n, first = 0, second = 1, next, c;

    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for (c = 0; c < n; c++) {
        if (c <= 1)
            next = c;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);
    }
    return 0;
}