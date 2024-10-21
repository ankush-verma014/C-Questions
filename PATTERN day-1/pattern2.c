// Write C program to print given pattern.

// 1  1  1  1  1
// 2  2  2  2  2
// 3  3  3  3  3
// 4  4  4  4  4

#include <stdio.h>

int main() {
    int nr,nc,r,c;
    
    printf("Enter a number of rows and column:");
    scanf("%d %d",&nr,&nc);
    
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
        {
            printf("%d ",r);
        }
        
        printf("\n");
    }

    return 0;
}