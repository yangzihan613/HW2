#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float dollars;
	do
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf("%f", &dollars);
		if (dollars == -1)
			break;
		printf("Salary is: %.2f\n\n", dollars * 0.09 + 200);
	} while (1);
	system("pause");
}