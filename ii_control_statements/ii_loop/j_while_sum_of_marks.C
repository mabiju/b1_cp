// program to calculate the sum of marks of 5 subjects
#include <stdio.h>
int main()
{
     int sum = 0, sub = 1, marks;
     while (sub <= 5)
     {
          printf("\nEnter the marks of Subject %d : ", sub);
          scanf("%d", &marks);
          sum = sum + marks;
          sub++;
     }
     printf("Total sum = %d", sum);
     return 0;
}