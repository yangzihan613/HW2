#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j, k = 0;
	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5 - i; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= i+k ; j++)
		{
			printf("*");
		}
		k++;
		printf("\n");
	}

	k = 2;

	for (i = 5; i >= 1; i--)
	{
		for (j = 1; j <= 6-i ; j++)
		{
			printf(" ");
		}
		for (j = 1; j <=i+k; j++)
		{
			printf("*");
		}
		k--;
		printf("\n");
	}
}