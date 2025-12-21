#include <stdio.h>
void sequence();
int main()
{
    /* c taken for columns */
    int i, x = 0, num = 7;
    for (i = 1; i <= num; i++)
    {
        if (i <= (num / 2) + 1)
        {
            x = i;
        }
        else
        {
            x = 8 - i;
        }
        sequence(x);
        puts("\n");
    }
    return 0;
}
void sequence(int x)
{
    int j;
    for (j = 1; j < x; j++)
    {
        printf("%d", j);
    }
    for (j = x; j > 0; j--)
    {
        printf("%d", j);
    }
}