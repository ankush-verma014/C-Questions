#include <stdio.h>
 
int main() {
    int arr[] = {5, 10, 15, 20, 25};
    int sum = 0;
     
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
     
    printf("Sum of array elements: %d\n", sum);
     
    return 0;
}