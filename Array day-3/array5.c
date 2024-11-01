// Write a program in C to copy the elements of one array into another array.

// Sample input :
// element - 0 : 15
// element - 1 : 10
// element - 2 : 12

// Sample output :
// The elements stored in the first array are :15 10 12
// The elements copied into the second array are :15 10 12


#include <stdio.h>

int main() {
    int n;


    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int a[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

  printf("The element stored in the first array are: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
          printf("\n");

    printf("The element stored in the second array are: ");
    for (int i = 0; i < n; i++) 
    {
        a[i]=arr[i];
        printf("%d ", a[i]);
    }

    return 0;
}
