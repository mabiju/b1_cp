// program to enter three sides of a triangle then check whether the triangle is scalene, isosceles or equilateral
#include <stdio.h>
int main() {
    float side1, side2, side3;

    // Input lengths of the three sides
    printf("Enter the length of first side: ");
    scanf("%f", &side1);
    printf("Enter the length of second side: ");
    scanf("%f", &side2);
    printf("Enter the length of third side: ");
    scanf("%f", &side3);

    // Check the type of triangle
    if (side1 == side2 && side2 == side3) {
        printf("The triangle is Equilateral.\n");
    } else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is Isosceles.\n");
    } else {
        printf("The triangle is Scalene.\n");
    }

    return 0;
}