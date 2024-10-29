// > Create a c program to read the array element and print the array element 
//   while reading the element write that type of logic where the user can 
//   see in which index the element is storing and while printing the element 
//   with the index will be printed

// Input as : Enter how many array element you want to add
//            5
//            Enter the element for index 1
//            10
//            Enter the element for index 2
//            20 
//            so on...….

// Output as : Element at arr[1] is 10 
//             Element at arr[2] is 20
//             so on...

#include <stdio.h>

int main() {
    int n;
    printf("Enter how many array elements you want to add: ");
    scanf("%d", &n);

    int arr[n]; 
    for (int i = 0; i < n; i++) 
    {
        printf("Enter the element for index %d: ", i);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) 
    {
        printf("Element at arr[%d] is %d\n", i, arr[i]);
    }

    return 0;
}
