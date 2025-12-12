// Program to take a user input name and display it 10 times
#include <stdio.h>
int main()
{
    char name[100];
    int i;

    // Input name from user
    printf("Enter your name: ");
    scanf("%99s", name); // Limit input to avoid buffer overflow

    // Display the name 10 times
    for (i = 0; i < 10; i++) {
        printf("%s\n", name);
    }

    return 0;
}