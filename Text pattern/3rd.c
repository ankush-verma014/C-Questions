// Write C program to print given pattern.

// 1
// 2  6
// 3  7 10
// 4  8 11 13
// 5  9 12 14 15

// Solve:

#include <stdio.h>

int main() {
    int nr,r,c,b;
    scanf("%d",&nr);
    for(r=1;r<=nr;r++){
       int k=nr-1,a=r;
        for(c=1;c<=r;c++){
           printf("%4d",a);
           a+=k--;
        }
            printf("\n");
    }

    return 0;
}
