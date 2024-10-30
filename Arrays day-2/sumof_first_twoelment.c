// Given an array of integers, print the sum of the first 2 elements in the array.
// If the array length is less than 2, just sum up the elements that exist,
// print 0 if the array is having length 0.

// Note: Read and print the element from the user with the index value also 

#include <stdio.h>

int main() {
    int a[100];
    int n, i, sum = 0;

    printf("Enter the number of array elements: ");
    scanf("%d", &n);

    
    if (n == 0) 
    {
        printf("0\n");
        return 0; 
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

   
    if (n == 1) 
    {
        sum = a[0];
        
    }
    else {
        sum = a[0] + a[1];
    }

    
    printf("Sum of the first two elements: %d\n", sum);

   
    // for (i = 0; i < n; i++) {
    //     printf("Index %d: Value %d\n", i, a[i]);
    // }

    return 0;
}
