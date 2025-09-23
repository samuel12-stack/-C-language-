//C program
/*
Name: Samuel Gitonga 
Reg: CT100/G/25921/25
Description: to prompt the student to compute for volume and surface area 
*/
#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, height, volume, surfaceArea;

    // Ask user for input
    printf("Enter radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter height of the cylinder: ");
    scanf("%f", &height);

    // Calculate volume and surface area
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * radius + 2 * PI * radius * height;

    // Output the results
    printf("Volume of the cylinder = %.2f\n", volume);
    printf("Surface Area of the cylinder = %.2f\n", surfaceArea);

    return 0;
}