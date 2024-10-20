// A number is considered perfect if it is equal to the sum of all its divisors excluding itself. 
// For example, 6 is a perfect number because the divisors of 6 are 1, 2, and 3, and their sum is 6. 
// Similarly, 28 is a perfect number because the sum of its divisors (1, 2, 4, 7, 14) is also 28.

#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    for (int i = 1; i <= number / 2; i++) 
    {
        if (number % i == 0) 
        {
            sum += i;
        }
    }

    if (sum == number) 
    {
        printf("%d is a perfect number.\n", number);
    } else 
    {
        printf("%d is not a perfect number.\n", number);
    }

    return 0;
}
