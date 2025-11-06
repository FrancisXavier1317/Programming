/*
Name:Francis Xavier Mokua 
Reg no:PA106/G/28792/25
Description:Program that stores students' information 
            and reads their exam records from a binary file
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    char reg_no[20];
    int total_marks;
};

int main() {
    struct Student s;
    FILE *fptr;
    fopen("results.dat", "rb");

    if (fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fread(&s, sizeof(struct Student), 1, fptr)) {
        printf("Name: %s, Marks: %d\n", s.name, s.total_marks);
    }

    fclose(fptr);
    return 0;
}