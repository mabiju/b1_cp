#include <stdio.h>
int main()
{
    int pamt, time;
    float roi, si, amt;
    printf("Enter principal amount:");
    scanf("%d", &pamt);
    printf("Enter time (in years):");
    scanf("%d", &time);
    printf("Enter rate of interest:");
    scanf("%f", &roi);
    si = (pamt * roi * time) / 100;
    amt = pamt + si;
    printf("Simple Interest Rs.= %.2f\n", si);
    printf("Total Amount Rs.= %.2f\n", amt);
    return 0;
}