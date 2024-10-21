// Write C program to print given pattern.

// 5  4  3  2  1
// 5  4  3  2  1
// 5  4  3  2  1
// 5  4  3  2  1
// 5  4  3  2  1

#include <stdio.h>

int main() {
    int nr,nc,r,c;
    
    printf("Enter a number of rows and coloumn:");
    scanf("%d %d",&nr,&nc);
    
    for(r=1;r<nr;r++)
    {
        for(c=nc;c>0;c--)
        {
            printf("%d ",c);
        }
        
        printf("\n");
    }

    return 0;
}