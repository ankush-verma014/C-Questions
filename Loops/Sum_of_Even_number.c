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
