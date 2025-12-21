// C program to check whether a number is an Armstrong number or not

/* An Armstrong number (or narcissistic number) is a number that equals the sum of its own digits,
each raised to the power of the total number of digits in the number. For example, 153 is an Armstrong
number because it has 3 digits, and \(1^{3}+5^{3}+3^{3}=1+125+27=153\). Other examples include 370, 371,
and 1634 (for 4 digits: \(1^{4}+6^{4}+3^{4}+4^{4}=1634\)).  */

#include <stdio.h>
int main()
{
    int num, r, sum = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (num != 0)
    {
        r = num % 10;
        num = num / 10;
        sum = sum + (r * r * r);
    }
    if (sum == temp)
    {
        printf("%d is an Armstrong number", temp);
    }

    else
    {
        printf("%d is not an Armstrong number", temp);
    }
    return 0;
}