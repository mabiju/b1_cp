// Convert user input hours and minutes to total minutes
#include <stdio.h>
int main()
{
    int hrs, mins, tot_mins;
    printf("Input hours: ");
    scanf("%d", &hrs);
    printf("Input minutes: ");
    scanf("%d", &mins);
    tot_mins = mins + (hrs * 60);
    printf("Total: %d minutes.\n", tot_mins);
    return 0;
}