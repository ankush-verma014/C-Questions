#include <stdio.h>

int main() {
    int choice, quantity, total_price, amount_paid, change;
    char order_again;

    printf("Welcome to our Tea Stall Counter! Our menu:\n");
    printf("1. Tea --------------------- Rs. 10\n");
    printf("2. Coffee ------------------ Rs. 20\n");
    printf("3. Cold coffee ------------- Rs. 50\n");
    printf("4. Exit\n");
    printf("Choose by entering a number (1-4): ");
    
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 3) {
        if (choice == 1) {
            printf("How many cups of refreshing tea? ");
            scanf("%d", &quantity);
            total_price = quantity * 10;
        } else if (choice == 2) {
            printf("How many cups of aromatic coffee? ");
            scanf("%d", &quantity);
            total_price = quantity * 20;
        } else if (choice == 3) {
            printf("How many cups of chilled cold coffee? ");
            scanf("%d", &quantity);
            total_price = quantity * 50;
        }

        printf("Total for %d cup(s): Rs. %d.\n", quantity, total_price);
        printf("Enter your payment amount: Rs. ");
        scanf("%d", &amount_paid);

        change = amount_paid - total_price;
        printf("Change: Rs. %d.\n", change);

        printf("Explore more or finalize? (Type 'Y' for Yes or 'N' for No): ");
        scanf(" %c", &order_again);

        if (order_again == 'Y' || order_again == 'y') {
            printf("Certainly, let's explore.\n");
        } else {
            printf("Thank you for visiting! We look forward to serving you again soon!\n");
        }
    } else if (choice == 4) {
        printf("Thank you for visiting! We look forward to serving you again soon!\n");
    } else {
        printf("Invalid choice! Please restart the program.\n");
    }

    return 0;
}
