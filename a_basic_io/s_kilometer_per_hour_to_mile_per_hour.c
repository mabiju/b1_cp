// Convert kilometers per hour to miles per hour
#include <stdio.h>
int main()
{
    float kmph, mph;
    printf("Input kilometers per hour: ");
    scanf("%f", &kmph);
    mph = (kmph * 0.6213712);
    printf("%f miles per hour.", mph);
    return 0;
}