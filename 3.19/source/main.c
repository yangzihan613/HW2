#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int day;
	float rate, principal;
	do
	{
		printf("Enter loan principal (-1 or end): ");
		scanf("%f", &principal);
		if (principal == -1)
			break;
		printf("Enter interest rate :");
		scanf("%f", &rate);
		printf("Enter term of the loan in days: ");
		scanf("%d", &day);
		printf("The interest charge is $%.2f\n\n", principal * (rate * (day / 365.0)));
	} while (1);
}