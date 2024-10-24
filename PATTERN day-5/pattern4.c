// Write C program to print given pattern.


//             *
//          *  *
//       *     *
//    *        *
// *  *  *  *  *

#include <stdio.h>

int main() {
    int nr;
    scanf("%d",&nr);

    for (int r = 1; r <= nr; r++) 
    {
        for (int c = 1; c <= nr - r; c++) 
        {
            printf("  ");
        }
        for (int k = 1; k <= r; k++) 
        {
            if (k == 1 || k == r || r == nr) 
            {
                printf("* ");
            } else 
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}