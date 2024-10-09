// Palindrome Or Not
// Write a C program to check whether a given integer is a palindrome. A number is considered a palindrome if the reverse of the number is equal to the original number. 
// The program should prompt the user to enter an integer, reverse the number, and then compare it to the original number to determine if it is a palindrome.
// Sample Input
// 121
// Sample Output
//  121 is palindrome number.

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder, original;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; 

    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num /= 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome number.\n", original);
    } else {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}
