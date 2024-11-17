#include <stdio.h>

int main() {
    double hours, hourly_wage, gross_pay, taxes, net_pay;
    
    // Get input from the user
    printf("Enter hours worked in a week: ");
    scanf("%lf", &hours);
    printf("Enter hourly wage: ");
    scanf("%lf", &hourly_wage);

    // Calculate gross pay, considering overtime
    if (hours > 40) {
        gross_pay = (40 * hourly_wage) + ((hours - 40) * hourly_wage * 1.5);
    } else {
        gross_pay = hours * hourly_wage;
    }

    // Calculate taxes based on tax brackets
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }

    // Calculate net pay
    net_pay = gross_pay - taxes;

    // Display the results
    printf("Gross pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net pay: $%.2f\n", net_pay);

    return 0;
}