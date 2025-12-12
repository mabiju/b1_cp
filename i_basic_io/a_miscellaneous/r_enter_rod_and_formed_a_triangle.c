// program to enter the length of three rods and display whether the triangle can be formed or not
#include <stdio.h>

int main() {
    float a, b, c;

    printf("Enter the length of first rod: ");
    scanf("%f", &a);
    printf("Enter the length of second rod: ");
    scanf("%f", &b);
    printf("Enter the length of third rod: ");
    scanf("%f", &c);

    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle can be formed.\n");
    } else {
        printf("The triangle cannot be formed.\n");
    }

    return 0;
}