// C program to find factorial of a number entered by user
#include <stdio.h>
int factorial(int i);
int main()
{
   int i;
   printf("Enter a number to get its factorial:");
   scanf("%d", &i);
   int fac = factorial(i);
   printf("Factorial value is=%ld", fac);
   return 0;
}
int factorial(int i)
{
   int fac = 1;
   while (i >= 1)
   {
      fac = fac * i;
      i = i - 1;
   }
   return (fac);
}
