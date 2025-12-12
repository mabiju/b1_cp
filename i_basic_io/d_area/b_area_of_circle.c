// A simple C program to calculate the area of a circle
#include<stdio.h>
#define PI 3.14159
int main()
{
    float radius, area;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Area of the circle with radius %.2f is %.2f\n", radius, area);
    return 0;
}