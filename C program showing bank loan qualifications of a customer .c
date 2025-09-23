//C program
/*
Name: Samuel Gitonga 
Reg: CT100/G/25921/25
Description: to prompt the student to enter the bank loan qualifications of a customer 
*/
#include <stdio.h>

int main() {
    int age;
    int income;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income in Sh: ");
    scanf("%f", &income);

    if (age >= 21 && income >= 21000) {
        printf("Congratulations, you qualify for a loan.\n");
        printf("Sorry, you do not qualify for a loan at this time.\n");
    }

    return 0;
}