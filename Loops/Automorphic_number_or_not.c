#include <stdio.h>
#include <math.h>

int isAutomorphic(int num) {
    int square = num * num;
    while (num > 0) {
        if (num % 10 != square % 10) {
            return 0;
        }
        num /= 10;
        square /= 10;
    }
    return 1;
}

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);

    if (isAutomorphic(number)) {
        printf("%d is an automorphic number.\n", number);
    } else {
        printf("%d is not an automorphic number.\n", number);
    }

    return 0;
}
