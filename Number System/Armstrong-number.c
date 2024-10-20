// An Armstrong number (or narcissistic number) is a number that is equal to the sum of its own digits each 
// raised to the power of the number of digits. For example, 153 is an Armstrong number because:
// example- 153

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