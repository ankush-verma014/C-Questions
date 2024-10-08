
// Find Factorial
// write a C program to find the factorial of a given number. Take the input from the user.
// Sample Input
// Enter a number : 5
// Sample Output
// Factoria of 5 : 120

#include <stdio.h>

int main() {
    int num ;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

     int i = 1;
    
    while (i <= num) 
    {
        factorial *= i;
        i++;
    }
    printf("Factorial of %d: %llu\n", num, factorial);

    return 0;
}
