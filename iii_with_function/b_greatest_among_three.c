// C program to find the greatest among three numbers using a function
#include <stdio.h>
int greatest(int a, int b, int c);
int main()
{
    int a, b, c;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);
    printf("Enter c:");
    scanf("%d", &c);
    int d = greatest(a, b, c);
    printf("Greatest=%d", d);
    return 0;
}
int greatest(int a, int b, int c)
{
    int d;
    {
        if ((a > b) && (a > c))
            d = a;
        else if ((b > a) && (b > c))
            d = b;
        else
            d = c;
    }
    return (d);
}
