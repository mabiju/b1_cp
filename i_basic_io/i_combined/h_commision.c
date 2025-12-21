// Program to calculate commision based on sales amount
#include <stdio.h>
int main()
{
   int sale, esale;
   float b;
   printf("Enter total sales amount: ");
   scanf("%d", &sale);
   esale = sale - 4000;
   {
      if (sale <= 4000)
         printf("Commision=%0.2f", 0.1 * sale);
      else if (sale > 4000)
         b = (4000 * 0.1) + (esale * 0.12);
      printf("Commision=%0.2f", b);
   }
   return 0;
}