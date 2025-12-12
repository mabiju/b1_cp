// Program to display the series 40, 41, 42, 43, ..., up to the tenth term
#include <stdio.h>
int main() {
    int start = 40; // Starting number of the series
    int terms = 10; // Number of terms to display

    printf("The series is:\n");
    for (int i = 0; i < terms; i++) {
        printf("%d ", start + i);
    }
    printf("\n");

    return 0;
}