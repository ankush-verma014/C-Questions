#include <stdio.h>
 
int main() {
    int arr[] = {30, 15, 25, 40, 20};
    int max = arr[0];
     
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
     
    printf("Largest element in array: %d\n", max);
     
    return 0;
}