// Count The Digit
// Write a C program that asks the user to input an integer and count the digts and print the count of the digits.

// Sample Input
// Enter a number : 546
// Sample Output
// Count of the digits is : 3

#include <stdio.h>

int main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) 
    {
        num /= 10;
        count++;
    }
    printf("Count of the digits is: %d\n", count);

    return 0;
}
