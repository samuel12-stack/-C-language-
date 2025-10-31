//C program 
/*
Name: Nyaga Samuel Gitonga 
Reg No: CT100/G/25921/25
Description: prompt the user to enter room occupancy 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int occupancy[5][10];

    //occupancy (0 = vacant, 1 = occupied)
    for (int i = 0; i < 5; i++) {
        int occupied = 0;
        for (int j = 0; j < 10; j++) {
            occupancy[i][j] = rand() % 2;
            occupied += occupancy[i][j];
        }
        int vacant = 10 - occupied;
        printf("Floor %d: Occupied = %d, Vacant = %d\n", i + 1, occupied, vacant);
    }

    return 0;
}
