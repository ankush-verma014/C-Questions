// Reverse a number
// Write a C prgram that asks the user to input an integer and reverse that number and display the reverse of that given number.
// Sample Input
// Enter a number : 123
// Sample Output
// Reverse of the given number is : 321

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) 
    {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    printf("Reverse of the given number is: %d\n", reversed);

    return 0;
}
