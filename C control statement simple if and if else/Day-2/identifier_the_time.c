#include <stdio.h>

int main() {

    int hour;

    printf("Enter the hour (24-hour format): ");
    scanf("%d", &hour);

    if (hour < 0 || hour > 23)
     {
        printf("Invalid input! Please enter an hour between 0 and 23.\n");
     } 
     else if (hour >= 5 && hour < 12)
         {
            printf("It's Morning.\n");
         } 
         else if (hour >= 12 && hour < 17) 
         {
            printf("It's Afternoon.\n");
         }
         else if (hour >= 17 && hour < 21) 
         {
            printf("It's Evening.\n");
         } 
        else
         {
            printf("It's Night.\n");
         }

         return 0;
    }


