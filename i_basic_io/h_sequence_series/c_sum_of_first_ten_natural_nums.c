// program to calculate the sum of first ten natural numbers
#include <stdio.h>
int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += i;
    }
    printf("The sum of the first ten natural numbers is: %d\n", sum);
    return 0;
}