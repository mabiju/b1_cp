// program to display first 10 odd numbers
#include <stdio.h>
int main() {
    int i;

    printf("First 10 odd numbers are:\n");
    for (i = 1; i <= 20; i += 2) {
        printf("%d\n", i);
    }
    return 0;
}