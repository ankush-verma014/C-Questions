#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch (num % 2) {
        case 0:
            printf("even\n");
            break;
        case 1:
            printf("odd\n");
            break;
    }

    return 0;
}
