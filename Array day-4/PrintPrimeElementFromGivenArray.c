// PrintPrimeElementFromGivenArray
// Write a C program to print all the prime numbers from an array.

// Sample input :
// Enter the number of elements in the array: 7
// Enter 7 elements: 12 5 9 7 11 2 8
 
// Sample output :
// Prime numbers in the array: 5 7 11 2
// Sample Input
// 7
// 12 5 9 7 11 2 8
// Sample Output
// 5 7 11 2

#include <stdio.h>

int main() {
    int arrSize;
    printf("Enter the number of array elements: ");
    scanf("%d", &arrSize);

    int arr[arrSize];

    printf("Enter the array elements: ");
    for (int i = 0; i < arrSize; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Prime numbers in the array: ");
    for (int i = 0; i < arrSize; i++) {
        int num = arr[i];
        int isPrime = 1; 

        if (num <= 1) {
            isPrime = 0; 
        } else {
            for (int j = 2; j * j <= num; j++) {
                if (num % j == 0) {
                    isPrime = 0; 
                    break;
                }
            }
        }

        if (isPrime) {
            printf("%d ", num);
        }
    }
    printf("\n");

    return 0;
}