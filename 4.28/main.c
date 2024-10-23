#include <stdio.h>

int main() {
    int payCode;
    double salary, hourlyWage, hoursWorked, sales, piecePay, itemsProduced, totalPay;

    while (1) {
        printf("\nEnter employee's pay code (1: Manager, 2: Hourly worker, 3: Commission worker, 4: Pieceworker, 0: Exit): ");
        scanf("%d", &payCode);

        if (payCode == 0) {
            break;  // Exit the loop
        }

        switch (payCode) {
        case 1: // Manager
            printf("Enter the manager's fixed weekly salary: ");
            scanf("%lf", &salary);
            totalPay = salary;
            printf("The manager's weekly pay is: %.2lf\n", totalPay);
            break;

        case 2: // Hourly worker
            printf("Enter the hourly wage: ");
            scanf("%lf", &hourlyWage);
            printf("Enter the number of hours worked: ");
            scanf("%lf", &hoursWorked);

            if (hoursWorked <= 40) {
                totalPay = hourlyWage * hoursWorked;
            }
            else {
                totalPay = hourlyWage * 40 + (hoursWorked - 40) * (1.5 * hourlyWage);
            }
            printf("The hourly worker's weekly pay is: %.2lf\n", totalPay);
            break;

        case 3: // Commission worker
            printf("Enter the employee's total sales: ");
            scanf("%lf", &sales);
            totalPay = 250 + (0.0579 * sales);
            printf("The commission worker's weekly pay is: %.2lf\n", totalPay);
            break;

        case 4: // Pieceworker
            printf("Enter the fixed pay per item: ");
            scanf("%lf", &piecePay);
            printf("Enter the number of items produced: ");
            scanf("%lf", &itemsProduced);
            totalPay = piecePay * itemsProduced;
            printf("The pieceworker's weekly pay is: %.2lf\n", totalPay);
            break;

        default:
            printf("Invalid pay code. Please enter a valid code (1-4 or 0 to exit).\n");
            break;
        }
    }
    system("pause");
}
