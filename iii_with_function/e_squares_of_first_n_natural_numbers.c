// Program to print the squares of first n natural numbers
#include <stdio.h>
int main()
{
   int s, i = 1, n;
   printf("Enter the last square root number:");
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
   {
      s = i * i;
      printf("%d\t", s);
   }
   return 0;
}