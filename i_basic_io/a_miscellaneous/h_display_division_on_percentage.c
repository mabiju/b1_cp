// program to display division based on percentage
#include <stdio.h>
int main() {
    float total_marks, obtained_marks, percentage;

    // Input total marks and obtained marks
    printf("Enter total marks: ");
    scanf("%f", &total_marks);
    printf("Enter obtained marks: ");
    scanf("%f", &obtained_marks);

    // Calculate percentage
    percentage = (obtained_marks / total_marks) * 100;

    // Display division based on percentage
    printf("Percentage: %.2f%%\n", percentage);
    if (percentage >= 80) {
        printf("Distinction\n");
    } else if (percentage >= 60) {
        printf("Division: First Division\n");
    }else if (percentage >= 45) {
        printf("Division: Second Division\n");
    } else if (percentage >= 32) {
        printf("Division: Third Division\n");
    } else {
        printf("Division: Fail\n");
    }
    return 0;
}