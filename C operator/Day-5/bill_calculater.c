#include <stdio.h>

int main() {
    int tea, coffee, biscuits;
    float tea_price = 10.0, coffee_price = 15.0, biscuit_price = 5.0;
    float total;

    // Introduction
    printf("Welcome to Tasty Treats Cafe: Bill Calculator\n");
    printf("We provide a delightful selection of beverages and snacks to satisfy your cravings.\n");
    printf("Today, you are our esteemed customer, and we are eager to serve you!\n");

    // Taking input from the user
    printf("How many cups of tea would you like to order? ");
    scanf("%d", &tea);
    printf("How many cups of coffee would you like to order? ");
    scanf("%d", &coffee);
    printf("How many biscuits would you like to order? ");
    scanf("%d", &biscuits);

    // Calculating the total bill
    total = (tea * tea_price) + (coffee * coffee_price) + (biscuits * biscuit_price);

    // Displaying the total bill
    printf("Your total bill is: %.2f\n", total);

    return 0;
}
