//C program 
/*
Name: Nyaga Samuel Gitonga 
Reg No: CT100/G/25921/25
Description: prompt the user to calculate electric bill 
*/

#include <stdio.h>

int calculateElectricBill(int units) {
    int totalBill = 0;
    if (units <= 100) {
        totalBill = units * 10;
    } else if (units <= 200) {
        totalBill = (100 * 10) + (units - 100) * 15;
    } else {
        totalBill = (100 * 10) + (100 * 15) + (units - 200) * 20;
    }
    return totalBill;
}

int main() {
    int units_consumed = 250;
    int bill = calculateElectricBill(units_consumed);
    printf("The total bill for %d units is KSh. %d\n", units_consumed, bill);
    return 0;
}