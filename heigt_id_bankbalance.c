/*
Name:FraXavier Mokua Nyabwari 
Reg no:PA106/G/28792/25
Description:Program to enter ID no.,height & bank balance 
*/

#include<stdio.h>

int main(){
    int height;
    printf("Enter your height in cm");
    scanf("%d",&height);
    printf("Confirmation.\nYour height is %d \n",height);
    int ID;
    printf("Enter ID no.");
    scanf("%d",&ID);
    printf("Confirmation.\nYour ID no. is %d\n",ID);
    int money;
    printf("Enter your bank balance");
    scanf("%d",&money);
    printf("Confirmation.\nYour bank balance is %d",money);
    return 0;
}