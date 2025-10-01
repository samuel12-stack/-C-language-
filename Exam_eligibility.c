// C program 
/*
Name: Samuel Gitonga 
Reg No: CT100/G/25
Description: prompt the user to enter attendance marks
*/

#include<stdio.h>

int main (){
int attendance;
float marks;

printf("enter attendance:");
scanf("%d", & attendance);

printf("enter marks:");
scanf("%f", & marks);

if (attendance >= 75 && marks >= 40) {
   printf ("eligible.\n");}
   else {
   printf ("not eligible.\n");
   }
   
   return 0;
   
}