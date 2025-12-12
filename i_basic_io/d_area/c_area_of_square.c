// A simple C program to calculate the area of a square
#include<stdio.h>
int main()
{
    float side, area;
    printf("Enter the length of a side of the square: ");
    scanf("%f", &side);
    area = side * side;
    printf("The area of the square is: %.2f\n", area);
    return 0;
}