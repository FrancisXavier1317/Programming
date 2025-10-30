/*
Name:Francis Xavier Mokua 
Reg no:PA106/G/28792/25
Description:Program to assign rooms in an hotel and to 
            calculate the number of occupied rooms
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int totalOccupied = 0;

    srand(time(0)); // Random seed

    printf("Multiple Branch Occupancy\n");

    for (int branch = 0; branch < 3; branch++) {
        printf("\nBranch %d:\n", branch + 1);
        for (int floor = 0; floor < 5; floor++) {
            int floorOccupied = 0;
            for (int room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;
                if (chain[branch][floor][room] == 1)
                    floorOccupied++;
            }
            printf("  Floor %d → Occupied: %d\n", floor + 1, floorOccupied);
            totalOccupied += floorOccupied;
        }
    }

    printf("\nTotal Occupied Rooms Across All Branches: %d\n", totalOccupied);

    return 0;
}