//C program 
/*
Name: Nyaga Samuel Gitonga 
Reg No: CT100/G/25921/25
Description: prompt the user to enter password 
*/

#include <stdio.h>

int main() {
int password;

do {
printf("Enter password:");
scanf("%d", &password);
} 
while (password != 1234);

printf("Access Granted\n");

return 0;
}