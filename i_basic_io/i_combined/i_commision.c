// Commission calculation for salespersons A and B
#include <stdio.h>
int main()
{
	float ta, tb, ca, cb, tcab;
	printf("Total sale amount of A=");
	scanf("%f", &ta);
	printf("Total sale amount of B=");
	scanf("%f", &tb);
	if (ta > 2000)
		ca = ta * 0.06;
	else
		ca = ta * 0.07;

	if (tb < 4000)
		cb = tb * 0.1;
	else
		cb = tb * 0.12;

	tcab = ca + cb;
	printf("Total amount of commission Amount= %f", tcab);
	return 0;
}
