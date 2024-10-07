#include <stdio.h>

int main() {
    int num1, num2;
    char operation;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("Enter operation (+, -, *, /, %): ");
    scanf(" %c", &operation);

    switch(operation) 
    {
        case '+':
            printf("Addition is : %d\n", num1 + num2);
            break;
        case '-':
            printf("Subtraction is : %d\n", num1 - num2);
            break;
        case '*':
            printf("Multiplication is : %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Division is : %d\n", num1 / num2);
            else
                printf("Error! Division by zero.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Modulus is : %d\n", num1 % num2);
            else
                printf("Error! Division by zero.\n");
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}
