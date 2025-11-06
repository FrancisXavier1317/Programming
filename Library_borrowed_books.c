/*
Name:Francis Xavier Mokua 
Reg no:PA106/G/28792/25
Description:Program to keep records of books borrowed from a library 
*/
#include <stdio.h>

int main() {
    char title[100];
    FILE *fptr;
    fopen("borrowed_books.txt", "a");

    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    fprintf(fptr, "%s", title);
    fclose(fptr);

    printf("Book title recorded successfully.\n");
    return 0;
}