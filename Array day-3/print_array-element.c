// Write a C program that performs the following tasks:

// Read an integer value from the user to determine the size of an array.
// Dynamically allocate memory for the array based on the given size.
// Prompt the user to input elements and store them in the array.
// Use a for loop to print all the elements of the array, displaying each element along with its position.

// Sample input :
// Enter the size of the array: 5
// Enter 5 elements:
// Element at index 0: 10
// Element at index 1: 20
// Element at index 2: 30
// Element at index 3: 40
// Element at index 4: 50


// Sample output :
// The elements in the array are:
// Element at index 0: 10
// Element at index 1: 20
// Element at index 2: 30
// Element at index 3: 40
// Element at index 4: 50

#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n], i;

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("The elements in the array are:\n");
    for (i = 0; i < n; i++) 
    {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}
