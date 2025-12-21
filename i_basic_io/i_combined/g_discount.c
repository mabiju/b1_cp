// program to calculate discount on books
#include <stdio.h>
int main()
{
    int no_of_books;
    float rate, discount, total_amt, net_amt;
    printf("Enter the number of book=");
    scanf("%d", &no_of_books);
    printf("Enter the rate of book=");
    scanf("%f", &rate);
    total_amt = no_of_books * rate;
    if (total_amt >= 1000)
    {
        discount = 1000 * 10 / 100;
    }
    else
    {
        discount = 1000 * 5 / 100;
    }
    net_amt = total_amt - discount;
    printf("\nTotal amount=%.1f", total_amt);
    printf("\nDiscount amount=%.1f", discount);
    printf("\nNet amount=%.1f", net_amt);
    return 0;
}
