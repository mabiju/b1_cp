// Convert user input minutes to hours and minutes
#include <stdio.h>
int main()
{
    int hrs, mins, tot_mins;
    printf("Input minutes: ");
    scanf("%d", &tot_mins);
    hrs = (tot_mins / 60);
    mins = (tot_mins % 60);
    printf("%d Hours, %d Minutes.", hrs, mins);
    return 0;
}