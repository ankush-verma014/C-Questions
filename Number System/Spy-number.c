// Sum of digits: 1 + 1 + 2 + 4 = 8

// Product of digits: 1 * 1 * 2 * 4 = 8


#include <stdio.h>

int main() {
    int num, sum = 0, product = 1, digit;

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num; 

    while (temp != 0) 
    {
        digit = temp % 10;
        sum += digit;
        product *= digit;
        temp /= 10;
    }

    if (sum == product) 
    {
        printf("%d is a spy number\n", num);
    } else 
    {
        printf("%d is not a spy number\n", num);
    }

    return 0;
}
