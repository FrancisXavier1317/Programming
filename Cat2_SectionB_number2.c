/*
Name:Francis Xavier Mokua 
Reg no:PA106/G/28792/25
Description:Program to input 10 integers and store them in a 
            file "input.txt" read from the file and calculate 
            the sum and average of the integers and store it in "output.txt"
*/
#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    int numbers[10], sum = 0;
    float average;

    inputFile = fopen("input.txt", "w");
    if (inputFile == NULL) {
        printf("Error: Could not open input.txt for writing.\n");
        return 1;
    }

    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
        fprintf(inputFile, "%d\n", numbers[i]);
    }
    fclose(inputFile);
    
    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "w");
    if (inputFile == NULL || outputFile == NULL) {
        printf("Error: Could not open one or both files.\n");
        return 1;
    }

    int num, count = 0;
    while (fscanf(inputFile, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    average = (count > 0) ? (float)sum / count : 0;
    fprintf(outputFile, "Sum: %d\nAverage: %.2f\n", sum, average);

    fclose(inputFile);
    fclose(outputFile);

    inputFile = fopen("input.txt", "r");
    outputFile = fopen("output.txt", "r");
    if (inputFile == NULL || outputFile == NULL) {
        printf("Error: Could not open files for display.\n");
        return 1;
    }

    char ch;
    while ((ch = fgetc(inputFile)) != EOF) {
        putchar(ch);
    }
    while ((ch = fgetc(outputFile)) != EOF) {
        putchar(ch);
    }

    fclose(inputFile);
    fclose(outputFile);

    return 0;
}