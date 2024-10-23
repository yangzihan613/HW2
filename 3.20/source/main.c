#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int hour;
	float rate;
	do
	{
		
		printf("Enter # of hours worked (-1 or end): ");
		scanf("%d", &hour);
		if (hour == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00): ");
		scanf("%f", &rate);
		if (hour <= 40)
			printf("Salary is $%.2f\n\n", hour * rate);
		else
			printf("Salary is $%.2f\n\n", (40 * rate) + (( hour - 40 ) * rate) * 1.5);

	} while (1);
}