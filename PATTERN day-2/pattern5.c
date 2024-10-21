// Write C program to print given pattern.

// A  E  I  M
// B  F  J  N
// C  G  K  O
// D  H  L  P

#include <stdio.h>

int main() {
    int nr, nc, r, c;
   
     
    printf("Enter a value of rows and colomn:");
    scanf("%d %d", &nr, &nc);

    for (r = 0; r < nr; r++) 
    {
        for (c = 0; c < nc; c++) 
        {
             char a = 'A'+r;
            printf("%c  ", a+c*nr);
        }
        printf("\n");
    }

    return 0;
}