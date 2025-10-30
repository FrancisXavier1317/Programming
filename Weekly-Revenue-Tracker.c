/*
Name:Francis Xavier Mokua 
Reg no:PA106/G/28792/25
Description:Program to calculate daily revenue and weekly revenue in a hotel
*/

#include <stdio.h>

int main() {
    double revenue[7];
    double total = 0.0, average;

    printf("Weekly Revenue Tracker\n");

    for (int i = 0; i < 7; i++) {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%lf", &revenue[i]);
        total += revenue[i];
    }

    average = total / 7.0;

    printf("\nTotal Weekly Revenue: %.2f\n", total);
    printf("Average Daily Revenue: %.2f\n", average);

    return 0;
}