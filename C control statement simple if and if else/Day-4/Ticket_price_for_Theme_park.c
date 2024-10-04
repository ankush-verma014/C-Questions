// You are developing a ticket pricing system for a theme park. Write a program that takes the following inputs from a customer:



// Age (integer)

// Height in centimeters (float)

// Whether the customer has a VIP pass (y or n)

// The program should calculate the ticket price based on the following rules:



// Children under 3 years old (inclusive) get in for free.

// Children aged 4 to 12 (inclusive) pay Rs.20.

// Adults aged 13 to 64 (inclusive) pay Rs.100.

// Seniors aged 65 and above pay Rs.50.

// However, there are some additional considerations based on height:



// If the customer is above 180 cm in height, they pay an extra 50.

// If the customer is between 120 cm (inclusive) and 180 cm (inclusive), no additional charge applies.

// If the customer is below 120 cm, they receive a 50% discount on the base ticket price.

// If the customer has a VIP pass, they get a 10% discount on the final ticket price.



// Write a program that implements these pricing rules and provides the following output:



// The customer's age, height, and VIP pass status.

// The calculated base ticket price before any discounts or additional charges.

// Any discounts or additional charges applied based on height.

// The final ticket price after applying all discounts and charges.

// Additionally, if the customer's age is below 0 or height is negative, the program should provide an error message.

#include <stdio.h>

int main() {
    int age;
    int height;
    char vip_pass;
    float price, final_price, Pay_extra;
    printf("VIP pass (y/n): ");
    scanf("%c",&vip_pass);
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter height (in cm): ");
    scanf("%d", &height);
    

    if (age <= 3) {
        price = 0;  
    } else if (age >= 4 && age <= 12) {
       price = 20;
    } else if (age >= 13 && age <= 64) {
        price = 100;
    } else if (age >= 65) {
        price = 50;
    }


    if (height > 180) {
        Pay_extra = 50;  
    }else if(height > 120 && height < 180){
        price=price;
    } 
    else if (height < 120) {
        price = price*0.5;
    }
    final_price=price+Pay_extra;
    if (vip_pass == 'y' || vip_pass == 'Y'){
            final_price = final_price*0.9;

    }
    printf("Customer Details:\n");
    printf("Age: %d years\n", age);
    printf("Height: %d cm\n", height);
    printf("VIP Pass: %c\n", vip_pass);
    
    printf("\nPrice Breakdown:\n");
    printf("Ticket Price: Rs. %.2f\n", price);
    printf("Additional Charges: Rs. %.2f\n", Pay_extra);
    printf("Final Ticket Price: Rs. %.2f\n", final_price);

    return 0;

}