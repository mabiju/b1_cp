// A simple C program to get the abbreviation of a letter from a to e using switch-case statement
#include <stdio.h>
int main()
{
    char a;
    printf("Enter a letter from a to e to get its abbreviation:");
    scanf(" %c", &a);
    char b = (char) tolower(a);
    switch (b)
    {
    case 'a':
        printf("Apple");
        break;
    case 'b':
        printf("Ball");
        break;
    case 'c':
        printf("Cat");
        break;
    case 'd':
        printf("Dog");
        break;
    case 'e':
        printf("Elephant");
        break;

    default:
        printf("Invalid input.");
        break;
    }
}