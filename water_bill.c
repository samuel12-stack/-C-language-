// C program 
/* Name: Nyaga Samuel Gitonga 
Reg No: CT100/G/25921/25
Description: Prompt the user to enter water bills 
*/

#include <stdio.h>

int main() {
    int units;
    float bill;

    // Prompt the user to enter the water units consumed
    printf("Enter water units consumed: ");
    scanf("%d", &units);

    // Calculating the bill using if-else
    if (units <= 30) {
        bill = units * 20.0;
    } 
    else if (units <= 60) {
        bill = units * 25.0;
    }
     else if (units > 60) {
     bill = units * 30.0;
    }

    // Displaying the total bill with 2 decimal places
    printf("Total water bill: %.2f KES\n", bill);

    return 0;
}