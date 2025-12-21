#include <stdio.h>
int prime(int num, int i);
int main()
{
   int num, i;
   printf("Enter a number:");
   scanf("%d", &num);
   int check = prime(num, i);
   {
      if ((check == 0) && (num != 1))
         printf("Prime");
      else
         printf("Not prime");
   }
   return 0;
}
int prime(int num, int i)
{
   int check = 0;
   for (i = 2; i <= num / 2; i++)
   {
      if (num % i == 0)
      {
         check++;
         break;
      }
   }
   return (check);
}
