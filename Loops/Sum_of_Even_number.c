#include <stdio.h>

int main() {
    int n, sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The even numbers are: ");
    for (int i = 1; i <= n; i++) 
    {
        int evenNumber = 2 * i;
        printf("%d ", evenNumber);
        sum += evenNumber;
    }

    printf("\nThe Sum of even Natural Numbers up to %d terms: %d\n", n, sum);

    return 0;
}

// #include <stdio.h>

// // Function to find the greatest of four integers
// int max_of_four(int a, int b, int c, int d) {
//     int max = a;  // Assume a is the largest initially

//     if (b > max) {
//         max = b;
//     }
//     if (c > max) {
//         max = c;
//     }
//     if (d > max) {
//         max = d;
//     }
    
//     return max;
// }

// int main() {
//     int a, b, c, d;
    
//     // Reading four integers
//     printf("Enter four integers: ");
//     scanf("%d %d %d %d", &a, &b, &c, &d);
    
//     // Calling the function and printing the result
//     int max = max_of_four(a, b, c, d);
//     printf("%d is a max number\n", max);

//     return 0;
// }

