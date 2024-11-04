// Write a C program to search for a given element in an array and print its index. The program should prompt the user to input the element they want to search for.
// If the element is found in the array, the program will print the index of the element. 
// If the element is not found, the program will display a message indicating that the element is not present in the array.


// Example 1:

// Sample input :
// Array: {3, 8, 4, 1, 9, 5, 9, 8, 9}
// Element to search: 7
// Sample output :
// Element 7 not found in the array
#include <stdio.h>

int main() {
    int arr[100]; 
    int n, element, found = 0;

    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

   
    printf("Element to search: ");
    scanf("%d", &element);


    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == element) 
        {
            printf("Element %d found at index %d\n", element, i);
            found = 1;
            break; 
        }
    }

   
    // if (!found) 
    // {
    //     printf("Element %d not found in the array\n", element);
    // }

    return 0;
}