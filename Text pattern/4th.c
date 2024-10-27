// Armstrong numbers
// Write a C program to find all Armstrong numbers between 100 to n.

// 153 is an Armstrong number because (1)^3+(5)^3+(3)^3 = 153.

// sum of cube of its digit is equal to number itself.
// Sample Input
// 500
// Sample Output
// Armstrong numbers between 100 and 500 are: 153 370 371 407

// Solve:

#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Enter the upper limit: ");
    scanf("%d", &n);

    printf("Armstrong numbers between 100 and %d are:\n", n);

   
    for (int i = 100; i <= n; i++) {
        int Num, remainder, result = 0;
        Num = i;

       
        while (Num != 0) 
        {
            remainder =Num % 10;
            result += pow(remainder, 3);
            Num /= 10;
        }

        if (result == i) 
        {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}