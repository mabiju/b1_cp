// program to calculate sum of digits of a five digit number
#include <stdio.h>
int main()
{
    int num, d1, d2, d3, d4, d5, sum;
    printf("Enter a five digit number: ");
    scanf("%d", &num);
    d1 = (num % 10);
    d2 = (num % 100) / 10;
    d3 = (num % 1000) / 100;
    d4 = (num % 10000) / 1000;
    d5 = (num / 10000);
    sum = d1 + d2 + d3 + d4 + d5;
    printf("The sum of the digis is: %d", sum);
    return 0;
}