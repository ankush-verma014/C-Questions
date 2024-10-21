// Write C program to print given pattern.

// A  B  C  D  
// B  C  D  E
// C  D  E  F
// D  E  F  G

#include <stdio.h>

int main() {
    int nr, nc, r, c;
    char a;
    scanf("%d %d", &nr, &nc);

    for (r = 0; r <= nr; r++) {
        a= 'A' +r;
        for (c = 0; c <= nc; c++) {
            printf("%c ", a++);
        }
        printf("\n");
    }
    return 0;
}