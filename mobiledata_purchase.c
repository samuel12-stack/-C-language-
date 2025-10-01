// C program 
/* Name: Nyaga Samuel Gitonga 
Reg No: CT100/G/25921/25
Description: Prompt the user to enter water bundle type and cost
*/

#include <stdio.h>

int main() {
int choice;

// Displaying the menu
printf("Select data bundle:\n");
printf("1. 100MB @ 50 KES\n");
printf("2. 500MB @ 200 KES\n");
printf("3. 1GB   @ 350 KES\n");
printf("4. 2GB   @ 600 KES\n");

// Ask the user to enter their choice (1-4)
printf("Enter your choice (1-4): ");
scanf("%d", &choice);

// Use of Switch to display the selected bundle and cost
switch (choice) {
printf("You selected 100MB. Cost = 50 KES\n");
printf("You selected 500MB. Cost = 200 KES\n");
printf("You selected 1GB. Cost = 350 KES\n");
printf("You selected 2GB. Cost = 600 KES\n");
printf("Invalid choice\n");
}

return 0;
}