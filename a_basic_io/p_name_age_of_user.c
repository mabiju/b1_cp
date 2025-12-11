#include <stdio.h>
int main()
{
    char name[50];
    int age;
    printf("Enter your name: ");
    scanf("%49s", name);
    /* This is a "%49s" safety measure used during input to prevent a buffer overflow. The 49 acts as a width specifier, telling scanf to read a maximum of 49 characters from the input stream and store them in the character array str. The function automatically adds a null terminator (\0) at the end, so a character array of size at least 50 is required to hold the string and its terminator safely. */
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Hello, %s! You are %d years old.\n", name, age);
    return 0;
}