#include <stdio.h>
int main()
{
    float radius, surface_area, volume;
    const float pi = 3.14159;
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);
    surface_area = 4 * pi * radius * radius;
    volume = (4.0/3.0) * pi * radius * radius * radius;
    printf("The surface area of the sphere is: %.2f\n", surface_area);
    printf("The volume of the sphere is: %.2f\n", volume);
    return 0;
}