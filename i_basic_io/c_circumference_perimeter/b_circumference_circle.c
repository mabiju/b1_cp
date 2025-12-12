// program to calculate the circumference of a circle
#include <stdio.h>
#define PI 3.14159
int main() {
    float radius, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    circumference = 2 * PI * radius;
    printf("Circumference of the circle = %.2f units.\n", circumference);
    return 0;
}