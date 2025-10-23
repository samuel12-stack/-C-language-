//C program 
/*
Name: Nyaga Samuel Gitonga 
Reg No: CT100/G/25921/25
Description: prompt the user to calculate fare 
*/


#include <stdio.h>

float calculateFare(float distance_km) {
    float total_fare = distance_km * 50.0;
    return total_fare;
}

int main() {
    float distance = 10.0;
    float fare = calculateFare(distance);
    printf("The fare for a %.2f km trip is KSh. %.2f\n", distance, fare);
    return 0;
    }