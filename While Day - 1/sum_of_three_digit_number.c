// Sum Of Digit
// Write a C program that asks the user to input a three-digit integer and calculates the sum of its digits. Using While loop.



// Input as : 

// Enter a three digit number : 123



// Output as :

// Sum of the digits : 6
// Sample Input
// Enter a three digit number : 123
// Sample Output
// Sum of the digits : 6


#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    while (num != 0) 
    {
        sum += num % 10;
        num /= 10;
    }
    printf("Sum of the digits: %d\n", sum);

    return 0;
}
