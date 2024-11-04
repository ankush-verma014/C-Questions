#include <stdio.h>

int main() {
    int n;

    printf("Enter the array size: ");
    scanf("%d", &n);

    int arr[n];
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        printf("Element at index %d: ", i);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for (int i = 1; i < n; i++) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        else if (arr[i] > max) 
        {
            max = arr[i];
        }
    }

    printf("Maximum = %d, Minimum = %d\n", max, min);
    
    return 0;
}
