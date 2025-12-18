// C program to check whether a number is even or odd using a function
#include <stdio.h>
int evenodd(int a);
int main()
{
    int a;
    printf("Enter a number to check even or odd:");
    scanf("%d", &a);
    int b = evenodd(a);
    if (b == 0)
    {
        printf("Even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}

int evenodd(int a)
{
    int b;
    if (a % 2 == 0)
    {
        b = 0;
    }
    else
    {
        b = 1;
    }
    return (b);
}