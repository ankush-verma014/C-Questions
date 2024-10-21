// Write C program to print given pattern.

// 1   6   11   16  
// 2   7   12   17
// 3   8   13   18
// 4   9   14   19
// 5   10  15   20

// #include<stdio.h>
// int main(){
//     int nr, nc ;
    
//     printf("Enter a number of rows and colomn:");
//     scanf("%d %d", &nr, &nc);

//     for(int r = 1; r <= nr; r++){
//         for(int c = 1; c <= nc; c++){
//             printf("%3d ", r + (c - 1) * nr);
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    int nr, nc, r, c, n;
    scanf("%d %d", &nr, &nc);

    for (r = 1; r <= nr; r++) {
        n = r;
        for (c = 1; c <= nc; c++) {
            printf("%d ", n);
            n =n + nr;
        }
        printf("\n");
    }
    return 0;
}