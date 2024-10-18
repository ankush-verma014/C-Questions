#include <stdio.h>
#include <math.h>

int main() {
    int n, i, j, isPrime, found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Output:\n");

    for (i = 2; i <= n / 2; i++) 
    {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++) 
        {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) 
        {
            isPrime = 1;
            for (j = 2; j <= (n - i) / 2; j++) 
            {
                if ((n - i) % j == 0) 
                {
                    isPrime = 0;
                    break;
                }
            }
            if (isPrime) 
            {
                printf("%d = %d + %d\n", n, i, n - i);
                found = 1;
            }
        }
    }

    if (!found) 
    {
        printf("No such pair of prime numbers exists.\n");
    }

    return 0;
}


    
