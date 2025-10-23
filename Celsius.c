//C program 
/*
Name: Nyaga Samuel Gitonga 
Reg No: CT100/G/25921/25
Description: prompt the user to calculate temperature in Celsius 
*/

#include <stdio.h>

float convertToCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5.0 / 9.0;
}

int main() {
    float f;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    float celsius = convertToCelsius(f);
    printf("Temperature in Celsius: %.2f\n", celsius);

    return 0;
}