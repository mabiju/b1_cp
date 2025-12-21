// Program to find the roots of a quadratic equation
#include <stdio.h>
int main()
{
    float a, b, c, d, x1, x2;
    printf("Value of a: ");
    scanf("%f", &a);
    printf("VAlue of b: ");
    scanf("%f", &b);
    printf("Value of c: ");
    scanf("%f", &c);
    d = b * b - 4 * a * c;
    if (d > 0)
    {
        x1 = (-b + d) / (2 * a);
        x2 = (-b - d) / (2 * a);
        printf("Two real roots x1=%f and x2=%f", x1, x2);
    }
    return 0;
}
