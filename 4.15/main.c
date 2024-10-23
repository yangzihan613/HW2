#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int year;
	float rate = 1.1, principal;  //10%
	printf("Enter principal :");
	scanf("%f", &principal);
	printf("Enter the years :");
	scanf("%d", &year);
	for (int i = 0; i < year; i++)
	{
		principal = principal * rate;
		rate = rate + 0.05;
	}
	printf("\nprincipal=%.2f\n\n", principal);
	system("pause");
}