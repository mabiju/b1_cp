// program that calculates the volume of a sphere.
#include <stdio.h>
int main()
{
    int radius;
    printf("Enter the radius of the sphere: ");
    scanf("%d", &radius);
    float pi = 3.14285714286;
    double volume = (4.0 / 3.0) * pi * (radius * radius * radius);
    printf("Volume of the sphere=%f", volume);
    return 0;
}