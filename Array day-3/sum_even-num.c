// Write a C program that reads an integer N from the user to define the size of a dynamically allocated array. 
// The program should allow the user to input N integer values into the array, then calculate and print the sum of all even numbers in the array.

// For Example :

// Sample input : 
// Enter size of array : 6
// Enter 6 elements into the array :
// Element at index 0: 8
// Element at index 1: 2
// Element at index 2: 3
// Element at index 3: 4
// Element at index 4: 5
// Element at index 5: 6


// Sample output : 
// sum of all even numbers in the array is = 20

#include <stdio.h>

int main() {
    int n;
    
    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n], i,sum=0;

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

    for (int i = 0; i < n; i++) 
    {
        if (arr[i] % 2 == 0) 
        {
            sum += arr[i];
        }
    }
    
      printf("Sum of all even numbers in the array is = %d\n", sum);

    return 0;
}