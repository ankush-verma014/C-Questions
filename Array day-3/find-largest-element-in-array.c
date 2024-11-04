// #include <stdio.h>
 
// int main() {
//     int arr[] = {3,4,1,9,8,88,9,88,88,1};
//     int max = arr[0];
     
//     for (int i = 1; i < 5; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }
     
//     printf(" second Largest element in array: %d\n", max);
     
//     return 0;
// }

#include <stdio.h>

int main() {
    int n;

   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

   
    printf("Enter the elements of the array: \n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    int second_max = -1;

    
    for (int i = 1; i < n; i++) 
    {
        if (arr[i] > max) {
            second_max = max;
            max = arr[i]; 
        } else if (arr[i] > second_max && arr[i] < max) 
        {
            second_max = arr[i]; 
        }
    }

    if (second_max != -1) 
    {
        printf("Second largest element in array: %d\n", second_max);
    } else 
    {
        printf("No second largest element found.\n");
    }

    return 0;
}
