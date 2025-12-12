/* An organization pays its employee allowance at the rate of 10% of basic salary.
Write a C program to input basic salary of an employee and calculate the allowance
and total salary (basic salary + allowance) of the employee. */
#include <stdio.h>
int main() {
    float basic_salary, allowance, total_salary;

    // Input basic salary
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic_salary);

    // Calculate allowance (10% of basic salary)
    allowance = 0.10 * basic_salary;

    // Calculate total salary
    total_salary = basic_salary + allowance;

    // Output the results
    printf("Allowance: %.2f\n", allowance);
    printf("Total Salary: %.2f\n", total_salary);

    return 0;
}   