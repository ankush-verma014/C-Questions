// Write C program to print given pattern.

// A  B  C  D 
// E  F  G  H
// I  J  K  L
// M  N  O  P
// Q  R  S  T

#include <stdio.h>

int main() {
    int nr, nc, r, c;
    char a = 'A';
     
    printf("Enter a value of rows and colomn:");
    scanf("%d %d", &nr, &nc);

    for (r = 1; r <= nr; r++) 
    {
        for (c = 1; c <= nc; c++) 
        {
            printf("%c  ", a++);
        }
        printf("\n");
    }

    return 0;
}