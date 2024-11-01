// Write a program in C to store N number of values in an array and display them in reverse order.

// Sample input :
// element - 0 : 2
// element - 1 : 5
// element - 2 : 7

// Sample output :
// The values store into the array are :2 5 7
// The values store into the array in reverse are :7 5 2

#include <stdio.h>

int main() {
    int n;


    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The values stored in the array are: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
          printf("\n");

    printf("The values stored in the array in reverse are: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
