// Program to find the greatest of two numbers
#include <stdio.h>

int main() {
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    if (num1 > num2){
        printf("The greatest number is %d\n", num1);
    }
    else{
        printf("The greatest number is %d\n", num2);
    }
    return 0;
}