// C program to calculate the sum of odd numbers from 1 to 100
#include <stdio.h>
int main()
{
   int i, sum = 0;
   for (i = 1; i <= 100; i++)
   {
      if (i % 2 == 1) // i%2!=0
      {
         sum = sum + i;
      }
   }
   printf("Sum=%d", sum);
   return 0;
}
