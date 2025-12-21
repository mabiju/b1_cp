// C program to count the number of vowels in a word
#include <stdio.h>
#include <string.h>
int main()
{
   int i, count = 0;
   char abc[30];
   printf("Enter a word:");
   scanf("%s", abc);
   int l = strlen(abc);
   for (i = 0; i < l; i++)
   {
      if (abc[i] == 'a' || abc[i] == 'e' || abc[i] == 'i' || abc[i] == 'o' || abc[i] == 'u')
         count = count + 1;
   }
   printf("The number of vowels:%d", count);
   return 0;
}
