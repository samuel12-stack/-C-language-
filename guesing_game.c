//C program 
/*
Name: Nyaga Samuel Gitonga 
Reg No: CT100/G/25921/25
Description: prompt the user to enter number guessing game 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int secret, guess, attempts;

// Initialize random number generator
srand(time(0));
secret = (rand() % 20) + 1; // Random number between 1 and 20

printf("Guess the number (between 1 and 20):\n");

do {
printf("Enter your guess: ");
scanf("%d", &guess);
attempts++;

if (guess > secret)
printf("Too high!\n");
else if (guess < secret)
printf("Too low!\n");
else
printf("Congratulations! You guessed it in %d attempts.\n", attempts);

} while (guess != secret);

return 0;
}