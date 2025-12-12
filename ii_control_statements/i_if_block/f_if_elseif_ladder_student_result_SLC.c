// A simple C program to determine student result based on marks obtained in SLC exams
#include <stdio.h>
int main()
{
    double nep, eng, sci, math, acc, total, per;

    printf("\nEnter marks for each subjects not exceed than 100.");
    printf("--------------------------------------------------");

    printf("Enter marks in Nepali:");
    scanf("%lf", &nep);
    printf("Enter marks in English:");
    scanf("%lf", &eng);
    printf("Enter marks in Science:");
    scanf("%lf", &sci);
    printf("Enter marks in Maths:");
    scanf("%lf", &math);
    printf("Enter marks in Account:");
    scanf("%lf", &acc);
    total = nep + eng + sci + math + acc;
    printf("Total marks = %lf\n", total);

    if (nep > 31 && eng > 31 && sci > 31 && math > 31 && acc > 31)
    {
        per = total / 5;
        printf("Percentage = %lf\n", per);

        if (per >= 80)
        {
            printf("Distinction\n");
        }
        else if (per >= 60)
        {
            printf("First Division\n");
        }
        else if (per >= 45)
        {
            printf("Second Division\n");
        }
        else
        {
            printf("Third division\n");
        }
    }
    else
    {
        printf("Better luck next time.");
    }
    return 0;
}
