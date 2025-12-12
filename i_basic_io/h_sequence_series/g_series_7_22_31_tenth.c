// program to display 7,22,31... upto 10th terms
#include <stdio.h>
int main() {
    int i;
    int term = 7;

    printf("First 10 terms of the series are:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d\n", term);
        if (i % 2 != 0) {
            term += 15; // Increase by 15 for odd terms
        } else {
            term += 9;  // Increase by 9 for even terms
        }
    }
    return 0;
}