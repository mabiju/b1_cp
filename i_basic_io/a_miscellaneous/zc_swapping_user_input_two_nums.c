// C program to swap two numbers using a temporary variable and user input
#include <stdio.h>
int main()
{
	int a, b, temp;
	printf("Enter the value of a:");
	scanf("%d", &a);
	printf("Enter the value of b:");
	scanf("%d", &b);
	printf("\nBefore Swaping value of a = %d and b = %d", a, b);
	temp = a;
	a = b;
	b = temp;
	printf("\nAfter Swaping value of a = %d and b = %d", a, b);
	return 0;
}
