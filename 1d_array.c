//C program 
/*
Name: Nyaga Samuel Gitonga 
Reg No: CT100/G/25921/25
Description: prompt the user to enter daily revenues
*/

#include <stdio.h>
int main(){
float revenue[7];
float total_revenue=0.0;
float average_revenue;

// revenue for each day 
for(int i=0; i<7; i++){
printf ("enter revenue for each day %d:", i+1);
scanf("%f", & revenue[i]);
total_revenue += revenue[i];
}

// average revenue 
average_revenue = total_revenue / 7;

//total and average revenue 
printf("total revenue: %.2f \n", total_revenue);
printf("average revenue: %.2f \n", average_revenue);

return 0;
}