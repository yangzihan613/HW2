#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;
	printf("(A)\n");
	for (i = 1; i <= 10; i++) 
	{
		for (j = 1; j <= 10; j++)
		{
			if (j <= i)
				printf("*");
		}
		printf("\n");
	}
	//////////////////////////////////////////////////////////////
	printf("(B)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j >= i)
				printf("*");
		}
		printf("\n");
	}
	///////////////////////////////////////////////////////////////
	printf("(C)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 1; j <= 10; j++)
		{
			if (j <= i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
	///////////////////////////////////////////////////////////////
	printf("(D)\n");
	for (i = 1; i <= 10; i++)
	{
		for (j = 10; j >= 1; j--)
		{
			if (j > i)
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}