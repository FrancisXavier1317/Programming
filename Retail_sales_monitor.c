/*
Name:Francis Xavier Mokua 
Reg no:PA106/G/28792/25
Description:Program to read transactions from a sales
            file and calculate the total sales in a day
*/
#include <stdio.h>

int main() {
    FILE *fptr;
    fopen("sales.txt", "r");
    float amount, total = 0.0;

    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(fptr, "%f", &amount) == 1) {
        total += amount;
    }

    fclose(fptr);
    printf("Total sales for the day: %.2f\n", total);
    return 0;
}