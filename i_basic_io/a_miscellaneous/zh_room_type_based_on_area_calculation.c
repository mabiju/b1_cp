// Room type based on area calculation
#include <stdio.h>
int main()
{
    int A, l, b;
    printf("Enter the lengh of a room :");
    scanf("%d", &l);
    printf("Enter the breadth of a room :");
    scanf("%d", &b);
    A = l * b;
    if (A > 2500)
    {
        printf("Auditorium");
    }
    else if (A >= 500 && A <= 2500)
    {
        printf("Hall");
    }
    else if (A > 150 && A < 500)
    {
        printf("Big room");
    }
    else if (A <= 150)
    {
        printf("Small Room");
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
}
