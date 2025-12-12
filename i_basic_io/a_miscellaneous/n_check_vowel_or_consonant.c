// Program to check if a character is a vowel or consonant
#include <stdio.h>
int main() {
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);

    // Check if the character is a vowel
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is a vowel.\n", ch);
    } 
    // Check if the character is a consonant
    else if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        printf("%c is a consonant.\n", ch);
    } 
    // If it's not an alphabet
    else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}