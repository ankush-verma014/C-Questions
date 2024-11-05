// Write a C program to print all the unique elements from an array.

// Sample input :
// Enter the number of elements in the array: 6
// Enter 6 elements: 10 20 20 30 40 10

// Sample output :
// Unique elements in the array: 30 40
// Sample Input
// 6
// 10 20 20 30 40 10
// Sample Output
// 30 40

#include <stdio.h>

int main()
{
    int arrSize;
    printf("Enter the number of array elements: ");
    scanf("%d", &arrSize);

    int arr[arrSize];

    printf("Enter the array elements: ");
    for (int i = 0; i < arrSize; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < arrSize; i++)
    {
        int count = 0;
        for (int j = 0; j < arrSize; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count == 1)
            {
                printf("%d ", arr[i]);
            }
    }

    return 0;
}