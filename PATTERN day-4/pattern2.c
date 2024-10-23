// Write a C program to print given pattern.


// 1  2  3  4  5
//    4  6  8 10
//       9 12 15
//         16 20
//            25

#include <stdio.h>

int main() {
    int r, c, n, num;
    scanf(" %d",&n);

    for (r = 1; r <= n; r++) {
        num = r * r;
        for (c = 1; c < r; c++) {
            printf("   ");
        }
        for (c = r; c <= n; c++) {
            printf("%2d ", num);
            num += r;
        }
        printf("\n");
    }

    return 0;
}