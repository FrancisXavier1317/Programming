/*
Name:Francis Xavier Mokua 
Reg no:PA106/G/28792/25
Description:Program to calaculate gross pay, net pay and tax and display the result.
*/
#include <stdio.h>

int main() {
    float hours, wage, grossPay, tax, netPay;

    // Input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    printf("Enter hourly wage: ");
    scanf("%f", &wage);

    // Calculate gross pay
    if (hours <= 40) {
        grossPay = hours * wage;
    } else {
        grossPay = (40 * wage) + ((hours - 40) * wage * 1.5);
    }

    // Calculate tax
    if (grossPay <= 600) {
        tax = grossPay * 0.15;
    } else {
        tax = (600 * 0.15) + ((grossPay - 600) * 0.20);
    }
    netPay = grossPay - tax;

    printf("Gross Pay:ksh.%.2f\n", grossPay);
    printf("Tax:      ksh.%.2f\n", tax);
    printf("Net Pay:  ksh.%.2f\n", netPay);

    return 0;
}