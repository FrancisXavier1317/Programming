/*
Name:Francis Xavier Mokua 
Reg no:PA106/G/28792/25
Description:Program to declare 2D with 2 rows and 2 columns 
            and display elements using nested for loop.
*/

#include <stdio.h>

int main() {
    int scores[2][4] = {
        {65, 92, 35, 70},
        {84, 72, 59, 67}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("scores[%d][%d] = %d\n", i, j, scores[i][j]);
        }
    }

    return 0;
}