// A simple C program to take user input as a string and print it
#include <stdio.h>
int main()
{
    char name[100];
    printf("Enter your name:");
    scanf("%s", &name);
    // scanf("%s", name);
    printf("Your name is = %s", name);
    return 0;
}