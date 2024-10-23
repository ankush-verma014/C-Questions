// Write a C program to print given pattern.

// *  *  *  *  *
//    *  *  *  *
//       *  *  *
//          *  *
//             *

#include <stdio.h>

int main() {
    int nr;
    scanf("%d",&nr);

    for (int r = 0; r < nr; r++) {
        for (int c = 0; c < nr - r; c++) {
            printf("* ");
        }
        printf("\n");
        for (int c = 0; c <= r; c++) {
            printf("  ");
        }
    }

    return 0;
}