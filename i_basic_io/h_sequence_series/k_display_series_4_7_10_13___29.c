// C program to print series 4,7,10,13,...29
#include <stdio.h>
int main()
{
   int i = 4;
   do
   {
      printf("\t%d", i);
      i = i + 3;
   } while (i <= 29);
   return 0;
}