// divisibal by 1 and geven number it is prime number

#include <stdio.h>

int main() {
    int number, i, isPrime = 1;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number <= 1) 
    {
        isPrime = 0;
    } else 
    {
        for (i = 2; i <= number / 2; i++) 
        {
            if (number % i == 0) 
            {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime) 
    {
        printf("%d is a prime number.\n", number);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}