#include <stdio.h>

int main() {
    float hoursWorked, hourlyWage, grossPay, netPay, taxes;
    float regularHours = 40.0, overtimeHours = 0.0;

    // Get input from the user
    printf("Enter hours worked in a week: ");
    scanf("%f", &hoursWorked);
    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);

    // Calculate gross pay
    if (hoursWorked > regularHours) {
        overtimeHours = hoursWorked - regularHours;
        grossPay = (regularHours * hourlyWage) + (overtimeHours * hourlyWage * 1.5);
    } else {
        grossPay = hoursWorked * hourlyWage;
    }

    // Calculate taxes
    if (grossPay <= 600) {
        taxes = grossPay * 0.15; // 15% for the first $600
    } else {
        taxes = (600 * 0.15) + ((grossPay - 600) * 0.20); // 20% for the rest
    }

    // Calculate net pay
    netPay = grossPay - taxes;

    // Print results
    printf("\n--- Payroll Summary ---\n");
    printf("Gross Pay: $%.2f\n", grossPay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", netPay);

    return 0;
}