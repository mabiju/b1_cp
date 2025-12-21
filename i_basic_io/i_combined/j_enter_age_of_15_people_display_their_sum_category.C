// WAP to enter age of 15 persons and find average age, number of babies (age<=5), number of
// attenders (age>5 and age<=17) and number of adults (age>17).
#include <stdio.h>
int main()
{
     int sum = 0, age, baby, adult, count = 1, attend, avg;
     while (count <= 15)
     {
          printf("\nEnter the age no %d::  ", count);
          scanf("%d", &age);
          if (age > 0 && age <= 5)
               baby = age + 1;
          if (age > 5 && age <= 17)
               attend = age + 1;
          if (age > 17)
               adult = age + 1;
          sum = sum + age;
          count++;
     }
     avg = sum / 15;
     printf("\nAverage age =%d", avg);
     printf("\nNumber of babies=%d", baby);
     printf("\nNumber of attenders=%d", attend);
     printf("\nNumber of adults=%d", adult);
     return 0;
}
