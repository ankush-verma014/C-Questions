// Given an array of integer , print a new array length 2 containing the first and
// last elements from the original array. The original array will be length 1 or more
// otherwise print not a valid declaration ?

// Print the original array and the new array element 

// Solve:

#include <stdio.h>

int main() {
    int n, i, j, temp;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
      printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("Index %d: %d\n", i, a[i]);
    }

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("Ascending order: ");
        for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}