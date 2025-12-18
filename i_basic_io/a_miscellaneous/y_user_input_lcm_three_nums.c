// C program to find LCM of three user input numbers
#include <stdio.h>
int main()
{
    int num1, num2, num3, lcm, i;

    // Taking input from user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    // Finding LCM
    for(i = 1; i <= num1 && i <= num2 && i <= num3; ++i) {
        if(num1 % i == 0 && num2 % i == 0 && num3 % i == 0)
            lcm = i;
    }

    // Displaying the LCM
    printf("LCM of %d, %d and %d is %d\n", num1, num2, num3, lcm);

    return 0;
}