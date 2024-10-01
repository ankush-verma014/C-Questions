#include <stdio.h>

int main() {
    int age;
    char gender;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);

    if ((gender == 'M' || gender == 'm') && age >= 21) 
    {
        printf("You are eligible for marriage \n");

    } 
    else if ((gender == 'F' || gender == 'f') && age >= 18)
     {
        printf("You are eligible for marriage.\n");
     } 
    else 
    {
        printf("You are not eligible for marriage.\n");
    }

    return 0;
}
