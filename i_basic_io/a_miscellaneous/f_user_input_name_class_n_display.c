// program to take user input for name and class and display them
#include <stdio.h>
int main() {
    char name[50];
    int class;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    printf("Enter your class: ");  
    scanf("%d", &class);
    printf("Name: %s", name);
    printf("Class: %d\n", class);
    return 0;
}