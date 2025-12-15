// program of simple calculator in c
#include <stdio.h>
int main()
{
    float x, y, result;
    int ch;
    printf("Enter first number:");
    scanf("%f", &x);
    printf("Enter second number:");
    scanf("%f", &y);

    printf("press\n1 : add\n2 : sub\n3 : mult\n4 : div\n");
    scanf("%d", &ch);
    if (ch == 1)
    {
        result = x + y;
    }
    else
    {
        if (ch == 2)
        {
            result = x - y;
        }
        else
        {
            if (ch == 3)
            {
                result = x * y;
            }
            else
                result = x / y;
        }
    }
    printf("\nThe result is:%0.2f", result);
    return 0;
}