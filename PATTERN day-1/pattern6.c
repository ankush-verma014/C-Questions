// Write C program to print given pattern.

// 1  2  3  4  5
// 2  4  6  8 10
// 3  6  9 12 15
// 4  8 12 16 20
// 5 10 15 20 25

#include <stdio.h>

int main() {
    int nr,nc,r,c;
    
    printf("Enter a number of rows and coloumn:");
    scanf("%d %d",&nr,&nc);
    
    for(r=1;r<=nr;r++)
    {
        for(c=1;c<=nc;c++)
        {
            
            printf("%d ",c*r);
        }
        
        printf("\n");
    }

    return 0;
}