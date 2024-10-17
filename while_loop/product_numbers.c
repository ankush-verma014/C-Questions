#include <stdio.h>

int main() {
    int number = 1; 
    int product = 1; 

    while (number <= 5) 
    {
        product *= number;
        printf("Current number: %d, Current product: %d\n", number, product);

        number++;
    }

    return 0; 
}
