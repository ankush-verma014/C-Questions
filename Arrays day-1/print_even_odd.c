// Write a C program that performs the following tasks:

// Dynamically allocate memory for an array to store 10 integer values.
// Prompt the user to input 10 integer values to store in the array.
// separately Print all the elements that are located at even indices and odd indices of the array.

// For Example : 

// Sample input :
// Enter 10 integer elements:
// Element at index 0: 12
// Element at index 1: 23
// Element at index 2: 34
// Element at index 3: 45
// Element at index 4: 56
// Element at index 5: 67
// Element at index 6: 78
// Element at index 7: 89
// Element at index 8: 90
// Element at index 9: 11

// Sample output : 
// Elements at even indices are:
// Element at index 0: 12
// Element at index 2: 34
// Element at index 4: 56
// Element at index 6: 78
// Element at index 8: 90
// ------------------------------
// Elements at odd indices are:
// Element at index 1: 23
// Element at index 3: 45
// Element at index 5: 67
// Element at index 7: 89
// Element at index 9: 11

#include <stdio.h>

int main() {
    
    int arr[10];

    printf("Enter 10 integer elements:\n");
    for (int i = 0; i < 10; i++) 
    {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\nElements at even indices are:\n");
    for (int i = 0; i < 10; i += 2) 
    {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    printf("------------------------------\n");
    
    printf("Elements at odd indices are:\n");
    for (int i = 1; i < 10; i += 2) 
    {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}
