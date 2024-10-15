#include <stdio.h>

int main() {
    int number, maxDigit = 0;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    while (number > 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }

    printf("%d is the highest digit in the number.\n", maxDigit);
    return 0;
}
