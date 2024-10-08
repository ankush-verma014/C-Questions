// Addition of Natural Number
// Write a C program to add all the natural number from 1 to n. Ask the user to give n value and print the addition value.
// Sample Input
// Enter n value : 10
// Sample Output
// Sum of the natural number from 1 to 10 : 55

#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;

    printf("Enter n value: ");
    scanf("%d", &n);

    while (i <= n) 
    {
        sum += i;
        i++;
    }

    printf("Sum of the natural numbers from 1 to %d: %d\n", n, sum);

    return 0;
}
