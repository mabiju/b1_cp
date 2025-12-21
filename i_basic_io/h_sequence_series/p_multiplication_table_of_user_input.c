// program for multiplication table of an input number
#include <stdio.h>
int main()
{
   int i = 1;
   int n, mul;
   printf("Enter number:");
   scanf("%d", &n);
   do
   {
      mul = i * n;
      printf("%d*%d=%d\n", n, i, mul);
      // printf("%d\n", mul);
      i++;
   } while (i <= 10);
   return 0;
}