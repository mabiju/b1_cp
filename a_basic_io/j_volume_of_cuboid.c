#include <stdio.h>
int main()
{
    float length, width, height, volume;
    printf("Enter the length of cuboid: ");
    scanf("%f", &length);
    printf("Enter the width of cuboid: ");
    scanf("%f", &width);
    printf("Enter the height of cuboid: ");
    scanf("%f", &height);
    volume = length * width * height;
    printf("The volume of the cuboid is: %.2f\n", volume);
    return 0;
}