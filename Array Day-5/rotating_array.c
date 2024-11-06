#include <stdio.h>

int main() {
    int arr[11] = {0,3,6,9,12,14,18,20,22,25,27};
    int n = sizeof(arr) / sizeof(arr[0]);
    int pos;

    printf("Enter the postion: ");
    scanf("%d", &pos);

    printf("Original array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    for (int r = 0; r < pos; r++) {
        int temp = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;
    }

    printf("Array after %d left rotation:\n", pos );
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}