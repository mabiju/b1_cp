// Find the maximum and minimum age among 6 students
#include <stdio.h>
int main()
{
    int age, count, max = 0, min = 100;
    for (count = 1; count <= 6; count++)
    {
        printf("Enter the age of Students= ");
        scanf("%d", &age);
        if (age >= max)
            max = age;
        if (age <= min)
            min = age;
    }
    printf("\nMax age=%d", max);
    printf("\nMin age=%d", min);
    return 0;
}
