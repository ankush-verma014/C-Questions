#include <stdio.h>

 int main() {
    int number; 
    int sum = 0;  

    printf("Input integers (enter 0 to stop):\n");

    while (1) 
    {
        printf("Input a number: ");
        scanf("%d", &number);  

        if (number == 0) 
        {
            break; 
        }

        if (number > 0) 
        {
            sum += number;
        }
    }

    printf("Sum of positive integers: %d\n", sum);

    return 0;
}

