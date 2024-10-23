// Write a C program to print given pattern.

//  A  B  C  D  E
//     A  B  C  D
//        A  B  C
//           A  B
//              A

#include <stdio.h>

int main() {
    int nr;
    
    scanf("%d",&nr);

    for (int r = 0; r < nr; r++) {
        char ch = 'A';
        for (int c = 0; c < nr - r; c++) {
            printf("%c ", ch++);
        }
        printf("\n");
        for (int c = 0; c <= r; c++) {
            printf("  ");
        }
    }

    return 0;
}