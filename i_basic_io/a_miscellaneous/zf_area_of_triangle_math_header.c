// C program to calculate the area of a triangle using Heron's formula
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, s, area;
    printf("Enter the length of side a:");
    scanf("%f", &a);
    printf("Enter the length of side b:");
    scanf("%f", &b);
    printf("Enter the length of side c:");
    scanf("%f", &c);
    s = (a + b + c) / 2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("Area = %0.2f sqrt unit", area);
    return 0;
}