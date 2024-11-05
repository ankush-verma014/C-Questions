// Write a program in C to count the frequency of each element of an array.

// Sample input :
// Enter size of array : 5
// Enter 5 elements    : 43 25 12 43 43 

// Sample output :
// The frequency of all elements of an array :
// 25 occurs 1 times
// 12 occurs 1 times
// 43 occurs 3 times
// Sample Input
// 5
// 43 25 12 43 43
// Sample Output
// 25 occurs 1 times
// 12 occurs 1 times
// 43 occurs 3 times

#include <stdio.h>

int main() {
    int n, i, j, count;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("The frequency of all elements of the array:\n");

    for(i = 0; i < n; i++) 
    {
        count = 1;  
      
        if(arr[i] == -1) 
        {
            continue;
        }

        for(j = i + 1; j < n; j++) 
        {
            if(arr[i] == arr[j]) 
            {
                count++;
                arr[j] = -1;  
            }
        }

        printf("%d occurs %d times\n", arr[i], count);
    }

    return 0;
}
