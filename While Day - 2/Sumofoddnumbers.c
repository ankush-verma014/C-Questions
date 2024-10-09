#include <stdio.h>

int main() {
    int N, sumEven = 0, sumOdd = 0, i = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &N);

    if (N < 0) 
    {
        printf("Invalid Input\n");
    } else 
        {
         while (i <= N) {
            if (i % 2 == 0) {
                sumEven += i;
            } else {
                sumOdd += i;
            }
            i++;
        }

        printf("Sum of even numbers: %d\n", sumEven);
        printf("Sum of odd numbers: %d\n", sumOdd);
    }

    return 0;
}
