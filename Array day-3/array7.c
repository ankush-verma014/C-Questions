// Write a program in C to find the second smallest element in an array.
// Test Data :
// Input the size of array : 5
// Input 5 elements in the array (value must be <9999) :
// element - 0 : 0
// element - 1 : 9
// element - 2 : 4
// element - 3 : 6
// element - 4 : 5
// Expected Output :
// The Second smallest element in the array is : 4

#include <stdio.h>

void main() {
    int arr1[50], n, i, j = 0, sml, sml2nd;

    // Prompt user for input
    printf("\n\nFind the second smallest element in an array :\n");
    printf("--------------------------------------------------\n");
    printf("Input the size of the array : ");
    scanf("%d", &n);

    // Input values for the array
    printf("Input %d elements in the array (value must be <9999) :\n", n);
    for (i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr1[i]);
    }

    // Find the location of the smallest element in the array
    sml = arr1[0];
    for (i = 0; i < n; i++) {
        if (sml > arr1[i]) {
            sml = arr1[i];
            j = i;
        }
    }

    // Ignore the smallest element and find the second smallest element in the array
    sml2nd = 99999;
    for (i = 0; i < n; i++) {
        if (i == j) {
            i++;  // Ignore the smallest element
            i--;
        } else {
            if (sml2nd > arr1[i]) {
                sml2nd = arr1[i];
            }
        }
    }

    // Display the second smallest element
    printf("The Second smallest element in the array is :  %d \n\n", sml2nd);
}
