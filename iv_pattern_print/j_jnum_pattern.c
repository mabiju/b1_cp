// C program to print a numerical pattern
#include <stdio.h>
int main()
{
   int i, j;
   for (i = 1; i <= 5; i++)
   {
      printf("\n");
      for (j = 1; j < 5; j++)
         printf("\t%d", i * j);
   }
   return 0;
}