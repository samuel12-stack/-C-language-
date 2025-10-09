//c program 
/*
Name: Nyaga Samuel Gitonga 
Reg No: CT100/G/25921/25
Description: prompt the user to enter account balance 
*/

#include <stdio.h>

int main() {
float balance;

//initial balance
printf("enter initial account balance:");
scanf("%f", & balance);

while (balance > 0) {
float withdraw;

//withdrawal amount
printf("enter withdrawal amount:");
scanf("%f", &withdraw);

//subtract the amount
balance -= withdraw;

//display the new balance
if (balance > 0)
printf("Balance after withdrawal: %.2f\n", balance);
else
printf("Insufficient funds. Balance is now: %.2f\n", balance);
}

printf("Transaction ended. Your account balance is zero or negative.\n");

return 0;
}