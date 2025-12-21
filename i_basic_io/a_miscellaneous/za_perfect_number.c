// C program to check whether a number is a perfect number or not

/*
A perfect number is a positive integer that equals the sum of its own positive divisors,
excluding the number itself (its "proper divisors"). For example, 6 is perfect because its
 proper divisors are 1, 2, and 3, and 1 + 2 + 3 = 6. Try 496, 8128, and 33550336 as other examples of perfect numbers.
*/

#include <stdio.h>
int main()
{
    // declaring and initializing the variables
    int number, remainder, sum = 0, j;
    // taking input from the user.
    printf("Enter a number:");
    scanf("%d", &number);
    // finding all divisors and adding them
    for (j = 1; j < number; j++)
    {
        remainder = number % j;
        if (remainder == 0)
        {
            sum = sum + j;
        }
    }
    if (sum == number)
    {
        printf("Entered number %d is a Perfect number.", number);
    }

    else
    {
        printf("\n %d is not a Perfect Number", number);
    }
    return 0;
}
