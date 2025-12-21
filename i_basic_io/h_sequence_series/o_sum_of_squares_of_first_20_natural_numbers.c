// sum of squares of first 20 natural numbers
#include <stdio.h>
int main()
{
  int i, sum;
  i = 1, sum = 0;
  do
  {
    sum = sum + i * i;
    i++;
  } while (i <= 20);
  printf("sum=%d\n", sum);
  return 0;
}
