
// Write a C program to given pattern.


// *  *  *  *  *  *  *  *  *
//    *  *  *  *  *  *  *
//       *  *  *  *  *
//          *  *  *
//             *

#include <stdio.h>

int main() {
    int nr,r,c;
    
    scanf("%d",&nr);

    for (r= nr; r>= 1; r--) {
    
        for ( c= 1; c <= (nr - r) * 2; c++) {
            printf(" ");
        }
    
        for (c = 1; c <= r * 2 - 1; c++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
