#include<stdio.h>
#include<stdlib.h>

int main(void) {
	int account,control;
	float beginning, charges, credits, limit;
	do {
		printf("Enter account number(-1 to end): ");
		scanf("%d", &account);
		if (account == -1)
			break;
		printf("Enter beginning balance: ");
		scanf("%f", &beginning);
		printf("Enter total charges:");
		scanf("%f", &charges);
		printf("Enter total credits:");
		scanf("%f", &credits);
		printf("Enter credit limit: ");
		scanf("%f", &limit);

		printf("Account:%d\n", account);
		printf("Credit limit:%.2f\n", limit);
		printf("Balance:%.2f\n", beginning + credits);
		printf("Crdit limit Exceeded.\n\n");
		
	} while (1);
	system("pause");
}