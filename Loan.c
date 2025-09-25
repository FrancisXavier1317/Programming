/*
Name:FraXavier Mokua
Reg no:PA106/G/28792/25
Description:Program to offer loan if the person is 21 years and above
            and his/her annual income is more than 21000
*/
#include <stdio.h>

int main() {
    int age;
    float income;
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income:Ksh.");
    scanf("%f", &income);

    if (age >= 21 & income >=21000){
        printf("Congratulations, you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
        }

    return 0;
}