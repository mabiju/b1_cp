// Program to print the series 5, 10, 15, ..., up to the fifteenth term
#include <stdio.h>
int main() {
    int i, term;
    for (i = 1; i <= 15; i++) {
        term = 5 * i;
        printf("%d ", term);
    }
    printf("\n");
    return 0;
}